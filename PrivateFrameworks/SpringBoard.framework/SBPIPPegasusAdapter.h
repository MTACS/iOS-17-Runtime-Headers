
@interface SBPIPPegasusAdapter : NSObject <PGPictureInPictureControllerDelegate, SBBannerManagerTransitionObserver, SBPIPContainerViewControllerObserver, SBPIPControllerAdapter> {
    SBPIPAnalytics * _analyticsHelper;
    SBWindowSceneStatusBarSettingsAssertion * _appStatusBarSettingsAssertion;
    <BSInvalidatable> * _hideFaceTimePIPFromSharePlayScreenSharingAssertion;
    bool  _isReducingResourcesUsage;
    PGPictureInPictureController * _pegasusController;
    SBPIPController<SBPIPControllerAdapterContextProviding> * _pipController;
    BSAbsoluteMachTimer * _pipDefaultContentSizeResetTimer;
    NSMutableSet * _presentedExpanseBanners;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isAutoPictureInPictureSupported;
+ (bool)isSupported;

- (void).cxx_destruct;
- (void)_activateSceneWithPersistenceIdentifier:(id)arg1 pictureInPictureViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)_actuallyUpdateBannerInsetsForExpanseBanner:(id)arg1 isSizeChanging:(bool)arg2 isFullScreen:(bool)arg3;
- (void)_bannerPresentableWillAnimateTransition:(id)arg1 isPresentation:(bool)arg2 isDismissal:(bool)arg3 isFullScreen:(bool)arg4 withTransitionCoordinator:(id)arg5;
- (void)_enumerateContainerViewControllersForApplication:(id)arg1 scenePersistenceIdentifier:(id)arg2 usingBlock:(id /* block */)arg3;
- (bool)_layoutStateContainsSceneForSourceSceneSessionIdentifier:(id)arg1 bundleIdentifier:(id)arg2 windowScene:(id)arg3;
- (void)_postEnsuredInSwitcher_pictureInPictureController:(id)arg1 didRequestStopForPictureInPictureViewController:(id)arg2 sourceSceneSessionIdentifier:(id)arg3 animated:(bool)arg4;
- (bool)_presentableIsDodgeableAndStatusBarSuppressing:(id)arg1;
- (long long)_reasonForAssertion:(id)arg1;
- (void)_updateAppStatusBarSettingsAssertion;
- (void)_updateBannerInsetsForExpanseBanner:(id)arg1 isSizeChanging:(bool)arg2 isFullScreen:(bool)arg3;
- (void)_updateHasIdleTimerBehaviors;
- (void)_updateHideFromClonedDisplaysAssertion;
- (void)bannerManager:(id)arg1 containerWillTransitionToSize:(struct CGSize { double x1; double x2; })arg2 withTransitionCoordinator:(id)arg3;
- (void)bannerManager:(id)arg1 presentable:(id)arg2 willTransitionToSize:(struct CGSize { double x1; double x2; })arg3 withTransitionCoordinator:(id)arg4;
- (void)bannerManager:(id)arg1 willDismissPresentable:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)bannerManager:(id)arg1 willPresentPresentable:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)containerViewControllerDidUpdatePrefersHiddenFromClonedDisplays:(id)arg1;
- (void)containerViewControllerStartReducingResourcesUsage:(id)arg1;
- (void)containerViewControllerStopReducingResourcesUsage:(id)arg1;
- (long long)contentTypeForPIPController:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isPresentingPictureInPictureForPIPController:(id)arg1 applicationBundleIdentifier:(id)arg2;
- (bool)isStartingStoppingOrCancellingPictureInPictureForPIPController:(id)arg1;
- (bool)isStoppingOrCancellingPictureForPIPController:(id)arg1 applicationWithBundleIdentifier:(id)arg2 scenePersistenceIdentifier:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pictureInPictureController:(id)arg1 didCreatePictureInPictureViewController:(id)arg2;
- (void)pictureInPictureController:(id)arg1 didHidePictureInPictureViewController:(id)arg2;
- (void)pictureInPictureController:(id)arg1 didRequestStopForPictureInPictureViewController:(id)arg2 sourceSceneSessionIdentifier:(id)arg3 animated:(bool)arg4;
- (void)pictureInPictureController:(id)arg1 requestActivationOfSceneWithPersistenceIdentier:(id)arg2 pictureInPictureViewController:(id)arg3 completion:(id /* block */)arg4;
- (bool)pictureInPictureController:(id)arg1 shouldAuthorizeBackgroundPIPForAppWithBundleIdentifier:(id)arg2;
- (bool)pictureInPictureController:(id)arg1 shouldDenyNewConnection:(id)arg2;
- (void)pictureInPictureController:(id)arg1 willDestroyPictureInPictureViewController:(id)arg2;
- (void)pictureInPictureController:(id)arg1 willHidePictureInPictureViewController:(id)arg2;
- (bool)pictureInPictureControllerCanBackgroundStartForFaceTimeVideoCall:(id)arg1;
- (void)pipController:(id)arg1 didCancelPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg2 scenePersistenceIdentifier:(id)arg3;
- (void)pipController:(id)arg1 didStartPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg2 scenePersistenceIdentifier:(id)arg3 animated:(bool)arg4 completionHandler:(id /* block */)arg5;
- (id)pipController:(id)arg1 morphAnimatorDataSourceForMorphAnimatorController:(id)arg2;
- (bool)pipController:(id)arg1 willBeginPIPInterruptionForAssertion:(id)arg2;
- (void)pipController:(id)arg1 willEndPIPInterruptionForAssertion:(id)arg2;
- (void)pipController:(id)arg1 willRestorePictureInPictureForTestForApplicationWithBundleIdentifier:(id)arg2;
- (void)pipController:(id)arg1 willStartPictureInPictureTestActionForApplicationWithBundleIdentifier:(id)arg2;
- (bool)preventStashAssertionsForPIPController:(id)arg1;
- (void)setPIPController:(id)arg1;
- (bool)shouldStartPictureInPictureForPIPController:(id)arg1 applicationWithProcessIdentifierEnteringBackground:(int)arg2 scenePersistenceIdentifier:(id)arg3;
- (long long)tetheringModeForScenePersistenceIdentifier:(id)arg1;

@end
