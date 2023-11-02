
@interface SBBackgroundActivityAssertionManager_Legacy : SBBackgroundActivityAssertionManager <BSDescriptionProviding, NSXPCListenerDelegate, SBBackgroundActivityAssertionServer, SBWindowSceneStatusBarAssertionManagerObserver> {
    SBWindowSceneStatusBarAssertionManager * _appStatusBarAssertionManager;
    NSObject<OS_dispatch_source> * _assertionTimerSource;
    NSMapTable * _assertionsByBackgroundActivityIdentifier;
    NSMapTable * _assertionsByIdentifierByClientConnection;
    NSMutableSet * _backgroundActivityIdentifiers;
    NSMutableArray * _coordinatorConnectionsByBackgroundActivity;
    FBWorkspaceEventQueue * _eventQueue;
    NSMutableSet * _exclusiveBackgroundActivityIdentifiers;
    NSObject<OS_dispatch_queue> * _internalQueue;
    SBStatusBarTapManager * _statusBarTapManager;
    NSXPCListener * _xpcListener;
}

@property (nonatomic, retain) SBWindowSceneStatusBarAssertionManager *appStatusBarAssertionManager;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *assertionTimerSource;
@property (nonatomic, retain) NSMapTable *assertionsByBackgroundActivityIdentifier;
@property (nonatomic, retain) NSMapTable *assertionsByIdentifierByClientConnection;
@property (nonatomic, copy) NSMutableSet *backgroundActivityIdentifiers;
@property (nonatomic, retain) NSMutableArray *coordinatorConnectionsByBackgroundActivity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FBWorkspaceEventQueue *eventQueue;
@property (nonatomic, copy) NSMutableSet *exclusiveBackgroundActivityIdentifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, readonly) SBStatusBarTapManager *statusBarTapManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCListener *xpcListener;

+ (Class)_implementationClass;

- (void).cxx_destruct;
- (id)_internalQueue_backgroundActivityIdentifiersAddedByAddingAssertionData:(id)arg1;
- (id)_internalQueue_backgroundActivityIdentifiersRemovedByRemovingAssertionData:(id)arg1;
- (id)_internalQueue_coordinatorClientForBackgroundActivityIdentifiers:(id)arg1;
- (id)_internalQueue_coordinatorClientForConnection:(id)arg1;
- (id)_internalQueue_coordinatorClientMatchingBackgroundActivityIdentifier:(id)arg1;
- (void)_internalQueue_deactivateBackgroundActivityAssertionsWithIdentifiers:(id)arg1 forClientConnection:(id)arg2;
- (void)_invalidateAssertionsWithIdentifiers:(id)arg1 forClientConnection:(id)arg2;
- (bool)_isLegacy;
- (void)_mainQueue_getBackgroundActivityIdentifiersToSuppressAndStatusStringsByIdentifierForForegroundApplicationSceneHandles:(id)arg1 withHandler:(id /* block */)arg2;
- (void)_postStatusStringsByIdentifier:(id)arg1;
- (id)_statusStringsByIdentifierForActiveAssertionsByBackgroundActivityIdentifier:(id)arg1 inactiveAssertionsByBackgroundActivityIdentifier:(id)arg2;
- (void)_updateAppSceneSettingsForForegroundAppsAndPostAddedBackgroundActivityIdentifiers:(id)arg1 removedBackgroundActivityIdentifiers:(id)arg2;
- (bool)_verifyCoordinatorEntitlementForBackgroundActivityIdentifiers:(id)arg1 onConnection:(id)arg2;
- (void)activateBackgroundActivityAssertions:(id)arg1 reply:(id /* block */)arg2;
- (id)appStatusBarAssertionManager;
- (id)assertionTimerSource;
- (id)assertionsByBackgroundActivityIdentifier;
- (id)assertionsByIdentifierByClientConnection;
- (id)backgroundActivityIdentifiers;
- (id)coordinatorConnectionsByBackgroundActivity;
- (void)deactivateBackgroundActivityAssertionsWithIdentifiers:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)eventQueue;
- (id)exclusiveBackgroundActivityIdentifiers;
- (bool)handleTapForBackgroundActivityWithIdentifier:(id)arg1;
- (id)init;
- (id)internalQueue;
- (void)invalidateBackgroundActivityAssertions:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setAppStatusBarAssertionManager:(id)arg1;
- (void)setAssertionTimerSource:(id)arg1;
- (void)setAssertionsByBackgroundActivityIdentifier:(id)arg1;
- (void)setAssertionsByIdentifierByClientConnection:(id)arg1;
- (void)setBackgroundActivityIdentifiers:(id)arg1;
- (void)setCoordinatorConnectionsByBackgroundActivity:(id)arg1;
- (void)setEventQueue:(id)arg1;
- (void)setExclusiveBackgroundActivityIdentifiers:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setRegisteredBackgroundActivityIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (void)setStatusString:(id)arg1 forAssertionWithIdentifier:(id)arg2;
- (void)setXpcListener:(id)arg1;
- (void)statusBarAssertionManager:(id)arg1 statusBarSettingsDidChange:(id)arg2;
- (id)statusBarTapManager;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)unregisterCoordinatorRegistrationForBackgroundActivityIdentifiers:(id)arg1;
- (void)updateForegroundApplicationSceneHandles:(id)arg1 withOptions:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)xpcListener;

@end
