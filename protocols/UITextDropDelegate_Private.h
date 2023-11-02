
@protocol UITextDropDelegate_Private <UITextDropDelegate>

@optional

- (long long)_textDroppableView:(UIView<UITextDroppable> *)arg1 dataOwnerForDrop:(id <UITextDropRequest>)arg2;
- (void)textDroppableView:(UIView<UITextDroppable> *)arg1 dropSession:(id <UIDropSession>)arg2 didMoveCaretToRange:(UITextRange *)arg3;
- (bool)textDroppableView:(UIView<UITextDroppable> *)arg1 dropSession:(id <UIDropSession>)arg2 willMoveCaretToRange:(UITextRange *)arg3;
- (UITextPosition *)textDroppableView:(UIView<UITextDroppable> *)arg1 positionForDrop:(id <UITextDropRequest_Private>)arg2;
- (UITextRange *)textDroppableView:(UIView<UITextDroppable> *)arg1 rangeForDrop:(id <UITextDropRequest_Private>)arg2;

@end
