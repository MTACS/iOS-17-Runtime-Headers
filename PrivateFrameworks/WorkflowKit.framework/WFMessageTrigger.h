
@interface WFMessageTrigger : WFTrigger {
    NSString * _selectedContents;
    NSArray * _selectedSenders;
    NSArray * _selectedSendersStrings;
}

@property (nonatomic, retain) NSString *selectedContents;
@property (nonatomic, retain) NSArray *selectedSenders;
@property (nonatomic, retain) NSArray *selectedSendersStrings;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)displayGlyph;
+ (id)displayGlyphTintColor;
+ (bool)isAllowedToRunAutomatically;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (id)messagesGreen;
+ (bool)requiresNotification;
+ (bool)supportsSecureCoding;
+ (long long)triggerBacking;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValidConfiguration;
- (id)initWithCoder:(id)arg1;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedDescriptionWithConfigurationSummaryWithCount:(unsigned long long)arg1;
- (id)localizedPastTenseDescription;
- (id)selectedContents;
- (id)selectedSenders;
- (id)selectedSendersStrings;
- (void)setSelectedContents:(id)arg1;
- (void)setSelectedSenders:(id)arg1;
- (void)setSelectedSendersStrings:(id)arg1;
- (Class)shortcutInputContentItemClass;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)contentCollectionWithEventInfo:(id)arg1;
- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;
- (bool)requiresEventInfoAsInput;

@end
