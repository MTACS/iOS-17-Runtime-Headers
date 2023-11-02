
@interface WFUserFocusActivityTrigger : WFTrigger {
    NSString * _activityGlyphName;
    NSString * _activityName;
    NSString * _activitySemanticIdentifier;
    WFColor * _activityTintColor;
    NSString * _activityUniqueIdentifier;
    bool  _onDisable;
    bool  _onEnable;
}

@property (nonatomic, retain) NSString *activityGlyphName;
@property (nonatomic, retain) NSString *activityName;
@property (nonatomic, retain) NSString *activitySemanticIdentifier;
@property (nonatomic, retain) WFColor *activityTintColor;
@property (nonatomic, retain) NSString *activityUniqueIdentifier;
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

- (void).cxx_destruct;
- (id)activityGlyphName;
- (id)activityName;
- (id)activitySemanticIdentifier;
- (id)activityTintColor;
- (id)activityUniqueIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayGlyph;
- (id)displayGlyphName;
- (id)displayGlyphTintColor;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValidConfiguration;
- (id)init;
- (id)initWithActivity:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedDisplayExplanation;
- (id)localizedDisplayName;
- (id)localizedPastTenseDescription;
- (bool)onDisable;
- (bool)onEnable;
- (void)setActivityGlyphName:(id)arg1;
- (void)setActivityName:(id)arg1;
- (void)setActivitySemanticIdentifier:(id)arg1;
- (void)setActivityTintColor:(id)arg1;
- (void)setActivityUniqueIdentifier:(id)arg1;
- (void)setOnDisable:(bool)arg1;
- (void)setOnEnable:(bool)arg1;
- (id)suggestedActions;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)publisherWithScheduler:(id)arg1;
- (void)shouldFireInResponseToEvent:(id)arg1 triggerIdentifier:(id)arg2 completion:(id /* block */)arg3;

@end
