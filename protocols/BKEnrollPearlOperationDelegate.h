
@protocol BKEnrollPearlOperationDelegate <BKFaceDetectOperationDelegate, BKEnrollOperationDelegate>

@optional

- (void)enrollOperation:(BKEnrollOperation *)arg1 progressedWithInfo:(BKEnrollPearlProgressInfo *)arg2;

@end
