
@interface SBDoNotDisturbStateMonitor : NSObject <DNDStateUpdateListener> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _lock_observers;
    DNDState * _lock_state;
    DNDStateService * _stateService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) DNDState *state;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_noteNewDNDState:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;
- (void)removeObserver:(id)arg1;
- (id)state;
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;

@end
