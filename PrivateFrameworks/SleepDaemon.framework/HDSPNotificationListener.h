
@interface HDSPNotificationListener : NSObject <HDSPEnvironmentAware> {
    HDSPEnvironment * _environment;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _launchNotificationRegistrationLock;
    NSMutableDictionary * _launchNotificationRegistrations;
    HKSPObserverSet * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } launchNotificationRegistrationLock;
@property (nonatomic, readonly) NSMutableDictionary *launchNotificationRegistrations;
@property (nonatomic, readonly) HKSPObserverSet *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleNotificationWithName:(id)arg1 completion:(id /* block */)arg2;
- (void)_registerForStream:(id)arg1;
- (void)_withLock:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })launchNotificationRegistrationLock;
- (id)launchNotificationRegistrations;
- (id)observers;
- (void)registerForLaunchNotificationWithName:(const char *)arg1 key:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)startListening;
- (void)unregisterForLaunchNotificationWithName:(const char *)arg1 key:(id)arg2;

@end
