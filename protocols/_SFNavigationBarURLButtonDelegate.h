
@protocol _SFNavigationBarURLButtonDelegate <NSObject>

@required

- (bool)navigationBarURLButton:(_SFNavigationBarURLButton *)arg1 canWriteAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)navigationBarURLButton:(_SFNavigationBarURLButton *)arg1 shouldAllowLongPressAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)navigationBarURLButton:(_SFNavigationBarURLButton *)arg1 shouldShowMenuForGestureWithRecognizer:(UIGestureRecognizer *)arg2;
- (void)navigationBarURLButtonBeginSuppressingPlaceholder:(_SFNavigationBarURLButton *)arg1;
- (void)navigationBarURLButtonDidReceiveCopyCommand:(_SFNavigationBarURLButton *)arg1;
- (void)navigationBarURLButtonDidReceivePasteCommand:(_SFNavigationBarURLButton *)arg1;
- (void)navigationBarURLButtonDidRequestFocusForPencilInput:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: _SFNavigationBarURLButton *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)navigationBarURLButtonEndSuppressingPlaceholder:(_SFNavigationBarURLButton *)arg1;
- (bool)navigationBarURLButtonIsUsingNarrowLayout:(_SFNavigationBarURLButton *)arg1;
- (bool)navigationBarURLButtonShouldCopy:(_SFNavigationBarURLButton *)arg1;
- (bool)navigationBarURLButtonShouldPaste:(_SFNavigationBarURLButton *)arg1;
- (UITextField *)textFieldForNavigationBarURLButton:(_SFNavigationBarURLButton *)arg1;
- (bool)textFieldIsEditableForNavigationBarURLButton:(_SFNavigationBarURLButton *)arg1;
- (NSString *)textForNavigationBarURLButton:(_SFNavigationBarURLButton *)arg1;

@end
