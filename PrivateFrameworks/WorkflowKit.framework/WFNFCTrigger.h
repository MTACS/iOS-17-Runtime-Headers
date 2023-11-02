
@interface WFNFCTrigger : WFTrigger {
    NSString * _name;
    NSString * _tagIdentifier;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *tagIdentifier;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)displayGlyphName;
+ (bool)isAllowedToRunAutomatically;
+ (bool)isSupportedOnThisDevice;
+ (bool)isUserInitiated;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (bool)supportsSecureCoding;
+ (long long)triggerBacking;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValidConfiguration;
- (id)initWithCoder:(id)arg1;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (id)name;
- (void)setName:(id)arg1;
- (void)setTagIdentifier:(id)arg1;
- (id)suggestedActions;
- (id)tagIdentifier;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;
- (id)publisherWithScheduler:(id)arg1;
- (void)shouldFireInResponseToEvent:(id)arg1 triggerIdentifier:(id)arg2 completion:(id /* block */)arg3;

@end
