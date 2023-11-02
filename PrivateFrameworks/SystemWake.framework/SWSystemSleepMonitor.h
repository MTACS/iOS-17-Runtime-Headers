
@interface SWSystemSleepMonitor : NSObject <BSInvalidatable, SWSystemSleepMonitorProvidingDelegate> {
    bool  _allowsInvalidation;
    NSString * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _lock_messageID;
    NSHashTable * _lock_observers;
    <SWSystemSleepMonitorProviding> * _monitorProvider;
    unsigned long long  _powerManagementPhase;
    unsigned long long  _powerManagementPhaseTimestamp;
    NSObject<OS_dispatch_queue> * _queue;
    <SWSystemSleepAssertionProviding> * _sleepAssertionProvider;
    unsigned long long  _state;
    unsigned long long  _stateTimestamp;
}

@property (readonly) SWSystemSleepMonitorAggregateState *aggregateState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isSleepImminent, readonly) bool sleepImminent;
@property (getter=hasSleepBeenRequested, readonly) bool sleepRequested;
@property (readonly) Class superclass;

+ (id)monitorUsingMainQueue;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)aggregateState;
- (id)description;
- (bool)hasSleepBeenRequested;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2 allowsInvalidation:(bool)arg3 monitorProvider:(id)arg4 sleepAssertionProvider:(id)arg5;
- (void)invalidate;
- (bool)isSleepImminent;
- (void)removeObserver:(id)arg1;
- (void)systemPowerChanged:(unsigned int)arg1 notificationID:(void*)arg2;

@end
