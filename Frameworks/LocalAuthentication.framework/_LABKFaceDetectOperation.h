
@interface _LABKFaceDetectOperation : _LABKPresenceDetectOperation

@property (nonatomic, readonly) BKFaceDetectOperation *_BKFaceDetectOperation;
@property (nonatomic) <BKFaceDetectOperationDelegate> *delegate;

- (id)_BKFaceDetectOperation;
- (id)delegate;
- (void)operation:(id)arg1 faceDetectStateChanged:(id)arg2;

@end
