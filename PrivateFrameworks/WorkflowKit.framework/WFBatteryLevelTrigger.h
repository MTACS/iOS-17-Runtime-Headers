
@interface WFBatteryLevelTrigger : WFTrigger {
    unsigned long long  _level;
    unsigned long long  _selection;
}

@property (nonatomic) unsigned long long level;
@property (nonatomic) unsigned long long selection;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)displayGlyphHierarchicalColors;
+ (id)displayGlyphName;
+ (bool)isAllowedToRunAutomatically;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (bool)supportsSecureCoding;
+ (long long)triggerBacking;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValidConfiguration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)level;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (unsigned long long)selection;
- (void)setLevel:(unsigned long long)arg1;
- (void)setSelection:(unsigned long long)arg1;
- (id)suggestedActions;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;
- (id)publisherWithScheduler:(id)arg1;
- (void)shouldFireInResponseToEvent:(id)arg1 triggerIdentifier:(id)arg2 completion:(id /* block */)arg3;

@end
