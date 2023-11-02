
@interface WFPlugInTrigger : WFTrigger {
    bool  _onDisable;
    bool  _onEnable;
}

@property (nonatomic) bool onDisable;
@property (nonatomic) bool onEnable;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)displayGlyphHierarchicalColors;
+ (id)displayGlyphName;
+ (bool)isAllowedToRunAutomatically;
+ (bool)isUserInitiated;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (id)offIcon;
+ (id)offLabel;
+ (id)onIcon;
+ (id)onLabel;
+ (id)pluggedInHierarchicalColors;
+ (bool)supportsSecureCoding;
+ (long long)triggerBacking;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValidConfiguration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (bool)onDisable;
- (bool)onEnable;
- (void)setOnDisable:(bool)arg1;
- (void)setOnEnable:(bool)arg1;
- (id)suggestedActions;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;
- (id)publisherWithScheduler:(id)arg1;
- (void)shouldFireInResponseToEvent:(id)arg1 triggerIdentifier:(id)arg2 completion:(id /* block */)arg3;

@end
