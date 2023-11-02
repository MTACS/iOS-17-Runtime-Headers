
@interface HMDAnalyticsEventTriggerData : HMFObject {
    int  _activationState;
    int  _activationType;
    bool  _containsRecurrences;
    NSArray * _events;
    bool  _executeOnce;
    HMDAnalyticsPredicateData * _predicate;
}

@property (nonatomic) int activationState;
@property (nonatomic) int activationType;
@property bool containsRecurrences;
@property (nonatomic, copy) NSArray *events;
@property bool executeOnce;
@property (nonatomic, retain) HMDAnalyticsPredicateData *predicate;

- (void).cxx_destruct;
- (int)activationState;
- (int)activationType;
- (bool)containsRecurrences;
- (id)events;
- (bool)executeOnce;
- (id)initWithEventTrigger:(id)arg1 isAdding:(bool)arg2;
- (id)predicate;
- (void)setActivationState:(int)arg1;
- (void)setActivationType:(int)arg1;
- (void)setContainsRecurrences:(bool)arg1;
- (void)setEvents:(id)arg1;
- (void)setExecuteOnce:(bool)arg1;
- (void)setPredicate:(id)arg1;

@end
