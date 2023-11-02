
@interface HDSPDarwinNotificationCenter : NSObject <HDSPEnvironmentAware, HDSPSleepNotificationPublisher> {
    HDSPEnvironment * _environment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (void)publishNotificationForEvent:(id)arg1 userInfo:(id)arg2;
- (void)tearDownNotificationForEventIdentifier:(id)arg1;
- (void)tearDownNotifications;

@end
