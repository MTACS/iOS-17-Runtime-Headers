
@interface WFAppInFocusTrigger : WFTrigger {
    bool  _onBackground;
    bool  _onFocus;
    NSArray * _selectedBundleIdentifiers;
}

@property (nonatomic) bool onBackground;
@property (nonatomic) bool onFocus;
@property (nonatomic, copy) NSArray *selectedBundleIdentifiers;

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

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValidConfiguration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (bool)onBackground;
- (bool)onFocus;
- (id)selectedBundleIdentifiers;
- (void)setOnBackground:(bool)arg1;
- (void)setOnFocus:(bool)arg1;
- (void)setSelectedBundleIdentifiers:(id)arg1;
- (id)suggestedActions;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;
- (id)onBackgroundIgnoredLaunchReasons;
- (id)onFocusIgnoredLaunchReasons;
- (bool)shouldFireTriggerWithEventInfo:(id)arg1 error:(out id*)arg2;

@end
