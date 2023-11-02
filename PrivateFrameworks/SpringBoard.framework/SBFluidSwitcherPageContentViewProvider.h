
@interface SBFluidSwitcherPageContentViewProvider : NSObject <SBAppSwitcherTransientOverlayPageContentViewDelegate> {
    <SBFluidSwitcherPageContentViewProviderDelegate> * _delegate;
    SBAppSwitcherSnapshotLockoutViewControllerProvider * _lockoutVCProvider;
    NSMapTable * _pageContentViewToTransientOverlayViewController;
    SBAppSwitcherSnapshotImageCache * _snapshotCache;
    NSMutableDictionary * _switcherServiceViewControllerMap;
    NSMutableArray * _transientOverlayPageContentViews;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBFluidSwitcherPageContentViewProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyTransientOverlayViewController:(id)arg1 toPageContentView:(id)arg2;
- (id)_containerViewController;
- (long long)_interfaceOrientation;
- (struct CGSize { double x1; double x2; })_pageViewSizeForAppLayout:(id)arg1;
- (long long)_preferredContentInterfaceOrientationForViewController:(id)arg1 preferredInterfaceOrientation:(long long)arg2;
- (void)_relinquishTransientOverlayViewController:(id)arg1 forPageContentView:(id)arg2;
- (id)_snapshotViewDelegate;
- (id)_snapshotViewForAppLayout:(id)arg1 setActive:(bool)arg2;
- (id)_viewForService:(id)arg1 appLayout:(id)arg2;
- (void)acquiredViewController:(id)arg1 forTransientOverlayAppLayout:(id)arg2;
- (void)appSwitcherTransientOverlayPageContentViewDidChangeActive:(id)arg1;
- (void)appSwitcherTransientOverlayPageContentViewDidChangeContainerOrientation:(id)arg1;
- (id)delegate;
- (id)existingTransientOverlayViewControllerForAppLayout:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 snapshotCache:(id)arg2 lockoutViewProvider:(id)arg3;
- (bool)isSuitableForRecycledItemContainer:(id)arg1;
- (id)pageContentViewForAppLayout:(id)arg1 setActive:(bool)arg2;
- (void)purgePageContentViewForAppLayout:(id)arg1;
- (void)relinquishTransientOverlayViewController:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
