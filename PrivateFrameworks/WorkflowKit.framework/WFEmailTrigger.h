
@interface WFEmailTrigger : WFTrigger {
    NSArray * _selectedAccountDescriptions;
    NSArray * _selectedAccountIdentifiers;
    NSArray * _selectedRecipients;
    NSArray * _selectedSenders;
    NSString * _selectedSubject;
}

@property (nonatomic, retain) NSArray *selectedAccountDescriptions;
@property (nonatomic, retain) NSArray *selectedAccountIdentifiers;
@property (nonatomic, retain) NSArray *selectedRecipients;
@property (nonatomic, retain) NSArray *selectedSenders;
@property (nonatomic, retain) NSString *selectedSubject;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)displayGlyphName;
+ (id)displayGlyphTintColor;
+ (bool)isAllowedToRunAutomatically;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (id)mailBlue;
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
- (id)selectedAccountDescriptions;
- (id)selectedAccountIdentifiers;
- (id)selectedRecipients;
- (id)selectedSenders;
- (id)selectedSubject;
- (void)setSelectedAccountDescriptions:(id)arg1;
- (void)setSelectedAccountIdentifiers:(id)arg1;
- (void)setSelectedRecipients:(id)arg1;
- (void)setSelectedSenders:(id)arg1;
- (void)setSelectedSubject:(id)arg1;
- (Class)shortcutInputContentItemClass;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)contentCollectionWithEventInfo:(id)arg1;
- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;
- (bool)requiresEventInfoAsInput;

@end
