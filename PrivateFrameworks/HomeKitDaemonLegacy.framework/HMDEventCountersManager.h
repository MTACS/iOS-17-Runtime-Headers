
@interface HMDEventCountersManager : HMFObject <HMDEventCounterContext> {
    HMMCountersManager * _bridgedCountersManager;
    NSMutableDictionary * _counterGroups;
    <HMDEventCountersStoring> * _counterStorage;
    double  _lastSaveTime;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _pendingSave;
    HMDPersistentStore * _persistentStore;
    NSMutableArray * _saveHooks;
    double  _saveInterval;
    id /* block */  _timeSourceBlock;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMMCountersManager *bridgedCountersManager;
@property (nonatomic, readonly) <HMDEventCountersStoring> *counterStorage;
@property (nonatomic, readonly) NSArray *saveHooks;
@property (nonatomic, readonly) double saveInterval;
@property (nonatomic, readonly) id /* block */ timeSourceBlock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)allowedSpecifierClasses;

- (void).cxx_destruct;
- (id)_fetchAllEventCounters;
- (void)_removeCounterGroupForSpecifier:(id)arg1;
- (void)_save;
- (void)addObserver:(id)arg1 forEventName:(id)arg2 requestGroup:(id)arg3;
- (void)addSaveHook:(id /* block */)arg1;
- (id)bridgedCountersManager;
- (void)counterChanged;
- (id)counterGroupForName:(id)arg1;
- (id)counterGroupForSpecifier:(id)arg1;
- (id)counterGroupsForPredicate:(id /* block */)arg1;
- (id)counterStorage;
- (unsigned long long)fetchAggregatedEventCountersForRequestGroup:(id)arg1;
- (id)fetchAllEventCounters;
- (unsigned long long)fetchEventCounterForEventName:(id)arg1 requestGroup:(id)arg2;
- (id)fetchEventCountersForRequestGroup:(id)arg1;
- (void)forceSave;
- (void)incrementEventCounterForEventName:(id)arg1 requestGroup:(id)arg2;
- (void)incrementEventCounterForEventName:(id)arg1 requestGroup:(id)arg2 withValue:(unsigned long long)arg3;
- (id)init;
- (id)initWithBridgedCountersManager:(id)arg1;
- (id)initWithEventCountersStorage:(id)arg1 bridgedCountersManager:(id)arg2;
- (id)initWithEventCountersStorage:(id)arg1 bridgedCountersManager:(id)arg2 saveInterval:(double)arg3 timeSourceBlock:(id /* block */)arg4;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeCounterGroupForName:(id)arg1;
- (void)removeCounterGroupForSpecifier:(id)arg1;
- (void)removeCounterGroupsBasedOnPredicate:(id /* block */)arg1;
- (void)resetAllEventCounters;
- (void)resetEventCounterForEventName:(id)arg1 requestGroup:(id)arg2;
- (void)resetEventCountersForRequestGroup:(id)arg1;
- (id)saveHooks;
- (double)saveInterval;
- (id /* block */)timeSourceBlock;
- (id)unarchiveEventCounters;
- (id)workQueue;

@end
