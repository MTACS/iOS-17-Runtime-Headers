
@interface AMSPurchaseTask : AMSTask <AMSAuthenticateTaskDelegate, AMSBagConsumer, AMSURLProtocolDelegate, NSURLSessionDelegate> {
    <AMSBagProtocol> * _bag;
    Class  _paymentSheetTaskClass;
    AMSPurchaseInfo * _purchaseInfo;
    AMSURLSession * _session;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMSPurchaseDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) Class paymentSheetTaskClass;
@property (nonatomic, retain) AMSPurchaseInfo *purchaseInfo;
@property (nonatomic, readonly) AMSURLSession *session;
@property (readonly) Class superclass;

+ (id)_engagementEventWithInfo:(id)arg1 responseDictionary:(id)arg2 error:(id)arg3;
+ (id)_filterResponseDictionary:(id)arg1;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (bool)shouldPreauthenticatePurchaseWithInfo:(id)arg1;

- (void).cxx_destruct;
- (id)_performPurchaseWithError:(id*)arg1;
- (id)_promptForAccount;
- (id)_recordEngagementEventWithInfo:(id)arg1 responseDictionary:(id)arg2 error:(id)arg3;
- (void)_regenerateFDSWithInfo:(id)arg1 bag:(id)arg2 action:(unsigned long long)arg3;
- (id)_runAuthenticateRequest:(id)arg1;
- (id)_runDialogRequest:(id)arg1;
- (bool)_shouldAttemptCardEnrollment;
- (void)authenticateTask:(id)arg1 handleDialogRequest:(id)arg2 completion:(id /* block */)arg3;
- (id)bag;
- (id)delegate;
- (void)generateFDSWithInfo:(id)arg1 bag:(id)arg2;
- (id)initWithPurchase:(id)arg1 bag:(id)arg2;
- (Class)paymentSheetTaskClass;
- (bool)performPreActionRequestForTaskInfo:(id)arg1 requiresAuthorization:(bool)arg2 error:(id*)arg3;
- (id)performPreauthenticate;
- (id)performPurchase;
- (id)preauthenticateOptions;
- (id)purchaseInfo;
- (id)session;
- (void)setBag:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPaymentSheetTaskClass:(Class)arg1;
- (void)setPurchaseInfo:(id)arg1;

@end
