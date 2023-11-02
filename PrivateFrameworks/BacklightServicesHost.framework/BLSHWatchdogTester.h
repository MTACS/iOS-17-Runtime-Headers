
@interface BLSHWatchdogTester : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _lock_nextTimerID;
    NSMapTable * _testables;
    BLSHWatchdogProvider * _watchdogProvider;
    <BLSHWatchdogProviderDelegate> * _watchdogProviderDelegate;
}

- (void).cxx_destruct;
- (void)_triggerTestWatchdog:(id)arg1;
- (id)_watchdogProvider;
- (id)initWithWatchdogProviderDelegate:(id)arg1 testables:(id)arg2;

@end
