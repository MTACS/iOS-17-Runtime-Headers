
@interface WFWifiTrigger : WFTrigger {
    bool  _onConnect;
    bool  _onDisconnect;
    bool  _runAfterConnectionInterruption;
    NSArray * _selectedNetworks;
    unsigned long long  _selection;
}

@property (nonatomic) bool onConnect;
@property (nonatomic) bool onDisconnect;
@property (nonatomic) bool runAfterConnectionInterruption;
@property (nonatomic, retain) NSArray *selectedNetworks;
@property (nonatomic) unsigned long long selection;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)displayGlyphName;
+ (bool)isAllowedToRunAutomatically;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (id)offIcon;
+ (id)offIconTintColor;
+ (id)offLabel;
+ (id)onIcon;
+ (id)onIconTintColor;
+ (id)onLabel;
+ (bool)requiresNotification;
+ (bool)supportsSecureCoding;
+ (id)tintColor;
+ (long long)triggerBacking;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValidConfiguration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (bool)onConnect;
- (bool)onDisconnect;
- (bool)runAfterConnectionInterruption;
- (id)selectedNetworks;
- (unsigned long long)selection;
- (void)setOnConnect:(bool)arg1;
- (void)setOnDisconnect:(bool)arg1;
- (void)setRunAfterConnectionInterruption:(bool)arg1;
- (void)setSelectedNetworks:(id)arg1;
- (void)setSelection:(unsigned long long)arg1;
- (id)suggestedActions;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;
- (id)publisherWithScheduler:(id)arg1;
- (void)shouldFireInResponseToEvent:(id)arg1 triggerIdentifier:(id)arg2 completion:(id /* block */)arg3;

@end
