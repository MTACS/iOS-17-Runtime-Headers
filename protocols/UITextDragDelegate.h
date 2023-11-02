
@protocol UITextDragDelegate <NSObject>

@optional

- (UITargetedDragPreview *)textDraggableView:(UIView<UITextDraggable> *)arg1 dragPreviewForLiftingItem:(UIDragItem *)arg2 session:(id <UIDragSession>)arg3;
- (void)textDraggableView:(UIView<UITextDraggable> *)arg1 dragSessionDidEnd:(id <UIDragSession>)arg2 withOperation:(unsigned long long)arg3;
- (void)textDraggableView:(UIView<UITextDraggable> *)arg1 dragSessionWillBegin:(id <UIDragSession>)arg2;
- (NSArray *)textDraggableView:(UIView<UITextDraggable> *)arg1 itemsForDrag:(id <UITextDragRequest>)arg2;
- (void)textDraggableView:(UIView<UITextDraggable> *)arg1 willAnimateLiftWithAnimator:(id <UIDragAnimating>)arg2 session:(id <UIDragSession>)arg3;

@end
