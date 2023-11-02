
@interface FPDSharedScheduler : NSObject {
    NSObject<OS_xpc_object> * _activity;
    long long  _alwaysRunnableCount;
    id /* block */  _criteriaBuilder;
    NSMutableDictionary * _executors;
    NSString * _label;
    NSDate * _lastRegistrationDate;
    NSDate * _lastTriggerDate;
    NSDate * _lastUsageDate;
    bool  _manualScheduling;
    bool  _preventRunning;
    bool  _registered;
    long long  _registrationCount;
    bool  _wasCheckedIn;
}

@property (readonly) bool hasRegisteredExecutors;
@property (readonly) NSString *label;
@property (getter=useManualScheduling) bool manualScheduling;
@property bool preventRunning;
@property (readonly) long long registrationCount;

+ (void)checkIn;
+ (id)queue;
+ (id)schedulerWithLabel:(id)arg1;

- (void).cxx_destruct;
- (void)_removeKey:(id)arg1;
- (void)addKey:(id)arg1 executor:(id /* block */)arg2;
- (bool)canOrIsForcedToRun;
- (bool)canRun;
- (void)checkIn;
- (id)description;
- (id /* block */)forceRunningWithReason:(id)arg1;
- (bool)hasRegisteredExecutors;
- (id)initWithLabel:(id)arg1 criteria:(id)arg2;
- (id)initWithLabel:(id)arg1 criteriaBuilder:(id /* block */)arg2;
- (id)label;
- (void)markDoneForKey:(id)arg1;
- (void)ping;
- (bool)preventRunning;
- (void)registerActivity;
- (long long)registrationCount;
- (void)removeKey:(id)arg1;
- (bool)runIfPossible:(id /* block */)arg1;
- (void)setManualScheduling:(bool)arg1;
- (void)setPreventRunning:(bool)arg1;
- (bool)shouldPause;
- (void)unregisterActivity;
- (bool)useManualScheduling;

@end
