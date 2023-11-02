
@interface SBPhysicalButtonSceneOverrideManager : NSObject <SBAVSystemControllerCacheObserver, SBFZStackParticipantObserver, SBPhysicalButtonSceneOverrideObservationState> {
    SBAVSystemControllerCache * _avCache;
    NSArray * _lastPhysicalButtonSceneTargets;
    SBPhysicalButtonBehaviorRequest * _lockButtonRequest;
    BSCompoundAssertion * _observers;
    SBPhysicalButtonBehaviorRequest * _ringerButtonRequest;
    SBSceneManager * _sceneManager;
    bool  _sendsPhysicalLockButtonActions;
    bool  _sendsPhysicalVolumeButtonActions;
    SBVolumeControl * _volumeControl;
    SBPhysicalButtonBehaviorRequest * _volumeDownButtonRequest;
    SBPhysicalButtonBehaviorRequest * _volumeUpButtonRequest;
    SBWindowScene * _windowScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeRequestForButton:(unsigned long long)arg1;
- (bool)_canSendRingerButtonEventsToScene:(id)arg1 withConfiguration:(id)arg2;
- (bool)_canSendVolumeButtonEventsToScene:(id)arg1 withConfiguration:(id)arg2 activeVolumeCategoryName:(id)arg3;
- (id)_dispatchingRuleInEnvironment:(id)arg1 forDescriptors:(id)arg2;
- (void)_notifyObserversSomethingDidChange;
- (void)_processZStackParticipantSettings:(id)arg1;
- (id)_sceneForSceneTarget:(id)arg1;
- (void)_sendActionForButtonType:(unsigned long long)arg1 buttonState:(unsigned long long)arg2 request:(id)arg3;
- (bool)_sendsActionsForButtonType:(unsigned long long)arg1;
- (void)cache:(id)arg1 didUpdateActiveCategoryName:(id)arg2;
- (id)cameraBehaviorScene;
- (void)dealloc;
- (void)zStackParticipantWithIdentifier:(long long)arg1 settingsDidChange:(id)arg2;
- (void)zStackParticipantWithIdentifier:(long long)arg1 wasAcquiredWithSettings:(id)arg2;

@end
