
@interface RBPrewarmManager : NSObject {
    NSDictionary * _currentConfiguration;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dataLock;
    <RBProcessManaging> * _delegate;
    NSDictionary * _lastAppliedConfiguration;
    NSMutableSet * _pendingPrewarms;
    RBEventQueue * _prewarmingEventQueue;
    NSObject<OS_dispatch_queue> * _prewarmingQueue;
    <RBTimeProviding> * _timeProvider;
}

- (void).cxx_destruct;
- (id)_prewarmingQueue;
- (void)_queue_addPrewarmForIdentity:(id)arg1;
- (void)_queue_checkForNewPrewarms;
- (void)_queue_runPrewarm;
- (void)_queue_schedulePrewarmForIdentity:(id)arg1 withInterval:(id)arg2;
- (void)identityDidTerminate:(id)arg1;
- (id)initWithDelegate:(id)arg1 timeProvider:(id)arg2;
- (void)prewarmingConfigurationDidChange:(id)arg1;

@end
