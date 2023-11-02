
@protocol ICAuxiliaryStyling <NSObject>

@required

- (bool)becomeFirstResponderForAuxStyling;
- (bool)canIndentByamount:(long long)arg1;
- (bool)canStyleText;
- (bool)canToggleTodo;
- (void)indentByamount:(long long)arg1;
- (UIView *)inputAccessoryView;
- (UIView *)inputView;
- (bool)lockSelection;
- (bool)resignFirstResponderForAuxStyling;
- (unsigned long long)selectedStyleBIUS;
- (NSIndexSet *)selectedStyles;
- (void)setInputAccessoryView:(UIView *)arg1;
- (void)setInputView:(UIView *)arg1;
- (void)setLockSelection:(bool)arg1;
- (void)setTextStyleForCurrentSelection:(unsigned int)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleStrikethrough:(id)arg1;
- (void)toggleTodoStyle:(id)arg1;
- (void)toggleUnderline:(id)arg1;

@end
