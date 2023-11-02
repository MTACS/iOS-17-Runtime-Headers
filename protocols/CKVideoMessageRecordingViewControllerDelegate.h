
@protocol CKVideoMessageRecordingViewControllerDelegate <NSObject>

@required

- (void)ckVideoMessageRecordingViewController:(CKVideoMessageRecordingViewController *)arg1 mediaObjectCaptured:(CKMediaObject *)arg2 error:(NSError *)arg3;
- (void)ckVideoMessageRecordingViewControllerRecordingCanceled:(CKVideoMessageRecordingViewController *)arg1;

@end
