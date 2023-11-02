
@interface WFAppInBackgroundTrigger : WFTrigger {
    NSArray * _selectedBundleIdentifiers;
}

@property (nonatomic, copy) NSArray *selectedBundleIdentifiers;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)displayGlyphName;
+ (bool)isAllowedToRunAutomatically;
+ (bool)isUserInitiated;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (bool)supportsSecureCoding;
+ (long long)triggerBacking;

- (void).cxx_destruct;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValidConfiguration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (id)selectedBundleIdentifiers;
- (void)setSelectedBundleIdentifiers:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;

@end
