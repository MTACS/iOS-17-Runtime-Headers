
@protocol WFTakePhotoImmediateModeDelegate <NSObject>

@required

- (void)manager:(WFTakePhotoImmediateModeManager *)arg1 didFinishWithPhoto:(AVCapturePhoto *)arg2 error:(NSError *)arg3;
- (void)managerDidBecomeReady:(WFTakePhotoImmediateModeManager *)arg1;

@end
