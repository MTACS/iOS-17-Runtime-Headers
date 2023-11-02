
@interface WFPredictedLocationTransitionTrigger : WFTrigger {
    unsigned long long  _destinationType;
    unsigned long long  _minutesBefore;
}

@property (nonatomic) unsigned long long destinationType;
@property (nonatomic) unsigned long long minutesBefore;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)displayGlyph;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (bool)supportsSecureCoding;
+ (long long)triggerBacking;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)destinationType;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValidConfiguration;
- (id)initWithCoder:(id)arg1;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (unsigned long long)minutesBefore;
- (void)setDestinationType:(unsigned long long)arg1;
- (void)setMinutesBefore:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;
- (double)timeIntervalLowerBound;
- (double)timeIntervalUpperBound;

@end
