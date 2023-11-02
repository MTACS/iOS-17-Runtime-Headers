
@protocol _UIStatusBarVisualProvider <NSObject>

@required

+ (struct CGSize { double x1; double x2; })intrinsicContentSizeForOrientation:(long long)arg1;
+ (bool)requiresIterativeOverflowLayout;
+ (bool)scalesWithScreenNativeScale;

- (UIFont *)clockFont;
- (NSArray *)orderedDisplayItemPlacementsInRegionWithIdentifier:(NSString *)arg1;
- (void)setStatusBar:(_UIStatusBar *)arg1;
- (NSArray *)setupInContainerView:(UIView *)arg1;
- (_UIStatusBar *)statusBar;
- (_UIStatusBarStyleAttributes *)styleAttributesForStyle:(long long)arg1;
- (bool)supportsIndirectPointerTouchActions;

@optional

+ (struct CGSize { double x1; double x2; })intrinsicLockScreenContentSizeForOrientation:(long long)arg1;
+ (double)referenceScreenScale;

- (void)actionable:(id <_UIStatusBarActionable>)arg1 highlighted:(bool)arg2 initialPress:(bool)arg3;
- (_UIStatusBarAnimation *)additionAnimationForDisplayItemWithIdentifier:(_UIStatusBarIdentifier *)arg1 itemAnimation:(_UIStatusBarAnimation *)arg2;
- (void)avoidanceFrameUpdatedFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAnimationSettings:(BSAnimationSettings *)arg2 options:(unsigned long long)arg3;
- (bool)canFixupDisplayItemAttributes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clockBoundsForLayoutItem:(_UIStatusBarDisplayItem *)arg1;
- (void)dataUpdated:(_UIStatusBarData *)arg1;
- (NSSet *)displayItemIdentifiersForPartWithIdentifier:(NSString *)arg1;
- (void)itemCreated:(_UIStatusBarItem *)arg1;
- (void)modeUpdatedFromMode:(long long)arg1;
- (void)orientationUpdatedFromOrientation:(long long)arg1;
- (_UIStatusBarStyleAttributes *)overriddenStyleAttributesForDisplayItemWithIdentifier:(_UIStatusBarIdentifier *)arg1;
- (NSOrderedSet *)region:(_UIStatusBarRegion *)arg1 willSetDisplayItems:(NSOrderedSet *)arg2;
- (NSSet *)regionIdentifiersForPartWithIdentifier:(NSString *)arg1;
- (_UIStatusBarAnimation *)removalAnimationForDisplayItemWithIdentifier:(_UIStatusBarIdentifier *)arg1 itemAnimation:(_UIStatusBarAnimation *)arg2;
- (bool)showSensorActivityIndicatorWithoutPortalView;
- (void)sizeUpdatedFromSize:(struct CGSize { double x1; double x2; })arg1;
- (void)statusBarEnabledPartsUpdated;
- (void)statusBarRegionsUpdated;
- (void)styleUpdatedFromStyle:(long long)arg1;
- (NSArray *)willUpdateWithData:(_UIStatusBarData *)arg1;

@end
