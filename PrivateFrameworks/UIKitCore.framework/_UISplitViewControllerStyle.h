
@interface _UISplitViewControllerStyle : NSObject <_UIVisualStyleProviding> {
    UISplitViewController * _splitViewController;
}

@property (nonatomic, readonly) bool alwaysHideSidebarToggleButton;
@property (nonatomic, readonly) double maximumRubberbandingDistance;
@property (nonatomic, readonly) UIColor *primaryBackgroundColor;
@property (nonatomic, readonly) UISplitViewController *splitViewController;

- (void).cxx_destruct;
- (bool)alwaysHideSidebarToggleButton;
- (double)defaultMaximumWidthForColumn:(long long)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 splitBehavior:(long long)arg3;
- (id)initWithSplitViewController:(id)arg1;
- (double)maximumRubberbandingDistance;
- (id)primaryBackgroundColor;
- (long long)splitBehaviorForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)splitViewController;

@end
