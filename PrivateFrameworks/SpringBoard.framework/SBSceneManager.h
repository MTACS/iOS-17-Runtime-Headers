
@interface SBSceneManager : NSObject <BSDescriptionProviding, BSInvalidatable, FBSceneDelegate, FBSceneManagerDelegate_Private, FBSceneManagerObserver, SBApplicationSceneHandleProviding, SBSceneLayoutChildTransactionProviding> {
    BSCopyingCacheSet * _allScenes;
    NSCountedSet * _assertedBackgroundScenes;
    BSCopyingCacheSet * _boundPointerUIScenes;
    BSCopyingCacheSet * _boundScenes;
    BSCopyingCacheSet * _boundSingleScenes;
    NSMutableSet * _childTransactionProviders;
    SBLayoutState * _currentLayoutState;
    BSCopyingCacheSet * _daemonScenes;
    BSCopyingCacheSet * _externalApplicationSceneHandles;
    BSCopyingCacheSet * _externalForegroundApplicationSceneHandles;
    bool  _hidden;
    bool  _layoutControllerCreationReentrancyGuard;
    SBLayoutStateManager * _layoutStateManager;
    SBLayoutStateTransitionCoordinator * _layoutStateTransitionCoordinator;
    NSHashTable * _observers;
    NSMapTable * _persistentMapSceneIdentityToSceneHandle;
    SBPolicyAggregator * _policyAggregator;
    SBRootWindowScenePresentationBinder * _presentationBinder;
    BSCopyingCacheSet * _reportedExternalForegroundApplicationSceneHandles;
    <SBApplicationSceneIdentityProviding> * _sceneIdentityProvider;
    FBSceneManager * _sceneManager;
    SBSceneManagerReference * _selfReference;
    SBSceneSnapshotRequestor * _snapshotRequestor;
    long long  _state;
    NSMapTable * _transientMapSceneIdentityToSceneHandle;
    BSCopyingCacheSet * _workspaceScenes;
}

@property (nonatomic, readonly) SBLayoutStateTransitionCoordinator *_layoutStateTransitionCoordinator;
@property (nonatomic, readonly) SBWindowScene *_windowScene;
@property (nonatomic, readonly) NSSet *boundPointerUIScenes;
@property (nonatomic, readonly) SBLayoutState *currentLayoutState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FBSDisplayIdentity *displayIdentity;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, readonly) SBPolicyAggregator *policyAggregator;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (Class)_applicationSceneHandleClass;

- (void).cxx_destruct;
- (void)_addReportedForegroundExternalApplicationSceneHandle:(id)arg1;
- (void)_addScene:(id)arg1;
- (void)_addSceneToPresentationBinder:(id)arg1 trackedCollection:(id)arg2;
- (id)_appSceneClientSettingsDiffInspector;
- (void)_doObserverCalloutWithBlock:(id /* block */)arg1;
- (bool)_handleAction:(id)arg1 forScene:(id)arg2;
- (id)_layoutStateTransitionCoordinator;
- (void)_noteDidChangeToVisibility:(unsigned long long)arg1 previouslyExisted:(bool)arg2 forScene:(id)arg3;
- (void)_noteDidCommitUpdateForScene:(id)arg1;
- (void)_noteObserversDidInvalidate;
- (void)_prepareToRemoveScene:(id)arg1 withReason:(long long)arg2;
- (void)_reconnectSceneRemnant:(id)arg1 forProcess:(id)arg2 sceneManager:(id)arg3;
- (void)_removeReportedForegroundExternalApplicationSceneHandle:(id)arg1;
- (void)_removeScene:(id)arg1 withReason:(long long)arg2;
- (void)_removeSceneFromPresentationBinder:(id)arg1 trackedCollection:(id)arg2;
- (id)_sbWindowScene;
- (void)_scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)_scene:(id)arg1 interceptUpdateWithNewSettings:(id)arg2;
- (void)_scene:(id)arg1 willUpdateWithSettings:(id)arg2 transitionContext:(id)arg3;
- (bool)_shouldAutoHostScene:(id)arg1;
- (bool)_shouldFenceTransitionForScene:(id)arg1 updatedClientSettingsDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (bool)_shouldGrantRequestsForPhysicalButton:(unsigned long long)arg1 toScene:(id)arg2;
- (bool)_shouldTrackScenesForDeactivation;
- (void)_updateStateForScene:(id)arg1 withSettings:(id)arg2;
- (void)_userInterfaceStyleArbiterStyleChanged:(id)arg1;
- (id)_windowScene;
- (void)addChildTransactionProvider:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addPointerUISceneToPresentationBinder:(id)arg1;
- (void)addSystemUISceneToPresentationBinder:(id)arg1;
- (id)allScenes;
- (id)assertBackgroundedStatusForScenes:(id)arg1;
- (id)boundPointerUIScenes;
- (id)childTransactionsForTransitionRequest:(id)arg1;
- (id)currentLayoutState;
- (id)currentLayoutState;
- (id)daemonScenes;
- (void)dealloc;
- (id)debugDescription;
- (id)debugNameForSceneSnapshotRequestor:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayIdentity;
- (id)existingSceneHandleForPersistenceIdentifier:(id)arg1;
- (id)existingSceneHandleForScene:(id)arg1;
- (id)existingSceneHandleForSceneIdentity:(id)arg1;
- (id)externalApplicationSceneHandles;
- (id)externalForegroundApplicationSceneHandles;
- (id)fetchOrCreateApplicationSceneHandleForRequest:(id)arg1;
- (id)initWithReference:(id)arg1 sceneIdentityProvider:(id)arg2 presentationBinder:(id)arg3;
- (id)initWithReference:(id)arg1 sceneIdentityProvider:(id)arg2 presentationBinder:(id)arg3 snapshotBehavior:(unsigned long long)arg4;
- (void)invalidate;
- (bool)isHidden;
- (bool)isValid;
- (void)moveScene:(id)arg1 toSceneManager:(id)arg2;
- (id)newSceneIdentifierForBundleIdentifier:(id)arg1;
- (id)newSceneIdentifierForBundleIdentifier:(id)arg1 supportsMultiwindow:(bool)arg2;
- (id)newSceneIdentityForApplication:(id)arg1;
- (id)policyAggregator;
- (id)presentationBinder;
- (id)preventTakingSupplementalSnapshotsForBackgroundingScenesWithReason:(id)arg1;
- (void)removeChildTransactionProvider:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removePointerUISceneFromPresentationBinder:(id)arg1;
- (void)removeSystemUISceneFromPresentationBinder:(id)arg1;
- (void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2;
- (void)scene:(id)arg1 didCompleteUpdateWithContext:(id)arg2 error:(id)arg3;
- (void)scene:(id)arg1 didPrepareUpdateWithContext:(id)arg2;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (id)sceneIdentifierForBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)sceneIdentityForApplication:(id)arg1;
- (id)sceneIdentityForApplication:(id)arg1 createPrimaryIfRequired:(bool)arg2 sceneSessionRole:(id)arg3;
- (id)sceneIdentityForApplication:(id)arg1 excludingIdentifiers:(id)arg2;
- (id)sceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2;
- (id)sceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2 allowCanMatches:(bool)arg3 preferNewScene:(bool)arg4 allowSceneCreation:(bool)arg5 visibleIdentifiers:(id)arg6 preferredDisplay:(id)arg7;
- (id)sceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2 allowCanMatches:(bool)arg3 preferNewScene:(bool)arg4 visibleIdentifiers:(id)arg5;
- (id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3;
- (id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3 sceneSessionRole:(id)arg4;
- (id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 interceptUpdateForScene:(id)arg2 withNewSettings:(id)arg3;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (id)sceneSnapshotRequestContextForSceneSnapshotRequestor:(id)arg1;
- (id)sceneSnapshotRequestStrategyForSceneSnapshotRequestor:(id)arg1;
- (id)scenesForWorkspaceWithID:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)startTrackingSystemUISceneForInterfaceStyleUpdatePurposes:(id)arg1;
- (void)stopTrackingSystemUISceneForInterfaceStyleUpdatePurposes:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)topmostForegroundUIScenesMatching:(id /* block */)arg1;
- (id)transientApplicationSceneHandlesForApplication:(id)arg1;
- (void)updatePresentationBinder:(id)arg1;
- (id)windowScene;
- (void)windowSceneDidConnect:(id)arg1;

@end