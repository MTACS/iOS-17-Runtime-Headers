
@interface VSViewServiceRequestPreparationOperation : VSAsyncOperation {
    bool  _accountModificationAllowed;
    NSArray * _applicationAccountProviders;
    VSAuditToken * _auditToken;
    VSIdentityProviderAvailabilityInfoCenter * _availabilityInfoCenter;
    VSOptional * _currentAccount;
    NSArray * _featuredIdentityProviderIdentifiers;
    struct { 
        unsigned int val[8]; 
    }  _hostAuditToken;
    int  _hostProcessIdentifier;
    NSXPCConnection * _privacyServiceConnection;
    NSOperationQueue * _privateQueue;
    bool  _requestAllowsPrivacyUI;
    bool  _requestRequiresPrivacyUI;
    VSOptional * _result;
    bool  _shouldInferFeaturedProviders;
    bool  _shouldReturnErrorOnTVProviderFeatureUnsupportedByStorefront;
    NSArray * _supportedIdentityProviderIdentifiers;
}

@property (getter=isAccountModificationAllowed, nonatomic) bool accountModificationAllowed;
@property (nonatomic, copy) NSArray *applicationAccountProviders;
@property (nonatomic, copy) VSAuditToken *auditToken;
@property (nonatomic, retain) VSIdentityProviderAvailabilityInfoCenter *availabilityInfoCenter;
@property (nonatomic, retain) VSOptional *currentAccount;
@property (nonatomic, copy) NSArray *featuredIdentityProviderIdentifiers;
@property (nonatomic) struct { unsigned int x1[8]; } hostAuditToken;
@property (nonatomic) int hostProcessIdentifier;
@property (nonatomic, retain) NSXPCConnection *privacyServiceConnection;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic) bool requestAllowsPrivacyUI;
@property (nonatomic) bool requestRequiresPrivacyUI;
@property (nonatomic, retain) VSOptional *result;
@property (nonatomic) bool shouldInferFeaturedProviders;
@property (nonatomic) bool shouldReturnErrorOnTVProviderFeatureUnsupportedByStorefront;
@property (nonatomic, copy) NSArray *supportedIdentityProviderIdentifiers;

- (void).cxx_destruct;
- (void)_checkAvailability;
- (void)_checkEntitlement;
- (void)_checkPrivacy;
- (void)_checkSupportedProviders;
- (void)_continueCheckPrivacyWithAccessStatus:(unsigned long long)arg1;
- (void)_determineProviderDisplayNameWithUI:(bool)arg1;
- (void)_finishWithError:(id)arg1;
- (void)_finishWithSupportedProviders:(id)arg1;
- (id)_privacyServiceWithErrorHandler:(id /* block */)arg1;
- (void)_promptForPrivacyWithDisplayNameIfRequired:(id)arg1 providerID:(id)arg2 providerIsSupported:(bool)arg3 allowUI:(bool)arg4;
- (id)applicationAccountProviders;
- (id)auditToken;
- (id)availabilityInfoCenter;
- (void)cancel;
- (id)currentAccount;
- (void)dealloc;
- (void)executionDidBegin;
- (id)featuredIdentityProviderIdentifiers;
- (struct { unsigned int x1[8]; })hostAuditToken;
- (int)hostProcessIdentifier;
- (id)init;
- (bool)isAccountModificationAllowed;
- (id)privacyServiceConnection;
- (id)privateQueue;
- (bool)requestAllowsPrivacyUI;
- (bool)requestRequiresPrivacyUI;
- (id)result;
- (void)setAccountModificationAllowed:(bool)arg1;
- (void)setApplicationAccountProviders:(id)arg1;
- (void)setAuditToken:(id)arg1;
- (void)setAvailabilityInfoCenter:(id)arg1;
- (void)setCurrentAccount:(id)arg1;
- (void)setFeaturedIdentityProviderIdentifiers:(id)arg1;
- (void)setHostAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)setHostProcessIdentifier:(int)arg1;
- (void)setPrivacyServiceConnection:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setRequestAllowsPrivacyUI:(bool)arg1;
- (void)setRequestRequiresPrivacyUI:(bool)arg1;
- (void)setResult:(id)arg1;
- (void)setShouldInferFeaturedProviders:(bool)arg1;
- (void)setShouldReturnErrorOnTVProviderFeatureUnsupportedByStorefront:(bool)arg1;
- (void)setSupportedIdentityProviderIdentifiers:(id)arg1;
- (bool)shouldInferFeaturedProviders;
- (bool)shouldReturnErrorOnTVProviderFeatureUnsupportedByStorefront;
- (id)supportedIdentityProviderIdentifiers;

@end
