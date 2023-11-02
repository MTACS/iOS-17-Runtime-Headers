
@interface SBBacklightEnvironmentSessionProvider : NSObject <BLSHBacklightEnvironmentSessionProviding, BLSHBacklightInactiveEnvironmentSessionObserving> {
    NSHashTable * _backlightEnvironmentSceneProviders;
    NSHashTable * _backlightSceneHostEnvironmentProviders;
    BLSHBacklightInactiveEnvironmentSession * _currentSession;
    NSHashTable * _observers;
    <BSInvalidatable> * _presentationUpdateLiveRenderAssertion;
    bool  _springBoardBootCompleted;
}

@property (setter=_setCurrentSession:, nonatomic, retain) BLSHBacklightInactiveEnvironmentSession *_currentSession;
@property (nonatomic, readonly, copy) NSSet *currentPresentationBundleIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backlightPresentationEntries;
- (id)_buildPresentation;
- (id)_currentSession;
- (void)_notifyObserversOfPresentation;
- (void)_rebuildPresentation;
- (void)_setCurrentSession:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)createInactiveEnvironmentSession;
- (id)currentPresentationBundleIdentifiers;
- (void)didEndInactiveEnvironmentSession:(id)arg1;
- (void)inactiveEnvironmentSession:(id)arg1 didUpdateToPresentation:(id)arg2;
- (id)init;
- (void)invalidateBacklightSceneHostEnvironmentsForProvider:(id)arg1;
- (void)invalidateBacklightScenesForProvider:(id)arg1;
- (void)registerBacklightEnvironmentSceneProvider:(id)arg1;
- (void)registerBacklightSceneHostEnvironmentProvider:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)unregisterBacklightEnvironmentSceneProvider:(id)arg1;
- (void)unregisterBacklightSceneHostEnvironmentProvider:(id)arg1;

@end
