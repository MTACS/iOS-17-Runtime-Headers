
@interface SBStatusBarTapManager : NSObject {
    NSMutableDictionary * _backgroundActivityIdentifiersToRecentSceneResetTimers;
    NSMutableDictionary * _backgroundActivityIdentifiersToRecentScenes;
}

- (void).cxx_destruct;
- (void)_addRecentlyTappedApplicationDestinations:(id)arg1 forBackgroundActivityWithIdentifier:(id)arg2;
- (id)_allApplicationDestinationsForApplications:(id)arg1;
- (id)_appDestinationForNextSceneToVisitForApps:(id)arg1 andBackgroundActivityWithIdentifier:(id)arg2;
- (id)_foregroundApplicationDestinationsForApplications:(id)arg1;
- (id)_handlerForBackgroundActivityWithIdentifier:(id)arg1;
- (id)_handlerForBackgroundActivityWithIdentifier:(id)arg1 orOutApplications:(id*)arg2;
- (bool)_isUILocked;
- (bool)_performAfterAttemptingUnlockForAppWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)_recentlyTappedApplicationDestinationsForBackgroundActivityWithIdentifier:(id)arg1;
- (void)_resetRecentlyTappedSceneIdentifiersForBackgroundActivityWithIdentifier:(id)arg1;
- (void)_scheduleResetRecentlyTappedSceneIdentifiersForBackgroundActivityWithIdentifier:(id)arg1;
- (id)_workspace;
- (bool)canHandleTapForBackgroundActivityWithIdentifier:(id)arg1;
- (bool)handleTapForBackgroundActivityWithIdentifier:(id)arg1;

@end
