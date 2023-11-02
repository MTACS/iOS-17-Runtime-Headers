
@interface _HMEventTriggerBuilder : _HMEventOrTimerTriggerBuilder <HMEventTriggerBuilderInternal> {
    NSMutableArray * _endEvents;
    NSMutableArray * _events;
    bool  _executeOnce;
    NSPredicate * _predicate;
    unsigned long long  _recurrenceDays;
}

@property (nonatomic, copy) NSArray *actionSets;
@property (nonatomic, readonly, copy) NSString *configuredName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, copy) NSArray *endEvents;
@property (nonatomic, copy) NSArray *events;
@property (nonatomic) bool executeOnce;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) bool nameIsConfigured;
@property (nonatomic, retain) HMTriggerPolicy *policy;
@property (nonatomic, copy) NSPredicate *predicate;
@property (nonatomic) unsigned long long recurrenceDays;
@property (nonatomic, copy) NSArray *recurrences;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMActionSetBuilder *triggerOwnedActionSet;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (void)initialize;

- (void).cxx_destruct;
- (bool)_with:(id)arg1 addEvent:(id)arg2;
- (void)_with:(id)arg1 addEvent:(id)arg2 completion:(id /* block */)arg3;
- (bool)_with:(id)arg1 removeEvent:(id)arg2;
- (void)_with:(id)arg1 removeEvent:(id)arg2 completion:(id /* block */)arg3;
- (void)_with:(id)arg1 setEvents:(id)arg2;
- (void)_with:(id)arg1 updateEvents:(id)arg2 completion:(id /* block */)arg3;
- (void)addEndEvent:(id)arg1;
- (void)addEndEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addEvent:(id)arg1;
- (void)addEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (Class)class;
- (id)copyAsBuilder;
- (id)endEvents;
- (id)events;
- (bool)executeOnce;
- (id)initWithContext:(id)arg1 home:(id)arg2;
- (id)initWithEventTrigger:(id)arg1;
- (id)predicate;
- (void)removeEndEvent:(id)arg1;
- (void)removeEndEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeEvent:(id)arg1;
- (void)removeEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setEndEvents:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)setExecuteOnce:(bool)arg1;
- (void)setPredicate:(id)arg1;
- (unsigned long long)triggerActivationState;
- (void)updateEndEvents:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateEvents:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateExecuteOnce:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updatePredicate:(id)arg1 completionHandler:(id /* block */)arg2;

@end
