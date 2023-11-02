
@interface WFCarPlayConnectionTrigger : WFTrigger {
    bool  _onConnect;
    bool  _onDisconnect;
}

@property (nonatomic) bool onConnect;
@property (nonatomic) bool onDisconnect;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)displayGlyphName;
+ (bool)isAllowedToRunAutomatically;
+ (bool)isSupportedOnThisDevice;
+ (bool)isUserInitiated;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (id)offIcon;
+ (id)offLabel;
+ (id)onIcon;
+ (id)onLabel;
+ (bool)supportsSecureCoding;
+ (long long)triggerBacking;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValidConfiguration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (bool)onConnect;
- (bool)onDisconnect;
- (void)setOnConnect:(bool)arg1;
- (void)setOnDisconnect:(bool)arg1;
- (id)suggestedActions;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)publisherWithScheduler:(id)arg1;
- (void)shouldFireInResponseToEvent:(id)arg1 triggerIdentifier:(id)arg2 completion:(id /* block */)arg3;

@end
