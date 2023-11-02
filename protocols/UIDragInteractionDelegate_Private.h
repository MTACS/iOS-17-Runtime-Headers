
@protocol UIDragInteractionDelegate_Private <UIDragInteractionDelegate>

@optional

- (bool)_dragInteraction:(UIDragInteraction *)arg1 canExcludeCompetingGestureRecognizer:(UIGestureRecognizer *)arg2;
- (bool)_dragInteraction:(UIDragInteraction *)arg1 competingGestureRecognizerShouldDelayLift:(UIGestureRecognizer *)arg2;
- (<UIViewSpringAnimationBehaviorDescribing> *)_dragInteraction:(UIDragInteraction *)arg1 customSpringAnimationBehaviorForCancellingItem:(UIDragItem *)arg2;
- (long long)_dragInteraction:(UIDragInteraction *)arg1 dataOwnerForAddingToSession:(id <UIDragSession>)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (long long)_dragInteraction:(UIDragInteraction *)arg1 dataOwnerForSession:(id <UIDragSession>)arg2;
- (void)_dragInteraction:(UIDragInteraction *)arg1 liftAnimationDidChangeDirection:(long long)arg2;
- (void)_dragInteraction:(void *)arg1 prepareForSession:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: UIDragInteraction *, <UIDragSession> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (_UIDragSessionProperties *)_dragInteraction:(UIDragInteraction *)arg1 sessionPropertiesForSession:(id <UIDragSession>)arg2;
- (bool)_dragInteraction:(UIDragInteraction *)arg1 sessionSupportsSystemDrag:(id <UIDragSession>)arg2;
- (bool)_dragInteraction:(UIDragInteraction *)arg1 shouldDelayCompetingGestureRecognizer:(UIGestureRecognizer *)arg2;
- (UIView *)_dragInteraction:(UIDragInteraction *)arg1 viewToSnapshotItem:(UIDragItem *)arg2;
- (bool)_dragInteractionAllowsDragOverridingMasterSwitch:(UIDragInteraction *)arg1;
- (void)_dragInteractionDidCancelLiftWithoutDragging:(UIDragInteraction *)arg1;
- (NSArray *)_requiredContextIDsForDragSessionInView:(UIView *)arg1;

@end
