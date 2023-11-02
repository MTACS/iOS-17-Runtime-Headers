
@interface PUAssetPickerManagedViewController : UIViewController <PUAssetPickerOnboardingViewDelegate, PXChangeObserver, UINavigationControllerDelegate, UISplitViewControllerDelegate> {
    PUPickerConfiguration * _configuration;
    UINavigationController * _contentNavigationController;
    PUAssetPickerContainerController * _contentViewController;
    UIView * _onboardingOverlayView;
    UINavigationController * _sidebarNavigationController;
    PUSidebarViewController * _sidebarViewController;
    UISplitViewController * _splitViewController;
}

@property (nonatomic, readonly) PUPickerConfiguration *configuration;
@property (nonatomic, readonly) UINavigationController *contentNavigationController;
@property (nonatomic, readonly) PUAssetPickerContainerController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *onboardingOverlayView;
@property (nonatomic, readonly) UINavigationController *sidebarNavigationController;
@property (nonatomic, readonly) PUSidebarViewController *sidebarViewController;
@property (nonatomic, readonly) UISplitViewController *splitViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_splitViewControllerDidChangeTraitPresentationSemanticContext:(id)arg1;
- (void)_updateBackgroundColor;
- (void)_updateOnboardingOverlayBadgeContainer;
- (void)_updateOnboardingOverlayView;
- (void)_updatePreferredContentSize;
- (void)_updatePreferredDisplayMode;
- (void)assetPickerOnboardingViewDidDismissBadge:(id)arg1;
- (void)assetPickerOnboardingViewDidTransitionToBadge:(id)arg1;
- (void)assetPickerOnboardingViewWantsToLearnMoreAboutDataAccess:(id)arg1;
- (id)configuration;
- (id)contentNavigationController;
- (id)contentViewController;
- (id)initWithConfiguration:(id)arg1 contentViewController:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)onboardingOverlayView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentDataAccessEducationViewController:(id)arg1;
- (void)setOnboardingOverlayView:(id)arg1;
- (id)sidebarNavigationController;
- (id)sidebarViewController;
- (id)splitViewController;
- (void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2;
- (void)splitViewControllerDidCollapse:(id)arg1;
- (void)splitViewControllerDidExpand:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
