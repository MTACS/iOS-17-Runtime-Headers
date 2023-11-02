
@interface CCUIAppLauncherViewController : CCUIMenuModuleViewController <CCUIContentModuleContentViewControllerInternal> {
    SCUIAssetProvider * _assetProvider;
    NSArray * _fetchedMenuItems;
    NSObject<OS_dispatch_queue> * _menuItemsFetchQueue;
    CCUIAppLauncherModule * _module;
}

@property (nonatomic, readonly) UIViewPropertyAnimator *customAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) CCUIAppLauncherModule *module;
@property (nonatomic, readonly) double preferredExpandedContentHeight;
@property (nonatomic, readonly) double preferredExpandedContentWidth;
@property (nonatomic, readonly) double preferredExpandedContinuousCornerRadius;
@property (nonatomic, readonly) bool providesOwnPlatter;
@property (nonatomic, readonly) bool shouldPerformClickInteraction;
@property (nonatomic, readonly) bool shouldPerformHoverInteraction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateApplicationForShortcutItem:(id)arg1;
- (id)_assetProvider;
- (bool)_canShowWhileLocked;
- (id)_menuItemForShortcutItem:(id)arg1;
- (void)_queue_setFetchedMenuItems:(id)arg1;
- (void)_queue_updateApplicationShortcutsActions;
- (void)_updateApplicationShortcutsActionsIfNecessary;
- (void)_updateWithFetchedMenuItemsIfNecessary;
- (void)buttonTapped:(id)arg1 forEvent:(id)arg2;
- (void)buttonTouchDown:(id)arg1 forEvent:(id)arg2;
- (void)didTransitionToExpandedContentMode:(bool)arg1;
- (id)leadingImageForMenuItem:(id)arg1;
- (id)module;
- (void)requestAuthenticationForTransitionToExpandedContentModuleWithCompletionHandler:(id /* block */)arg1;
- (void)setModule:(id)arg1;
- (bool)shouldBeginTransitionToExpandedContentModule;
- (bool)shouldRequestAuthenticationForTransitionToExpandedContent;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)willResignActive;

@end
