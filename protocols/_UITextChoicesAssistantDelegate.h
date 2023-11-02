
@protocol _UITextChoicesAssistantDelegate <NSObject>

@required

- (void)acceptingCandidateWithTrigger:(NSString *)arg1;
- (UIResponder<UIWKInteractionViewProtocol> *)asynchronousInputDelegate;
- (void)dismissTextChoicePrompt;
- (void)fadeAutocorrectPrompt;
- (UIResponder<UITextInput> *)inputDelegate;
- (UIView *)inputOverlayContainer;
- (void)presentTextChoicePromptForRange:(UITextRange *)arg1;
- (void)rejectAutocorrection:(TIKeyboardCandidate *)arg1;
- (void)replaceText:(UITextReplacement *)arg1;
- (TIAutocorrectionList *)savedAutocorrectionListForCandidate:(TIKeyboardCandidate *)arg1;

@end
