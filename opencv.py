import cv2 as cv
import numpy as np 

camera = cv.VideoCapture(0)


while True:
    _, frame = camera.read()

    cv.imshow('camera', frame)
 
    laplacian = cv.Laplacian(frame, cv.CV_64F)
    laplacian = np.uint8(laplacian)
    cv.imshow('Laplacian', laplacian)

    edges = cv.Canny(frame, 150, 150)
    cv.imshow('canny', edges)
    key = cv.waitKey(10000)
    if key == 27:
     break
    camera.release()
    cv.destroyAllWindows()
   