
@interface PXSplitViewController : UISplitViewController <UISplitViewControllerDelegate> {
    NSHashTable * _changeObservers;
    UIViewController * _contentViewController;
    bool  _inViewWillTransitionToSize;
    long long  _originalPreferredDisplayMode;
    <UIFocusEnvironment> * _preferredFocusEnvironmentForNextRequest;
    UIViewController * _sidebarViewController;
    bool  _wantsSidebarHidden;
}

@property (nonatomic, readonly) UIViewController *contentViewController;
@property (nonatomic, readonly) bool isSidebarVisible;
@property (nonatomic, readonly) UIViewController *sidebarViewController;
@property (nonatomic) bool wantsSidebarHidden;

+ (void)initialize;

- (void).cxx_destruct;
- (bool)_isDisplayModeAllVisibleAllowed;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)contentViewController;
- (void)dismissPrimaryColumnIfOverlay;
- (id)initWithCoder:(id)arg1;
- (id)initWithSidebarNavigationController:(id)arg1 contentViewController:(id)arg2;
- (bool)isSidebarVisible;
- (id)preferredFocusEnvironments;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (void)registerChangeObserver:(id)arg1;
- (void)requestFocusUpdateWithPreferredFocusEnvironment:(id)arg1;
- (void)setWantsSidebarHidden:(bool)arg1;
- (id)sidebarViewController;
- (long long)splitViewController:(id)arg1 displayModeForExpandingToProposedDisplayMode:(long long)arg2;
- (void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2;
- (void)toggleSidebarVisibilityAnimated;
- (void)unregisterChangeObserver:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wantsSidebarHidden;

@end
