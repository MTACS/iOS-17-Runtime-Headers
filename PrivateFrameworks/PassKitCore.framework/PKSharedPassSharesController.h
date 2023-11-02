
@interface PKSharedPassSharesController : NSObject <PKPaymentDataProviderDelegate> {
    PKContactResolver * _contactResolver;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _delegateLock;
    NSHashTable * _delegates;
    bool  _featureSupported;
    bool  _isPerformingBatchOpperation;
    PKPassShare * _mostRecentlyCreatedShare;
    NSArray * _myEntitlements;
    PKSecureElementPass * _pass;
    <PKPaymentDataProvider> * _paymentServiceProvider;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _shareableEntitlements;
    NSArray * _shares;
    PKPaymentWebService * _webService;
}

@property (nonatomic, readonly) bool canAllowResharing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasRevokableShares;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCrossPlatformSharingEnabled;
@property (nonatomic, readonly) unsigned long long maxEntitlementSelectionCount;
@property (nonatomic, readonly) PKPassShare *mostRecentlyCreatedShare;
@property (nonatomic, readonly) NSArray *myEntitlements;
@property (nonatomic, readonly) NSArray *nonLocalShares;
@property (nonatomic, readonly) PKSecureElementPass *pass;
@property (nonatomic, readonly) NSArray *rootShares;
@property (nonatomic, readonly) NSArray *shareableEntitlements;
@property (nonatomic, readonly) NSArray *shares;
@property (nonatomic, readonly) bool sharingEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contactResolver;
- (id)_feature;
- (void)_immobilizerTokenCountWithCompletion:(id /* block */)arg1;
- (unsigned long long)_numberOfSharesPartnerDoesNotKnowAbout;
- (long long)_randomCodeOfLength:(long long)arg1;
- (id)_sharingActivationConfigurationForChannel:(id)arg1 channelRisk:(long long)arg2;
- (long long)_totalPendingCredentialShares;
- (long long)_totalPendingShares;
- (void)addDefaultShareActivationOptionsToShare:(id)arg1 availableOptions:(id*)arg2 allowUserEdit:(bool*)arg3 channelBundleIdentifier:(id)arg4 isRecipientKnownContact:(bool)arg5;
- (void)addDelegate:(id)arg1;
- (id)allowedSharingChannels;
- (id)baseNewShareForPass;
- (id)blockedSharingChannels;
- (bool)canAllowResharing;
- (void)canSendInvitationWithCompletion:(id /* block */)arg1;
- (id)childSharesOfShare:(id)arg1;
- (id)contactForShare:(id)arg1;
- (void)createShareWithPartialShare:(id)arg1 authorization:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void)didUpdateShares;
- (id)entitlementsForShare:(id)arg1;
- (void)fetchContactForShare:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)hasRevokableShares;
- (id)initWithPass:(id)arg1 contactResolver:(id)arg2 webService:(id)arg3 paymentServiceProvider:(id)arg4 queue:(id)arg5;
- (id)initWithPass:(id)arg1 webService:(id)arg2 paymentServiceProvider:(id)arg3 queue:(id)arg4;
- (bool)isCrossPlatformSharingEnabled;
- (bool)isSharingChannelBlockedForChannel:(id)arg1 isRecipientKnownContact:(bool)arg2;
- (unsigned long long)maxEntitlementSelectionCount;
- (id)mostRecentlyCreatedShare;
- (id)myEntitlements;
- (id)nonLocalShares;
- (id)pass;
- (void)prewarmCreateShare;
- (void)removeDelegate:(id)arg1;
- (void)revokeAllSharesWithCompletion:(id /* block */)arg1;
- (void)revokeShare:(id)arg1 shouldCascade:(bool)arg2 withCompletion:(id /* block */)arg3;
- (id)rootShares;
- (id)senderShareForShare:(id)arg1;
- (id)shareForShareIdentifier:(id)arg1;
- (id)shareInitiationActivationConfigurationForChannelBundleIdentifier:(id)arg1 isRecipientKnownContact:(bool)arg2;
- (id)shareableEntitlements;
- (id)shares;
- (void)sharesDidUpdateWithPaymentPassWithUniqueIdentifier:(id)arg1;
- (bool)sharingEnabled;
- (void)updateEntitlementsWithCompletion:(id /* block */)arg1;
- (void)updateShare:(id)arg1 authorization:(id)arg2 completion:(id /* block */)arg3;
- (void)updateSharesWithCompletion:(id /* block */)arg1;

@end
