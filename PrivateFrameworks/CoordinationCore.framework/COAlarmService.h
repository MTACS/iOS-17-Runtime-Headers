
@interface COAlarmService : COService <COAlarmManagerServiceInterface, COMeshAlarmAddOnDelegate> {
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
- (void)_didResetAlarmAddOn:(id)arg1;
- (void)_didStopCanDispatchUpdate:(id)arg1;
- (id)_newClientForConnection:(id)arg1;
- (void)_postCanDispatchChangedAddOn:(id)arg1;
- (void)_postNotificationName:(id)arg1 connection:(id)arg2 userInfo:(id)arg3;
- (void)_postNotificationName:(id)arg1 forAlarms:(id)arg2 toAddOn:(id)arg3 requiresUserInfo:(bool)arg4;
- (void)addAlarm:(id)arg1 asAccessory:(id)arg2 asInstance:(id)arg3 withCallback:(id /* block */)arg4;
- (void)addObserverForNotificationName:(id)arg1 asAccessory:(id)arg2 asInstance:(id)arg3 constraints:(id)arg4 withCallback:(id /* block */)arg5;
- (void)alarmAddOn:(id)arg1 didAddAlarms:(id)arg2;
- (void)alarmAddOn:(id)arg1 didChangeAlarms:(id)arg2;
- (void)alarmAddOn:(id)arg1 didChangeFiringAlarms:(id)arg2;
- (void)alarmAddOn:(id)arg1 didDismissAlarms:(id)arg2;
- (void)alarmAddOn:(id)arg1 didFireAlarms:(id)arg2;
- (void)alarmAddOn:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)alarmAddOn:(id)arg1 didUpdateAlarms:(id)arg2;
- (void)alarmsAsAccessory:(id)arg1 asInstance:(id)arg2 forAccessories:(id)arg3 callback:(id /* block */)arg4;
- (void)alarmsAsAccessory:(id)arg1 asInstance:(id)arg2 withCallback:(id /* block */)arg3;
- (void)canDispatchAsAccessory:(id)arg1 asInstance:(id)arg2 reply:(id /* block */)arg3;
- (void)didChangeCompositionForAlarmAddOn:(id)arg1;
- (void)didResetAlarmAddOn:(id)arg1;
- (void)dismissAlarmWithIdentifier:(id)arg1 asAccessory:(id)arg2 asInstance:(id)arg3 withCallback:(id /* block */)arg4;
- (id)initWithListenerProvider:(id)arg1 addOnProvider:(id)arg2 delegate:(id)arg3;
- (id)observers;
- (void)removeAlarm:(id)arg1 asAccessory:(id)arg2 asInstance:(id)arg3 withCallback:(id /* block */)arg4;
- (void)removeObserverForNotificationName:(id)arg1 asAccessory:(id)arg2 asInstance:(id)arg3 withCallback:(id /* block */)arg4;
- (void)snoozeAlarmWithIdentifier:(id)arg1 asAccessory:(id)arg2 asInstance:(id)arg3 withCallback:(id /* block */)arg4;
- (void)updateAlarm:(id)arg1 asAccessory:(id)arg2 asInstance:(id)arg3 withCallback:(id /* block */)arg4;

@end
