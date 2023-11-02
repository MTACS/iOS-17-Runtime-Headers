
@interface WFSleepTrigger : WFTrigger {
    unsigned long long  _selection;
}

@property (nonatomic) unsigned long long selection;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)displayGlyphName;
+ (id)displayGlyphTintColor;
+ (bool)isAllowedToRunAutomatically;
+ (bool)isSupportedOnThisDevice;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (bool)supportsSecureCoding;
+ (long long)triggerBacking;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValidConfiguration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (unsigned long long)selection;
- (void)setSelection:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;

@end
