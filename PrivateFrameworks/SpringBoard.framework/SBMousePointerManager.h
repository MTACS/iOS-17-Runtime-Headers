
@interface SBMousePointerManager : NSObject <BKSMousePointerDeviceObserver, PSPointerSystemClientControllerDelegate> {
    unsigned long long  _connectedPointingDevicesCount;
    <BSInvalidatable> * _mousePointerDeviceObserverToken;
    BKSMousePointerService * _mousePointerService;
    NSHashTable * _observers;
    PSPointerClientController * _pointerClientController;
    <BSInvalidatable> * _serviceKeepAliveAssertion;
    NSMapTable * _springBoardScenesToPointerAssertions;
    <BSInvalidatable> * _suppressEventsAssertion;
    PSPointerSystemClientController * _systemClientController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleAssistiveTouchEnabledDidChangeNotification;
- (void)_notifyObserversPointingDeviceBecameAvailable:(bool)arg1;
- (void)_setPointerUIDWithConnectedDeviceCount:(unsigned long long)arg1;
- (void)_updatePointerAssertionsAndScenes;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isHardwarePointingDeviceAttached;
- (void)mousePointerDevicesDidChange:(id)arg1;
- (void)pointerClientController:(id)arg1 didAddScene:(id)arg2;
- (void)pointerClientController:(id)arg1 sceneDidActivate:(id)arg2;
- (void)pointerClientController:(id)arg1 sceneWillDeactivate:(id)arg2;
- (void)pointerClientController:(id)arg1 willRemoveScene:(id)arg2;
- (void)removeObserver:(id)arg1;
- (id)requestPointerActivationForScene:(id)arg1;
- (id)setSystemPointerInteractionContextID:(unsigned int)arg1 displayWithHardwareIdentifier:(id)arg2;
- (bool)shouldAllowHardwarePointingDevices;

@end
