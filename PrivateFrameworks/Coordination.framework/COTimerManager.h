
@interface COTimerManager : NSObject <COObservable, COTimerManagerClientInterface, HFCoordinationAlarmTimerManager> {
    HMAccessory * _accessory;
    id  _cluster;
    NSUUID * _instanceID;
    NSXPCConnection * _lastConnection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    COHomeKitAccessoryMemento * _memento;
    COObserverSet * _observers;
    <COTimerManagerConnectionProvider> * _provider;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly, copy) id cluster;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *instanceID;
@property (nonatomic) NSXPCConnection *lastConnection;
@property (nonatomic, readonly, copy) COHomeKitAccessoryMemento *memento;
@property (nonatomic, readonly) COObserverSet *observers;
@property (nonatomic, readonly) <COTimerManagerConnectionProvider> *provider;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/Coordination.framework/Coordination

- (void).cxx_destruct;
- (bool)_canDispatchForAssociatedAccessory;
- (void)_handleNotification:(id)arg1;
- (void)_lostConnectionToService;
- (void)_registerObserverWithName:(id)arg1;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)arg1;
- (id)_timersForAccessory:(id)arg1;
- (void)_withLock:(id /* block */)arg1;
- (id)accessory;
- (id)addObserverForName:(id)arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)addTimer:(id)arg1;
- (id)cluster;
- (void)dealloc;
- (id)dismissTimerWithIdentifier:(id)arg1;
- (id)init;
- (id)initForAccessory:(id)arg1 withConnectionProvider:(id)arg2;
- (id)initWithConnectionProvider:(id)arg1;
- (id)instanceID;
- (id)lastConnection;
- (id)memento;
- (id)observers;
- (void)postNotificationName:(id)arg1 withUserInfo:(id)arg2 callback:(id /* block */)arg3;
- (id)provider;
- (void)removeObserver:(id)arg1;
- (id)removeTimer:(id)arg1;
- (void)setLastConnection:(id)arg1;
- (id)timers;
- (id)timersForAccessories:(id)arg1;
- (id)timersForAccessory:(id)arg1;
- (id)timersForAccessoryMementos:(id)arg1;
- (id)updateTimer:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_TimerManagerForAccessory:(id)arg1;

@end
