
@protocol PKTextInputResultCommandDelegate <NSObject>

@required

- (PKTextInputCanvasController *)resultCommandCanvasController:(PKTextInputResultCommand *)arg1;
- (PKTextInputCursorController *)resultCommandCursorController:(PKTextInputResultCommand *)arg1;
- (PKTextInputFeedbackController *)resultCommandFeedbackController:(PKTextInputResultCommand *)arg1;
- (void)resultCommandStateDidChange:(PKTextInputResultCommand *)arg1;
- (<PKTextInputSupportedElementDelegate> *)resultCommandSupportedElementDelegate:(PKTextInputResultCommand *)arg1;

@end
