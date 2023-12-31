
@interface _VUITVAppNavigationController_iOS : _VUITVAppNavigationController {
    bool  _originalValueForNavigationBarForceFullHeightInLandscape;
    bool  _shouldFakeStatusBarVisible;
    bool  _shouldPreventContentFromShiftingVertically;
}

@property (nonatomic) bool originalValueForNavigationBarForceFullHeightInLandscape;
@property (nonatomic) bool shouldFakeStatusBarVisible;
@property (nonatomic) bool shouldPreventContentFromShiftingVertically;

- (id)_accessibilityButtonBackgroundDefaultTintColor;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)didPresentTraitsOverridingViewController;
- (void)didShowViewController:(id)arg1 animated:(bool)arg2;
- (bool)originalValueForNavigationBarForceFullHeightInLandscape;
- (long long)preferredStatusBarStyle;
- (void)setOriginalValueForNavigationBarForceFullHeightInLandscape:(bool)arg1;
- (void)setShouldFakeStatusBarVisible:(bool)arg1;
- (void)setShouldPreventContentFromShiftingVertically:(bool)arg1;
- (bool)shouldFakeStatusBarVisible;
- (bool)shouldPreventContentFromShiftingVertically;
- (void)viewDidLoad;
- (void)willPresentTraitsOverridingViewController;

@end
