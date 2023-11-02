
@protocol STUIStatusBarPillRegionVisualProvider <STUIStatusBarVisualProvider>

@required

- (bool)expanded;
- (STUIStatusBarVisualProvider_PillRegionCoordinator *)pillRegionCoordinator;
- (void)setExpanded:(bool)arg1;
- (void)setPillRegionCoordinator:(STUIStatusBarVisualProvider_PillRegionCoordinator *)arg1;

@optional

- (STUIStatusBarAnimation *)animationForBackgroundActivityPillAnimation:(STUIStatusBarAnimation *)arg1 duration:(double)arg2 scale:(double)arg3;

@end
