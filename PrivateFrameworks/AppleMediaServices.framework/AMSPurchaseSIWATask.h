
@interface AMSPurchaseSIWATask : AMSPurchaseTask {
    AKAuthorization * _authorization;
    NSUUID * _continuationRequestIdentifier;
    bool  _purchaseRequiresAuthorization;
    AMSPurchaseSIWA * _purchaseSIWA;
    AKCredentialRequestContext * _requestContext;
    NSError * _siwaError;
}

@property (nonatomic, retain) AKAuthorization *authorization;
@property (nonatomic, copy) NSUUID *continuationRequestIdentifier;
@property (nonatomic) bool purchaseRequiresAuthorization;
@property (nonatomic, retain) AMSPurchaseSIWA *purchaseSIWA;
@property (nonatomic, retain) AKCredentialRequestContext *requestContext;
@property (nonatomic, copy) NSError *siwaError;

- (void).cxx_destruct;
- (id)_beginAuthorization;
- (bool)_beginAuthorizationWasPerformed;
- (id)_cancelAuthorization;
- (id)_continueAuthorization;
- (bool)_siwaDidCommence;
- (void)_updateRequestContextWithPurchaseInfo:(id)arg1;
- (bool)_willRequireAskToBuyForTaskInfo:(id)arg1;
- (id)authorization;
- (id)continuationRequestIdentifier;
- (id)initWithPurchaseSIWA:(id)arg1 bag:(id)arg2;
- (id)newAuthorizationController;
- (bool)performPreActionRequestForTaskInfo:(id)arg1 requiresAuthorization:(bool)arg2 error:(id*)arg3;
- (id)performPreauthenticate;
- (id)performPurchaseSIWA;
- (id)preauthenticateOptions;
- (bool)purchaseRequiresAuthorization;
- (id)purchaseSIWA;
- (id)requestContext;
- (void)setAuthorization:(id)arg1;
- (void)setContinuationRequestIdentifier:(id)arg1;
- (void)setPurchaseRequiresAuthorization:(bool)arg1;
- (void)setPurchaseSIWA:(id)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setSiwaError:(id)arg1;
- (id)siwaError;

@end
