
@interface HMTimerTrigger : HMTrigger <HFTriggerProtocol, HMTimerTriggerConfiguration, NSSecureCoding> {
    NSDate * _fireDate;
    NSDateComponents * _recurrence;
    NSCalendar * _recurrenceCalendar;
    NSArray * _recurrences;
    NSString * _significantEvent;
    NSDateComponents * _significantEventOffset;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly, copy) NSArray *actionSets;
@property (nonatomic, readonly, copy) NSString *configuredName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, copy) NSDate *fireDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) HMTriggerPolicy *policy;
@property (nonatomic, copy) NSDateComponents *recurrence;
@property (nonatomic, readonly, copy) NSCalendar *recurrenceCalendar;
@property (nonatomic, readonly, copy) NSArray *recurrences;
@property (nonatomic, readonly, copy) NSString *significantEvent;
@property (nonatomic, readonly, copy) NSDateComponents *significantEventOffset;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSTimeZone *timeZone;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleTriggerFired:(id)arg1;
- (id)_serializeForAdd;
- (void)_updateFireDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateRecurrence:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateRecurrences:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateSignificantEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateSignificantEventOffset:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateTimeZone:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateTimerTriggerPropertiesFromResponse:(id)arg1;
- (void)_updateTimerTriggerWithResponse:(id /* block */)arg1 payloadToSend:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)fireDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 home:(id)arg2;
- (id)initWithName:(id)arg1 fireDate:(id)arg2 recurrence:(id)arg3;
- (id)initWithName:(id)arg1 fireDate:(id)arg2 timeZone:(id)arg3 recurrence:(id)arg4;
- (id)initWithName:(id)arg1 fireDate:(id)arg2 timeZone:(id)arg3 recurrence:(id)arg4 recurrenceCalendar:(id)arg5;
- (id)initWithName:(id)arg1 fireDate:(id)arg2 timeZone:(id)arg3 recurrences:(id)arg4;
- (id)initWithName:(id)arg1 significantEvent:(id)arg2 significantEventOffset:(id)arg3 recurrences:(id)arg4;
- (bool)mergeFromNewObject:(id)arg1;
- (id)recurrence;
- (id)recurrenceCalendar;
- (id)recurrences;
- (void)setFireDate:(id)arg1;
- (void)setRecurrence:(id)arg1;
- (void)setRecurrences:(id)arg1;
- (void)setSignificantEvent:(id)arg1;
- (void)setSignificantEventOffset:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)significantEvent;
- (id)significantEventOffset;
- (id)timeZone;
- (void)updateFireDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateRecurrence:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateRecurrences:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateSignificantEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateSignificantEventOffset:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateTimeZone:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)_hf_naturalLanguageDetailsSentenceElementsWithRecurrences:(id)arg1 withOptions:(id)arg2;
+ (id)_hf_naturalLanguageNameWithOptions:(id)arg1 timeString:(id)arg2 fireDate:(id)arg3 recurrences:(id)arg4;
+ (id)hf_naturalLanguageDetailsWithRecurrences:(id)arg1 withOptions:(id)arg2;
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 fireDate:(id)arg2 recurrences:(id)arg3;
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 significantEvent:(id)arg2 offset:(id)arg3 recurrences:(id)arg4;
+ (id)hf_newTriggerWithBuilder:(id)arg1 inHome:(id)arg2;
+ (id)hf_recurrenceNaturalLanguageStringKeyWithOptions:(id)arg1 recurrences:(id)arg2;
+ (id)hf_recurrenceNaturalLanguageStringKeyWithOptions:(id)arg1 recurrences:(id)arg2 intendedForTimeTriggerEditor:(bool)arg3;
+ (id)hf_recurrenceNaturalLanguageStringWithRecurrences:(id)arg1;

- (id)_hf_naturalLanguageDetailsSentenceElementsWithOptions:(id)arg1;
- (id)hf_naturalLanguageNameWithHome:(id)arg1 type:(unsigned long long)arg2;
- (id)hf_naturalLanguageNameWithOptions:(id)arg1;
- (unsigned long long)hf_triggerType;

@end
