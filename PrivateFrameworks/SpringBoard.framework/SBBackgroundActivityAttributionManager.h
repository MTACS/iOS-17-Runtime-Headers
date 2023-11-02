
@interface SBBackgroundActivityAttributionManager : SBBackgroundActivityAssertionManager <BSDescriptionProviding, SBBackgroundActivityAssertionServiceManagerDelegate, SBWindowSceneStatusBarAssertionManagerObserver> {
    SBWindowSceneStatusBarAssertionManager * _appStatusBarAssertionManager;
    SBBackgroundActivityAssertionServiceManager * _assertionServiceManager;
    NSMapTable * _attributionsByBackgroundActivityIdentifier;
    STBackgroundActivitiesStatusDomain * _backgroundActivitiesDomain;
    NSMutableSet * _backgroundActivityIdentifiers;
    FBWorkspaceEventQueue * _eventQueue;
    NSObject<OS_dispatch_queue> * _internalQueue;
    STBackgroundActivitiesStatusDomainData * _queue_processedData;
    SBStatusBarTapManager * _statusBarTapManager;
}

@property (nonatomic, retain) SBWindowSceneStatusBarAssertionManager *appStatusBarAssertionManager;
@property (nonatomic, readonly) SBBackgroundActivityAssertionServiceManager *assertionServiceManager;
@property (nonatomic, retain) NSMapTable *attributionsByBackgroundActivityIdentifier;
@property (nonatomic, copy) NSMutableSet *backgroundActivityIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FBWorkspaceEventQueue *eventQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, readonly) SBStatusBarTapManager *statusBarTapManager;
@property (readonly) Class superclass;

+ (Class)_implementationClass;

- (void).cxx_destruct;
- (id)_applicationForBackgroundActivityAttribution:(id)arg1;
- (bool)_isModern;
- (void)_mainQueue_getBackgroundActivityIdentifiersToSuppressAndStatusStringsByIdentifierForForegroundApplicationSceneHandles:(id)arg1 withHandler:(id /* block */)arg2;
- (void)_postStatusStringsByIdentifier:(id)arg1;
- (void)_queue_updateWithData:(id)arg1;
- (void)_registerHandlerAndHandleExistingState;
- (id)_statusStringsByIdentifierForActiveAttributionsByBackgroundActivityIdentifier:(id)arg1 inactiveAttributionsByBackgroundActivityIdentifier:(id)arg2;
- (void)_updateAppSceneSettingsForForegroundAppsAndPostAddedBackgroundActivityIdentifiers:(id)arg1 removedBackgroundActivityIdentifiers:(id)arg2;
- (id)appStatusBarAssertionManager;
- (void)assertionServiceDidChangeStatusStringsForAForegroundApp;
- (id)assertionServiceManager;
- (id)attributionsByBackgroundActivityIdentifier;
- (id)backgroundActivityIdentifiers;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)eventQueue;
- (bool)handleTapForBackgroundActivityWithIdentifier:(id)arg1;
- (id)init;
- (id)internalQueue;
- (void)invalidateBackgroundActivityAttributions:(id)arg1;
- (void)setAppStatusBarAssertionManager:(id)arg1;
- (void)setAttributionsByBackgroundActivityIdentifier:(id)arg1;
- (void)setBackgroundActivityIdentifiers:(id)arg1;
- (void)setEventQueue:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)statusBarAssertionManager:(id)arg1 statusBarSettingsDidChange:(id)arg2;
- (id)statusBarTapManager;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateForegroundApplicationSceneHandles:(id)arg1 withOptions:(unsigned long long)arg2 completion:(id /* block */)arg3;

@end
