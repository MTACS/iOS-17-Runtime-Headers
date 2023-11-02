
@interface COAlarmManager : NSObject <COAlarmManagerClientInterface, COObservable, HFCoordinationAlarmTimerManager> {
    HMAccessory * _accessory;
    NSUUID * _instanceID;
    NSXPCConnection * _lastConnection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    COHomeKitAccessoryMemento * _memento;
    COObserverSet * _observers;
    <COAlarmManagerConnectionProvider> * _provider;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *instanceID;
@property (nonatomic) NSXPCConnection *lastConnection;
@property (nonatomic, readonly, copy) COHomeKitAccessoryMemento *memento;
@property (nonatomic, readonly) COObserverSet *observers;
@property (nonatomic, readonly) <COAlarmManagerConnectionProvider> *provider;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/Coordination.framework/Coordination

- (void).cxx_destruct;
- (id)_alarmsForAccessory:(id)arg1 includingSleepAlarm:(bool)arg2;
- (bool)_canDispatchForAssociatedAccessory;
- (id)_categoryTypeForAlarm:(id)arg1;
- (void)_handleNotification:(id)arg1;
- (void)_lostConnectionToService;
- (void)_registerObserverWithName:(id)arg1;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)arg1;
- (void)_withLock:(id /* block */)arg1;
- (id)accessory;
- (id)addAlarm:(id)arg1;
- (id)addObserverForName:(id)arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)alarms;
- (id)alarmsForAccessories:(id)arg1;
- (id)alarmsForAccessory:(id)arg1;
- (id)alarmsForAccessoryMementos:(id)arg1;
- (id)alarmsIncludingSleepAlarm:(bool)arg1;
- (void)dealloc;
- (id)dismissAlarmWithIdentifier:(id)arg1;
- (id)init;
- (id)initForAccessory:(id)arg1 withConnectionProvider:(id)arg2;
- (id)initWithConnectionProvider:(id)arg1;
- (id)instanceID;
- (id)lastConnection;
- (id)memento;
- (id)observers;
- (void)postNotificationName:(id)arg1 withUserInfo:(id)arg2 callback:(id /* block */)arg3;
- (id)provider;
- (id)removeAlarm:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setLastConnection:(id)arg1;
- (id)snoozeAlarmWithIdentifier:(id)arg1;
- (id)updateAlarm:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_AlarmManagerForAccessory:(id)arg1;

@end
