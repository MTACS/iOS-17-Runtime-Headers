
@interface WFAlarmTrigger : WFTrigger {
    NSArray * _alarmIDs;
    long long  _alarmState;
    long long  _alarmType;
    NSArray * _cachedAlarmDescriptions;
}

@property (nonatomic, copy) NSArray *alarmIDs;
@property (nonatomic) long long alarmState;
@property (nonatomic) long long alarmType;
@property (nonatomic, copy) NSArray *cachedAlarmDescriptions;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)displayGlyphName;
+ (bool)isAllowedToRunAutomatically;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (bool)supportsSecureCoding;
+ (long long)triggerBacking;

- (void).cxx_destruct;
- (id)alarmIDs;
- (long long)alarmState;
- (long long)alarmType;
- (id)cachedAlarmDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValidConfiguration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (void)setAlarmIDs:(id)arg1;
- (void)setAlarmState:(long long)arg1;
- (void)setAlarmType:(long long)arg1;
- (void)setCachedAlarmDescriptions:(id)arg1;
- (id)suggestedActions;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (unsigned long long)alarmEventForCurrentAlarmState;
- (id)publisherWithScheduler:(id)arg1;
- (void)shouldFireInResponseToEvent:(id)arg1 triggerIdentifier:(id)arg2 completion:(id /* block */)arg3;

@end
