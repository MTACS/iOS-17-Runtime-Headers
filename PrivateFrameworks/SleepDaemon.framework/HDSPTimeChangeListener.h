
@interface HDSPTimeChangeListener : NSObject <HDSPEnvironmentAware, HDSPNotificationObserver, HDSPSource> {
    HKSPObserverSet * _observers;
    HDSPEnvironment * environment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool dontNotify;
@property (nonatomic, readonly) bool dontSync;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKSPObserverSet *observers;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (void)handleSignificantTimeChange;
- (void)handleTimeZoneChange;
- (id)initWithEnvironment:(id)arg1;
- (id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (id)sourceIdentifier;

@end
