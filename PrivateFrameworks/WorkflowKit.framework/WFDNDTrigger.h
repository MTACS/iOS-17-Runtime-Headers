
@interface WFDNDTrigger : WFTrigger {
    bool  _onDisable;
    bool  _onEnable;
}

@property (nonatomic) bool onDisable;
@property (nonatomic) bool onEnable;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)displayGlyphName;
+ (id)displayGlyphTintColor;
+ (bool)isAllowedToRunAutomatically;
+ (bool)isUserInitiated;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (id)offIcon;
+ (id)offIconTintColor;
+ (id)offLabel;
+ (id)onIcon;
+ (id)onIconTintColor;
+ (id)onLabel;
+ (bool)supportsSecureCoding;
+ (id)tintColor;
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

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;

@end
