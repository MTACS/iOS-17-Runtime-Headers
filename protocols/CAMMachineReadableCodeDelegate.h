
@protocol CAMMachineReadableCodeDelegate <NSObject>

@required

- (void)captureController:(CUCaptureController *)arg1 didOutputAppClipCodeResults:(NSArray *)arg2;
- (void)captureController:(CUCaptureController *)arg1 didOutputQRCodeResults:(NSArray *)arg2;

@end
