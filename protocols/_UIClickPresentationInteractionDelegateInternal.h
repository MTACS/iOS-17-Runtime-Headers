
@protocol _UIClickPresentationInteractionDelegateInternal <_UIClickPresentationInteractionDelegate>

@optional

- (void)_clickPresentationInteraction:(_UIClickPresentationInteraction *)arg1 dragSessionDidEndForItems:(NSArray *)arg2;
- (<_UIClickHighlightEffect> *)_clickPresentationInteraction:(_UIClickPresentationInteraction *)arg1 interactionEffectForTargetedPreview:(UITargetedPreview *)arg2;
- (void)_clickPresentationInteraction:(_UIClickPresentationInteraction *)arg1 item:(UIDragItem *)arg2 willAnimateDragCancelWithAnimator:(id <UIDragAnimating>)arg3;
- (UITargetedDragPreview *)_clickPresentationInteraction:(_UIClickPresentationInteraction *)arg1 liveDragPreviewForPresentation:(_UIClickPresentation *)arg2 dragItem:(UIDragItem *)arg3;
- (UITargetedDragPreview *)_clickPresentationInteraction:(_UIClickPresentationInteraction *)arg1 previewForCancellingDragItem:(UIDragItem *)arg2;
- (bool)_clickPresentationInteraction:(_UIClickPresentationInteraction *)arg1 shouldBeDelayedByGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)_clickPresentationInteraction:(void *)arg1 shouldBeginWithTouch:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: _UIClickPresentationInteraction *, UITouch *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)_clickPresentationInteraction:(void *)arg1 shouldPresentWithCompletion:(void *)arg2; // needs 2 arg types, found 7: _UIClickPresentationInteraction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)_clickPresentationInteractionEnded:(_UIClickPresentationInteraction *)arg1 forPresentation:(_UIClickPresentation *)arg2 reason:(unsigned long long)arg3;
- (bool)_clickPresentationInteractionShouldAllowDragAfterDismiss:(_UIClickPresentationInteraction *)arg1;
- (bool)_clickPresentationInteractionShouldAllowRapidRestart:(_UIClickPresentationInteraction *)arg1;
- (bool)_clickPresentationInteractionShouldAssociateWithDrag:(_UIClickPresentationInteraction *)arg1;
- (bool)_clickPresentationInteractionShouldPlayFeedback:(_UIClickPresentationInteraction *)arg1;
- (NSArray *)_secondaryPreviewsForClickPresentationInteraction:(_UIClickPresentationInteraction *)arg1;

@end
