
@protocol UIViewControllerContextTransitioningEx <UIViewControllerContextTransitioning>

@required

- (void)__runAlongsideAnimations;
- (bool)_allowUserInteraction;
- (long long)_alongsideAnimationsCount;
- (NSArray *)_containerViews;
- (void)_interactivityDidChange:(bool)arg1;
- (double)_percentOffset;
- (void)_setAllowUserInteraction:(bool)arg1;
- (void)_setContainerViews:(NSArray *)arg1;
- (void)_setPercentOffset:(double)arg1;

@end
