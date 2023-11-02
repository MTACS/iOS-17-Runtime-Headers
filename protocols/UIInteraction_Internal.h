
@protocol UIInteraction_Internal <UIInteraction_Private>

@optional

- (NSArray *)_dynamicGestureRecognizersForEvent:(UIDragEvent *)arg1;
- (bool)_supportsAssociation;
- (UITargetedPreview *)_targetedPreviewForContinuingEffectWithPreview:(UITargetedPreview *)arg1;
- (void)_viewTraitCollectionDidChange:(UITraitCollection *)arg1;
- (void)_viewVisibilityDidChange;
- (void)_willMoveFromWindow:(UIWindow *)arg1 toWindow:(UIWindow *)arg2;

@end
