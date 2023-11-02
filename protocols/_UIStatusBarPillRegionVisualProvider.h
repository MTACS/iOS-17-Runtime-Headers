
@protocol _UIStatusBarPillRegionVisualProvider <_UIStatusBarVisualProvider>

@required

- (bool)expanded;
- (_UIStatusBarVisualProvider_PillRegionCoordinator *)pillRegionCoordinator;
- (void)setExpanded:(bool)arg1;
- (void)setPillRegionCoordinator:(_UIStatusBarVisualProvider_PillRegionCoordinator *)arg1;

@optional

- (_UIStatusBarAnimation *)animationForBackgroundActivityPillAnimation:(_UIStatusBarAnimation *)arg1 duration:(double)arg2 scale:(double)arg3;

@end
