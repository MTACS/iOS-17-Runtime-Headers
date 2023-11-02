
@protocol BKEnrollTouchIDOperationDelegate <BKEnrollOperationDelegate, BKFingerprintCaptureOperationDelegate, BKTouchIDButtonBlockingOperationDelegate>

@optional

- (void)enrollOperation:(BKEnrollOperation *)arg1 progressedWithTouchIDInfo:(BiometricKitEnrollProgressInfo *)arg2;

@end
