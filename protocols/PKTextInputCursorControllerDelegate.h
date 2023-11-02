
@protocol PKTextInputCursorControllerDelegate <NSObject>

@required

- (bool)cursorControllerCustomHighlightFeedbackIsVisible:(PKTextInputCursorController *)arg1;
- (long long)cursorControllerWritingState:(PKTextInputCursorController *)arg1;
- (UIWindowScene *)windowSceneForController:(PKTextInputCursorController *)arg1;

@end
