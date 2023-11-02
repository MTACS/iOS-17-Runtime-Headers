
@protocol UITextDragDelegate_Private <UITextDragDelegate>

@optional

- (bool)_textDraggableView:(UIView<UITextDraggable> *)arg1 beginningDragShouldDelayCompetingGestureRecognizer:(UIGestureRecognizer *)arg2;
- (long long)_textDraggableView:(UIView<UITextDraggable> *)arg1 dataOwnerForDrag:(id <UITextDragRequest>)arg2;
- (UITextRange *)textDraggableView:(UIView<UITextDraggable> *)arg1 textRangeForDragFromPosition:(UITextPosition *)arg2 defaultRange:(UITextRange *)arg3 session:(id <UIDragSession>)arg4;

@end
