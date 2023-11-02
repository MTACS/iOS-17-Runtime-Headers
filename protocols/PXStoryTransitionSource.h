
@protocol PXStoryTransitionSource

@required

- (void)applyTransitionEffectAlpha:(double)arg1 auxiliaryEffectAlpha:(double)arg2;
- (void)didBeginTransitionWithEffect:(PXGEffect *)arg1 auxiliaryEffect:(PXGEffect *)arg2;
- (void)didEndTransitionWithEffect:(PXGEffect *)arg1 auxiliaryEffect:(PXGEffect *)arg2;
- (PXStoryClipLayout *)layoutForClipWithIdentifier:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionViewport;

@end
