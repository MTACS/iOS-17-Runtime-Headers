
@protocol PKPaletteTransitionDelegate <NSObject>

@required

- (void)transitionExpandedToCollapsedRatioDidChange:(PKPaletteTransition *)arg1;
- (void)transitionIntermediateVisualStateDidChange:(PKPaletteTransition *)arg1;
- (void)transitionPointingDirectionDidChange:(PKPaletteTransition *)arg1;

@end
