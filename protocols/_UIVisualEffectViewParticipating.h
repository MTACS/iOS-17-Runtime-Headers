
@protocol _UIVisualEffectViewParticipating <NSObject>

@required

- (void)applyIdentityFilterEffects;
- (void)applyIdentityViewEffects;
- (void)applyRequestedFilterEffects;
- (void)applyRequestedViewEffects;
- (UIView<_UIVisualEffectViewParticipating> *)containedView;
- (NSArray *)filters;
- (_UIVisualEffectViewBackdropCaptureGroup *)primaryCaptureGroup;
- (void)setContainedView:(UIView<_UIVisualEffectViewParticipating> *)arg1;
- (void)setFilters:(NSArray *)arg1;
- (void)setPrimaryCaptureGroup:(_UIVisualEffectViewBackdropCaptureGroup *)arg1;
- (void)setViewEffects:(NSArray *)arg1;
- (NSArray *)viewEffects;

@end
