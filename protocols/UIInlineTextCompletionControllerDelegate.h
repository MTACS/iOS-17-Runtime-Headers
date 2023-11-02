
@protocol UIInlineTextCompletionControllerDelegate

@required

- (void)acceptPredictiveInput:(TIKeyboardCandidate *)arg1;
- (void)acceptPredictiveInput:(TIKeyboardCandidate *)arg1 appendSeparator:(bool)arg2 executionContext:(UIKeyboardTaskExecutionContext *)arg3;
- (UIKeyboardAutocorrectionController *)autocorrectionController;
- (bool)delegateSupportsCorrectionUI;
- (TIDocumentState *)documentState;
- (void)generateCandidates;
- (bool)inlineTextCompletionAllowedForAutocorrectionType;
- (<UIInlineTextCompletionLearning> *)inlineTextCompletionLearner;
- (UIKBInputDelegateManager *)inputDelegateManager;
- (TIKeyboardInputManagerState *)inputManagerState;
- (UIView *)inputOverlayContainer;
- (bool)isSelecting;
- (TIKeyboardState *)keyboardState;
- (bool)presentTextCompletionAsMarkedText:(RTIStyledIntermediateText *)arg1;
- (UITextRange *)rangeForTextCompletionInput:(NSString *)arg1;
- (void)refreshKeyboardState;
- (void)removeAutocorrectPrompt;
- (void)removeTextCompletionFromMarkedText:(NSString *)arg1;
- (bool)showingEmojiSearch;
- (UIKeyboardTaskQueue *)taskQueue;
- (NSArray *)textCompletionInputRectsFromFirstRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lastRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (UITextInputTraits *)textInputTraits;
- (void)updateKeyboardConfigurations;

@end
