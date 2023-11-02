
@interface PDFTextWidgetTextView : UITextView

- (id)accessibilityLabel;
- (id)accessibilityParent;
- (id)accessibilityTitleUIElement;
- (void)handleBackTab;
- (void)handleTab;
- (void)insertTextSuggestion:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)keyCommands;

@end
