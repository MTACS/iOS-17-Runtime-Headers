
@protocol UIKeyboardCameraRemoteViewControllerHost <NSObject>

@required

- (void)keyboardCameraDidAccept;
- (void)keyboardCameraDidCancel;
- (void)keyboardCameraDidUpdateString:(NSString *)arg1;

@end
