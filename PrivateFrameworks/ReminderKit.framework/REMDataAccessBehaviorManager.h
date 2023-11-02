
@interface REMDataAccessBehaviorManager : NSObject {
    REMXPCDaemonController * _daemonController;
}

@property (nonatomic, retain) REMXPCDaemonController *daemonController;

- (void).cxx_destruct;
- (void)_crashDaemonWithMessage:(id)arg1;
- (id)_debugPerformerWithReason:(id)arg1 errorHandler:(id /* block */)arg2;
- (bool)_getBoolForKey:(id)arg1 withDefaultValue:(bool)arg2;
- (long long)_getIntegerForKey:(id)arg1 withDefaultValue:(long long)arg2;
- (void)_setBoolValue:(bool)arg1 forBehaviorKey:(id)arg2;
- (void)_setIntegerValue:(long long)arg1 forBehaviorKey:(id)arg2;
- (void)applyChangeTrackingBehavior:(long long)arg1;
- (long long)changeTrackingBehaviors;
- (id)daemonController;
- (void)disableBabySitter;
- (void)disableDataAccess;
- (void)enableBabySitter;
- (void)enableDataAccess;
- (id)fetchStatusReportsWithError:(id*)arg1;
- (id)init;
- (id)initWithDaemonController:(id)arg1;
- (bool)isBabySitterEnabled;
- (bool)isDataAccessEnabled;
- (void)setDaemonController:(id)arg1;
- (void)unapplyChangeTrackingBehavior:(long long)arg1;

@end
