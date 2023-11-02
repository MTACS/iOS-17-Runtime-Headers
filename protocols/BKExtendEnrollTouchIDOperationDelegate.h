
@protocol BKExtendEnrollTouchIDOperationDelegate <BKOperationDelegate, BKFingerprintCaptureOperationDelegate, BKTouchIDButtonBlockingOperationDelegate>

@optional

- (void)extendEnroll:(BKOperation *)arg1 hasUpdated:(bool)arg2;

@end
