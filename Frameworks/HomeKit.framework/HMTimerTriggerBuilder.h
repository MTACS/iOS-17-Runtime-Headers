
@interface HMTimerTriggerBuilder : HMTimerTrigger <HMTimerTriggerBuilder, HMTimerTriggerBuilderInternal, HMTimerTriggerBuilderPrivate>

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

+ (id)alloc;

@end
