
@interface HMDXPCMessageCountTracker : NSObject <HMFLogging> {
    NSMutableDictionary * _acceptedRequests;
    NSMutableDictionary * _erroredRequests;
    NSDate * _lastResetDate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _sentNotifications;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastResetDate;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)xpcCounterTracker;

- (void).cxx_destruct;
- (id)__init;
- (id)_countersOfType:(long long)arg1;
- (void)_incrementCounterOfType:(long long)arg1 identifier:(id)arg2;
- (void)_resetCounters;
- (id)countersOfType:(long long)arg1;
- (id)dumpState;
- (void)incrementCounterOfType:(long long)arg1 identifier:(id)arg2;
- (id)init;
- (id)lastResetDate;
- (id)sampleCountersAndReset:(bool)arg1;
- (void)setLastResetDate:(id)arg1;
- (void)submitCounters;

@end
