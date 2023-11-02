
@interface WFWalletTransactionTrigger : WFTrigger {
    NSArray * _selectedMerchantTypes;
    NSArray * _selectedMerchants;
    NSArray * _selectedPassUniqueIDs;
}

@property (nonatomic, retain) NSArray *selectedMerchantTypes;
@property (nonatomic, retain) NSArray *selectedMerchants;
@property (nonatomic, retain) NSArray *selectedPassUniqueIDs;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)displayGlyph;
+ (bool)isAllowedToRunAutomatically;
+ (bool)isSupportedOnThisDevice;
+ (bool)isUserInitiated;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (bool)supportsSecureCoding;
+ (long long)triggerBacking;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValidConfiguration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (id)selectedMerchantTypes;
- (id)selectedMerchants;
- (id)selectedPassUniqueIDs;
- (void)setSelectedMerchantTypes:(id)arg1;
- (void)setSelectedMerchants:(id)arg1;
- (void)setSelectedPassUniqueIDs:(id)arg1;
- (Class)shortcutInputContentItemClass;
- (id)suggestedActions;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

+ (bool)registerContextSyncClient;
+ (bool)unregisterContextSyncClient;

- (id)contentCollectionWithEventInfo:(id)arg1;
- (id)dictionaryWithTransaction:(id)arg1 transactionEvent:(id)arg2;
- (void)eventInfoForEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)getRemoteTransactionForUniquePassID:(id)arg1 transactionIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (bool)hasRemotePublisher;
- (bool)isPassIdentifierValid:(id)arg1;
- (id)publisherWithScheduler:(id)arg1;
- (id)remotePublisherWithScheduler:(id)arg1;
- (bool)requiresEventInfoAsInput;
- (void)shouldFireInResponseToEvent:(id)arg1 triggerIdentifier:(id)arg2 completion:(id /* block */)arg3;

@end
