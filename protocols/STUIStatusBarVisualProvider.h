
@protocol STUIStatusBarVisualProvider <NSObject>

@required

+ (struct CGSize { double x1; double x2; })intrinsicContentSizeForOrientation:(long long)arg1;
+ (bool)requiresIterativeOverflowLayout;
+ (bool)scalesWithScreenNativeScale;

- (UIFont *)clockFont;
- (NSArray *)orderedDisplayItemPlacementsInRegionWithIdentifier:(NSString *)arg1;
- (void)setStatusBar:(STUIStatusBar *)arg1;
- (NSArray *)setupInContainerView:(UIView *)arg1;
- (STUIStatusBar *)statusBar;
- (STUIStatusBarStyleAttributes *)styleAttributesForStyle:(long long)arg1;
- (bool)supportsIndirectPointerTouchActions;

@optional

+ (struct CGSize { double x1; double x2; })intrinsicLockScreenContentSizeForOrientation:(long long)arg1;
+ (double)referenceScreenScale;

- (void)actionable:(id <STUIStatusBarActionable>)arg1 highlighted:(bool)arg2 initialPress:(bool)arg3;
- (STUIStatusBarAnimation *)additionAnimationForDisplayItemWithIdentifier:(STUIStatusBarIdentifier *)arg1 itemAnimation:(STUIStatusBarAnimation *)arg2;
- (void)avoidanceFrameUpdatedFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAnimationSettings:(BSAnimationSettings *)arg2 options:(unsigned long long)arg3;
- (bool)canFixupDisplayItemAttributes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clockBoundsForLayoutItem:(STUIStatusBarDisplayItem *)arg1;
- (void)dataUpdated:(STStatusBarData *)arg1;
- (NSSet *)displayItemIdentifiersForPartWithIdentifier:(NSString *)arg1;
- (void)itemCreated:(STUIStatusBarItem *)arg1;
- (void)modeUpdatedFromMode:(long long)arg1;
- (void)orientationUpdatedFromOrientation:(long long)arg1;
- (STUIStatusBarStyleAttributes *)overriddenStyleAttributesForDisplayItemWithIdentifier:(STUIStatusBarIdentifier *)arg1;
- (NSOrderedSet *)region:(STUIStatusBarRegion *)arg1 willSetDisplayItems:(NSOrderedSet *)arg2;
- (NSSet *)regionIdentifiersForPartWithIdentifier:(NSString *)arg1;
- (STUIStatusBarAnimation *)removalAnimationForDisplayItemWithIdentifier:(STUIStatusBarIdentifier *)arg1 itemAnimation:(STUIStatusBarAnimation *)arg2;
- (bool)showSensorActivityIndicatorWithoutPortalView;
- (void)sizeUpdatedFromSize:(struct CGSize { double x1; double x2; })arg1;
- (void)statusBarEnabledPartsUpdated;
- (void)statusBarRegionsUpdated;
- (void)styleUpdatedFromStyle:(long long)arg1;
- (void)updateLumaTracking:(bool)arg1;
- (NSArray *)willUpdateWithData:(STMutableStatusBarData *)arg1;

@end
