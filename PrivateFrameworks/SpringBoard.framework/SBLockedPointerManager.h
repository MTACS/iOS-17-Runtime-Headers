
@interface SBLockedPointerManager : NSObject <BSInvalidatable, SBDeviceApplicationSceneHandleObserver, SBLayoutStateTransitionObserver, SBSceneManagerObserver> {
    PSPointerClientController * _pointerClientController;
    <BSInvalidatable> * _queue_backboardLockedPointerAssertion;
    bool  _queue_isInvalidated;
    <BSInvalidatable> * _queue_pointerHiddenAssertion;
    NSMutableDictionary * _queue_preferredLockStatusBySceneIdentifier;
    NSString * _queue_sceneIdentifierThatHasLockedPointer;
    NSMutableSet * _queue_sceneIdentifiersThatSuppressPreferredLockStatus;
    UIApplicationSceneSettingsDiffInspector * _sceneSettingsInspector;
    NSObject<OS_dispatch_queue> * _stateSerialQueue;
    SBWindowScene * _windowScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notInvalidated_updateLockForLayoutState:(id)arg1;
- (id)_possibleSceneHandleForLockingPointerFromLayoutState:(id)arg1;
- (void)_queue_lockPointerForSceneIdentifier:(id)arg1;
- (bool)_queue_prefersLockForSceneIdentifier:(id)arg1;
- (void)_queue_unlockPointer;
- (void)_queue_updateLockForLayoutState:(id)arg1;
- (void)_setPointerLockStatus:(long long)arg1 forSceneWithIdentifier:(id)arg2;
- (bool)_shouldAllowPointerLockedForScene:(id)arg1;
- (void)clientWithSceneIdentifier:(id)arg1 prefersPointerLockStatus:(long long)arg2;
- (void)clientWithSceneIdentifier:(id)arg1 suppressPreferredLockStatus:(bool)arg2;
- (id)initWithWindowScene:(id)arg1;
- (void)invalidate;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)sceneManager:(id)arg1 didAddExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)sceneManager:(id)arg1 didRemoveExternalForegroundApplicationSceneHandle:(id)arg2;

@end
