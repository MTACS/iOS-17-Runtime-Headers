
@interface HDSPDiagnostics : NSObject <HDSPEnvironmentAware, HDSPNotificationObserver> {
    HKSPDiagnostics * _diagnostics;
    HDSPEnvironment * _environment;
    HKSPObserverSet * _providers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKSPDiagnostics *diagnostics;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKSPObserverSet *providers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_logDiagnostics:(id)arg1;
- (void)addProvider:(id)arg1;
- (id)diagnostics;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2;
- (id)providers;
- (void)removeProvider:(id)arg1;

@end
