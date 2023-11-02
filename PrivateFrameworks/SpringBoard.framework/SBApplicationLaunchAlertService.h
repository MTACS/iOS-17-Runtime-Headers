
@interface SBApplicationLaunchAlertService : NSObject <BSDescriptionProviding, BSInvalidatable, FBSceneObserver, SBSceneManagerObserver> {
    SBAlertItemsController * _alertItemsController;
    SBApplicationController * _applicationController;
    NSMutableSet * _foregroundingScenes;
    bool  _invalidated;
    NSSet * _launchAlertEvaluators;
    NSMutableDictionary * _mapBundleIDToLaunchAlertInfo;
    NSSet * _sceneManagers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateAndDismissLaunchAlertsForLaunchAlertInfo:(id)arg1;
- (void)_reallyShowLaunchAlertOfType:(unsigned long long)arg1 withLaunchAlertInfo:(id)arg2 application:(id)arg3;
- (void)_sceneDidBecomeForeground:(id)arg1;
- (void)_sceneDidResignForeground:(id)arg1;
- (void)_sceneWillBecomeForeground:(id)arg1;
- (void)_tryShowLaunchAlertsForLaunchAlertInfo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initObservingSceneManagers:(id)arg1 launchAlertEvaluators:(id)arg2 applicationController:(id)arg3 alertItemsController:(id)arg4;
- (void)invalidate;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)sceneManager:(id)arg1 didAddExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)sceneManager:(id)arg1 didRemoveExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)showLaunchAlertOfType:(unsigned long long)arg1 forApplication:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
