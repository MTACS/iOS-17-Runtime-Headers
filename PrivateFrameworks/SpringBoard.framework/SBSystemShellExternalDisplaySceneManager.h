
@interface SBSystemShellExternalDisplaySceneManager : SBSceneManager <SBLayoutStateSceneIdentityProviderDataSource, SBSuspendedUnderLockManagerDelegate> {
    UIApplicationSceneClientSettingsDiffInspector * _appClientSettingsDiffInspector;
    SBSuspendedUnderLockManager * _lazy_suspendedUnderLockManager;
}

@property (nonatomic, readonly) SBMainDisplayLayoutStateManager *_layoutStateManager;
@property (nonatomic, readonly) SBWindowScene *_windowScene;
@property (nonatomic, readonly) SBMainDisplayLayoutState *currentLayoutState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isSuspendedUnderLock, nonatomic) bool suspendedUnderLock;

- (void).cxx_destruct;
- (id)_appSceneClientSettingsDiffInspector;
- (void)_doObserverCalloutWithBlock:(id /* block */)arg1;
- (void)_noteDidChangeToVisibility:(unsigned long long)arg1 previouslyExisted:(bool)arg2 forScene:(id)arg3;
- (void)_noteDidCommitUpdateForScene:(id)arg1;
- (void)_reconnectSceneRemnant:(id)arg1 forProcess:(id)arg2 sceneManager:(id)arg3;
- (void)_scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)_scene:(id)arg1 interceptUpdateWithNewSettings:(id)arg2;
- (void)_scene:(id)arg1 willUpdateWithSettings:(id)arg2 transitionContext:(id)arg3;
- (bool)_shouldAutoHostScene:(id)arg1;
- (bool)_shouldFenceTransitionForScene:(id)arg1 updatedClientSettingsDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (bool)_shouldTrackScenesForDeactivation;
- (id)_windowScene;
- (void)dealloc;
- (id)externalApplicationSceneHandles;
- (id)initWithReference:(id)arg1 sceneIdentityProvider:(id)arg2 presentationBinder:(id)arg3;
- (id)initWithReference:(id)arg1 sceneIdentityProvider:(id)arg2 presentationBinder:(id)arg3 snapshotBehavior:(unsigned long long)arg4;
- (bool)isSuspendedUnderLock;
- (id)layoutStateManager;
- (id)newSceneIdentifierForBundleIdentifier:(id)arg1 supportsMultiwindow:(bool)arg2;
- (id)runningApplicationScenes:(id)arg1;
- (id)sceneSnapshotRequestStrategyForSceneSnapshotRequestor:(id)arg1;
- (void)setSuspendedUnderLock:(bool)arg1;
- (void)setSuspendedUnderLock:(bool)arg1 alongsideWillChangeBlock:(id /* block */)arg2 alongsideDidChangeBlock:(id /* block */)arg3;
- (id)suspendedUnderLockManager:(id)arg1 sceneHandleForScene:(id)arg2;
- (bool)suspendedUnderLockManager:(id)arg1 shouldPreventSuspendUnderLockForScene:(id)arg2;
- (bool)suspendedUnderLockManager:(id)arg1 shouldPreventUnderLockForScene:(id)arg2;
- (id)suspendedUnderLockManagerDisplayConfiguration:(id)arg1;
- (id)suspendedUnderLockManagerVisibleScenes:(id)arg1;
- (id)transientApplicationSceneHandlesForApplication:(id)arg1;

@end
