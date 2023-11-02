
@interface COTimerService : COService <COMeshTimerAddOnDelegate, COTimerManagerServiceInterface> {
    COSignalsClientObserverSet * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) COSignalsClientObserverSet *observers;
@property (readonly) Class superclass;

+ (bool)_isAllowedClient:(id)arg1;
+ (id)serviceWithDelegate:(id)arg1;

- (void).cxx_destruct;
- (void)_addOnAdded:(id)arg1;
- (void)_addOnRemoved:(id)arg1;
- (bool)_applicableToCluster:(id)arg1;
- (void)_clientLost:(id)arg1;
- (void)_completeDispatchabilityStallActivity:(id)arg1;
- (void)_configureServiceInterfacesOnConnection:(id)arg1;
- (void)_didResetTimerAddOn:(id)arg1;
- (void)_didStopCanDispatchUpdate:(id)arg1;
- (id)_newClientForConnection:(id)arg1;
- (void)_postCanDispatchChangedAddOn:(id)arg1;
- (void)_postNotificationName:(id)arg1 connection:(id)arg2 userInfo:(id)arg3;
- (void)_postNotificationName:(id)arg1 forTimers:(id)arg2 toAddOn:(id)arg3 requiresUserInfo:(bool)arg4;
- (void)addObserverForNotificationName:(id)arg1 asAccessory:(id)arg2 asInstance:(id)arg3 constraints:(id)arg4 withCallback:(id /* block */)arg5;
- (void)addTimer:(id)arg1 asAccessory:(id)arg2 asInstance:(id)arg3 withCallback:(id /* block */)arg4;
- (void)canDispatchAsAccessory:(id)arg1 asInstance:(id)arg2 reply:(id /* block */)arg3;
- (void)didChangeCompositionForTimerAddOn:(id)arg1;
- (void)didResetTimerAddOn:(id)arg1;
- (void)dismissTimerWithIdentifier:(id)arg1 asAccessory:(id)arg2 withCallback:(id /* block */)arg3;
- (id)initWithListenerProvider:(id)arg1 addOnProvider:(id)arg2 delegate:(id)arg3;
- (id)observers;
- (void)removeObserverForNotificationName:(id)arg1 asAccessory:(id)arg2 withCallback:(id /* block */)arg3;
- (void)removeTimer:(id)arg1 asAccessory:(id)arg2 withCallback:(id /* block */)arg3;
- (void)timerAddOn:(id)arg1 didAddTimers:(id)arg2;
- (void)timerAddOn:(id)arg1 didChangeTimers:(id)arg2;
- (void)timerAddOn:(id)arg1 didDismissTimers:(id)arg2;
- (void)timerAddOn:(id)arg1 didFireTimers:(id)arg2;
- (void)timerAddOn:(id)arg1 didRemoveTimers:(id)arg2;
- (void)timerAddOn:(id)arg1 didUpdateTimers:(id)arg2;
- (void)timersAsAccessory:(id)arg1 asInstance:(id)arg2 withCallback:(id /* block */)arg3;
- (void)timersAsAccessory:(id)arg1 forAccessories:(id)arg2 callback:(id /* block */)arg3;
- (void)updateTimer:(id)arg1 asAccessory:(id)arg2 withCallback:(id /* block */)arg3;

@end
