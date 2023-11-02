
@protocol PKTextInputHandwritingControllerDelegate <NSObject>

@required

- (void)handwritingControllerDidFinishActiveCommands:(PKTextInputHandwritingController *)arg1;
- (void)handwritingControllerStrokeAlphaOverrideDidChange:(PKTextInputHandwritingController *)arg1;
- (void)handwritingControllerWritingStateDidChange:(PKTextInputHandwritingController *)arg1;
- (<PKTextInputSupportedElementDelegate> *)supportedElementDelegateForHandwritingController:(PKTextInputHandwritingController *)arg1;

@end
