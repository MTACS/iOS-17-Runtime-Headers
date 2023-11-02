
@interface HDSPContextStoreManager : NSObject <HDSPEnvironmentAware, HDSPSleepEventHandler, HDSPSleepModeObserver, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver> {
    <_CDLocalContext> * _context;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _contextLock;
    HDSPEnvironment * _environment;
}

@property (nonatomic, readonly) <_CDLocalContext> *context;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } contextLock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)contextualKeyPath;
+ (id)healthAppForegroundPredicate;
+ (id)sleepAppForegroundPredicate;

- (void).cxx_destruct;
- (void)_withLock:(id /* block */)arg1;
- (void)_writeSleepInfoToContextStore:(id)arg1;
- (id)context;
- (struct os_unfair_lock_s { unsigned int x1; })contextLock;
- (id)environment;
- (void)environmentWillBecomeReady:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 context:(id)arg2;
- (id)registerPredicate:(id)arg1 identifier:(id)arg2 callback:(id /* block */)arg3;
- (void)sleepEventIsDue:(id)arg1;
- (void)sleepModeDidChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3;
- (void)sleepScheduleModelManager:(id)arg1 didUpdateSleepScheduleModel:(id)arg2;
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)unregister:(id)arg1;
- (void)updateForScheduleModelModifiedOnDate:(id)arg1;

@end
