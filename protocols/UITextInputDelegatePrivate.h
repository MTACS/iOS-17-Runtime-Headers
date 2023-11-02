
@protocol UITextInputDelegatePrivate

@required

- (void)didChangePhraseBoundary;
- (void)didClearText;
- (void)layoutHasChanged;
- (void)showSelectionCommands;

@optional

- (NSAttributedString *)inlineCompletionAsMarkedText;

@end
