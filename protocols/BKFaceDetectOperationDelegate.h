
@protocol BKFaceDetectOperationDelegate <BKOperationDelegate>

@optional

- (void)operation:(BKOperation *)arg1 faceDetectStateChanged:(BKFaceDetectStateInfo *)arg2;
- (void)operation:(BKOperation *)arg1 motionDetectStateChanged:(BKMotionDetectStateInfo *)arg2;

@end
