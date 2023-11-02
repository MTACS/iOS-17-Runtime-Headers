
@protocol SBIconViewBehaviorDelegate <NSObject>

@optional

- (UIColor *)accessibilityTintColorForIconView:(SBIconView *)arg1;
- (long long)closeBoxTypeForIconView:(SBIconView *)arg1;
- (UIViewController<SBIconViewCustomImageViewControlling> *)customImageViewControllerForIconView:(SBIconView *)arg1;
- (unsigned long long)focusEffectTypeForIconView:(SBIconView *)arg1;
- (bool)icon:(SBIconView *)arg1 canReceiveGrabbedIcon:(SBIcon *)arg2;
- (bool)iconShouldAllowAccessoryTap:(SBIconView *)arg1;
- (bool)iconShouldAllowCloseBoxTap:(SBIconView *)arg1;
- (bool)iconShouldAllowTap:(SBIconView *)arg1;
- (long long)iconView:(SBIconView *)arg1 accessoryTypeWithProposedAccessoryType:(long long)arg2;
- (bool)iconView:(SBIconView *)arg1 editingModeGestureRecognizerDidFire:(UIGestureRecognizer *)arg2;
- (bool)iconViewCanBecomeFocused:(SBIconView *)arg1;
- (long long)iconViewComponentBackgroundViewTypeForIconView:(SBIconView *)arg1;
- (bool)iconViewDisplaysAccessories:(SBIconView *)arg1;
- (bool)iconViewDisplaysBadges:(SBIconView *)arg1;
- (bool)iconViewDisplaysCloseBox:(SBIconView *)arg1;
- (bool)iconViewDisplaysLabel:(SBIconView *)arg1;
- (void)iconViewWasDiscarded:(SBIconView *)arg1;
- (void)iconViewWasRecycled:(SBIconView *)arg1;
- (SBFParallaxSettings *)parallaxSettingsForComponentsOfIconView:(SBIconView *)arg1;
- (double)scale;
- (unsigned long long)supportedGridSizeClassesForIconView:(SBIconView *)arg1;

@end
