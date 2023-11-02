
@interface _HMTimerTriggerBuilder : _HMEventOrTimerTriggerBuilder <HMTimerTriggerBuilderInternal> {
    NSDate * _fireDate;
    NSDateComponents * _recurrence;
    NSString * _significantEvent;
    NSDateComponents * _significantEventOffset;
    NSTimeZone * _timeZone;
}

@property (nonatomic, copy) NSArray *actionSets;
@property (nonatomic, readonly, copy) NSString *configuredName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, copy) NSDate *fireDate;
@property (nonatomic, readonly, copy) NSDate *fireDateIfSet;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) bool nameIsConfigured;
@property (nonatomic, retain) HMTriggerPolicy *policy;
@property (nonatomic, copy) NSDateComponents *recurrence;
@property (nonatomic) unsigned long long recurrenceDays;
@property (nonatomic, copy) NSArray *recurrences;
@property (nonatomic, copy) NSString *significantEvent;
@property (nonatomic, copy) NSDateComponents *significantEventOffset;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic, readonly) HMActionSetBuilder *triggerOwnedActionSet;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_setSignificantEventOffset:(id)arg1;
- (Class)class;
- (id)fireDate;
- (id)fireDateIfSet;
- (id)recurrence;
- (id)recurrenceCalendar;
- (void)setFireDate:(id)arg1;
- (void)setRecurrence:(id)arg1;
- (void)setSignificantEvent:(id)arg1;
- (void)setSignificantEventOffset:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)significantEvent;
- (id)significantEventOffset;
- (id)timeZone;
- (void)updateFireDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateRecurrence:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateSignificantEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateSignificantEventOffset:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateTimeZone:(id)arg1 completionHandler:(id /* block */)arg2;

@end
