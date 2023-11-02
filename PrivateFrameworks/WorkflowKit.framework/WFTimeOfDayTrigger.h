
@interface WFTimeOfDayTrigger : WFTrigger <NSSecureCoding> {
    NSNumber * _dayOfMonth;
    NSArray * _daysOfWeek;
    unsigned long long  _event;
    unsigned long long  _mode;
    NSDateComponents * _time;
    unsigned long long  _timeOffset;
}

@property (nonatomic, copy) NSNumber *dayOfMonth;
@property (nonatomic, copy) NSArray *daysOfWeek;
@property (nonatomic) unsigned long long event;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, retain) NSDateComponents *time;
@property (nonatomic) unsigned long long timeOffset;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)dateFormatter;
+ (id)displayGlyphName;
+ (bool)isAllowedToRunAutomatically;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (id)localizedRecurrenceDescriptionForDaysOfWeek:(id)arg1 dayOfMonth:(id)arg2 mode:(unsigned long long)arg3;
+ (id)localizedSunriseSunsetDescriptionForTriggerEvent:(unsigned long long)arg1 timeOffset:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;
+ (long long)triggerBacking;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dayOfMonth;
- (id)daysOfWeek;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)event;
- (bool)hasValidConfiguration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (unsigned long long)mode;
- (void)setDayOfMonth:(id)arg1;
- (void)setDaysOfWeek:(id)arg1;
- (void)setEvent:(unsigned long long)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setTime:(id)arg1;
- (void)setTimeOffset:(unsigned long long)arg1;
- (id)suggestedActions;
- (id)time;
- (unsigned long long)timeOffset;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;
- (bool)needsRegistrationAfterFiring;

@end
