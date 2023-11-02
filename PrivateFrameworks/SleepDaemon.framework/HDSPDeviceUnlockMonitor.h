
@interface HDSPDeviceUnlockMonitor : NSObject <HDSPNotificationObserver> {
    bool  _hasBeenUnlockedSinceBoot;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _monitorLock;
    HKSPObserverSet * _observers;
    NSNumber * _overrideDeviceHasBeenUnlockedSinceBoot;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasBeenUnlockedSinceBoot;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } monitorLock;
@property (nonatomic, readonly) HKSPObserverSet *observers;
@property (nonatomic, retain) NSNumber *overrideDeviceHasBeenUnlockedSinceBoot;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_latestKeyBagValueForHasBeenUnlockedSinceBoot;
- (void)_withLock:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (void)handleFirstUnlock;
- (bool)hasBeenUnlockedSinceBoot;
- (id)init;
- (id)initWithCallbackScheduler:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })monitorLock;
- (id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2;
- (id)observers;
- (id)overrideDeviceHasBeenUnlockedSinceBoot;
- (void)removeObserver:(id)arg1;
- (void)setOverrideDeviceHasBeenUnlockedSinceBoot:(id)arg1;

@end
