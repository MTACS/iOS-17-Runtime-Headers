
@interface WFWorkoutTrigger : WFTrigger {
    bool  _onEnd;
    bool  _onStart;
    NSArray * _selectedWorkoutTypes;
    unsigned long long  _selection;
}

@property (nonatomic) bool onEnd;
@property (nonatomic) bool onStart;
@property (nonatomic, copy) NSArray *selectedWorkoutTypes;
@property (nonatomic) unsigned long long selection;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)displayGlyphHierarchicalColors;
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
+ (id)stopColor;
+ (bool)supportsSecureCoding;
+ (long long)triggerBacking;
+ (id)workoutColors;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValidConfiguration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (bool)onEnd;
- (bool)onStart;
- (id)selectedWorkoutTypes;
- (unsigned long long)selection;
- (void)setOnEnd:(bool)arg1;
- (void)setOnStart:(bool)arg1;
- (void)setSelectedWorkoutTypes:(id)arg1;
- (void)setSelection:(unsigned long long)arg1;
- (id)suggestedActions;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;
- (unsigned long long)contextStoreRegistrationIsForWatch;

@end
