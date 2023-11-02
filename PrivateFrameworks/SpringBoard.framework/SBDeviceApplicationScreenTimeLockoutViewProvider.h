
@interface SBDeviceApplicationScreenTimeLockoutViewProvider : SBDeviceApplicationSceneOverlayViewProvider <SBDeviceApplicationSceneHandleObserver> {
    STBlockingViewController * _blockingViewController;
    bool  _isActive;
    bool  _waitingForPrivacyPreflight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateIfPossible;
- (void)_blockingViewControllerDismissedItself;
- (void)_deactivateIfPossibleRespectingAppBlockedState:(bool)arg1;
- (void)_handleInstalledAppsChanged:(id)arg1;
- (id)_newBlockingViewControllerWithBundleIdentifier:(id)arg1;
- (id)_realOverlayViewController;
- (void)dealloc;
- (void)hideContentWithAnimation:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithSceneHandle:(id)arg1 delegate:(id)arg2;
- (long long)priority;
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;
- (void)showContentWithAnimation:(bool)arg1 completionHandler:(id /* block */)arg2;

@end
