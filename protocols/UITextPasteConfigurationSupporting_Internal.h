
@protocol UITextPasteConfigurationSupporting_Internal <UITextPasteConfigurationSupporting, UITextInput>

@required

- (NSAttributedString *)_attributedStringForInsertionOfAttributedString:(NSAttributedString *)arg1;
- (NSArray *)_implicitPasteConfigurationClasses;
- (UITextInputController *)_inputController;
- (void)addInvisibleRange:(UITextRange *)arg1;
- (bool)allowsEditingTextAttributes;
- (void)layoutIfNeeded;
- (void)removeInvisibleRange:(UITextRange *)arg1;

@optional

+ (Class)_textPasteItemClass;

- (void)_pasteSessionDidFinish:(id <UITextPasteSession>)arg1;
- (void)setUsesStandardTextScaling:(bool)arg1;
- (bool)usesStandardTextScaling;

@end
