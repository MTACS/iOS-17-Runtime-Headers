
@protocol UIKeyboardImplStateProtocol <NSObject, UITextInputDelegate>

@required

- (void)clearInputForMarkedText;
- (void)didChangeForwardingInputDelegate:(UIResponder<UIKeyInput> *)arg1;
- (TIDocumentState *)documentState;
- (TIKeyboardState *)keyboardState;
- (void)setDocumentState:(TIDocumentState *)arg1;
- (void)setShouldIgnoreTextInputChanges:(bool)arg1;
- (bool)shouldIgnoreTextInputChanges;
- (void)syncDocumentStateToInputDelegate;
- (void)textSuggestionDidChange:(id <UITextInput>)arg1;
- (void)updateKeyboardStateForDeletion;
- (void)updateKeyboardStateForInsertion:(NSString *)arg1;
- (void)updateKeyboardStateForReplacingText:(NSString *)arg1 withText:(NSString *)arg2;
- (void)updateTextInputKeyboardSource;

@end
