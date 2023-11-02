
@interface AMSPaymentSheetTask : AMSTask <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate> {
    AMSPaymentSheetAssetCache * _assetCache;
    AKAppleIDAuthenticationContext * _authenticationContext;
    <AMSBagProtocol> * _bag;
    NSDictionary * _metricsDictionary;
    PKPaymentAuthorizationController * _paymentAuthorizationController;
    AMSPromise * _paymentSheetPromise;
    AMSFinancePaymentSheetResponse * _paymentSheetResponse;
    NSObject<OS_dispatch_queue> * _presentationQueue;
    NSString * _presentingSceneBundleIdentifier;
    NSString * _presentingSceneIdentifier;
    AMSPurchaseInfo * _purchaseInfo;
    AMSPaymentSheetRequest * _request;
    _PaymentSheetState * _state;
    NSMutableArray * _userActions;
}

@property (nonatomic, retain) AMSPaymentSheetAssetCache *assetCache;
@property (nonatomic, retain) AKAppleIDAuthenticationContext *authenticationContext;
@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *metricsDictionary;
@property (nonatomic, retain) PKPaymentAuthorizationController *paymentAuthorizationController;
@property (nonatomic, retain) AMSPromise *paymentSheetPromise;
@property (nonatomic, readonly) AMSFinancePaymentSheetResponse *paymentSheetResponse;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *presentationQueue;
@property (nonatomic, copy) NSString *presentingSceneBundleIdentifier;
@property (nonatomic, copy) NSString *presentingSceneIdentifier;
@property (nonatomic, retain) AMSPurchaseInfo *purchaseInfo;
@property (nonatomic, readonly) AMSPaymentSheetRequest *request;
@property (nonatomic, retain) _PaymentSheetState *state;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *userActions;

+ (bool)_shouldCompanionAuthFallbackToPasswordForError:(id)arg1;

- (void).cxx_destruct;
- (float)_challengeSigningDelay;
- (void)_dismissPaymentAuthorizationController:(id)arg1;
- (id)_metricsEvent;
- (id)_paymentRequest;
- (bool)_presentCompanionAuthenticationSheetWithPaymentRequest:(id)arg1 purchaseResult:(id)arg2 error:(id*)arg3;
- (bool)_presentPaymentSheetWithPaymentRequest:(id)arg1 error:(id*)arg2;
- (id)assetCache;
- (id)authenticationContext;
- (id)bag;
- (bool)cancel;
- (id)initWithRequest:(id)arg1 bag:(id)arg2;
- (id)metricsDictionary;
- (id)paymentAuthorizationController;
- (void)paymentAuthorizationController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationController:(id)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;
- (void)paymentAuthorizationController:(id)arg1 willFinishWithError:(id)arg2;
- (void)paymentAuthorizationControllerDidFinish:(id)arg1;
- (id)paymentSheetPromise;
- (id)paymentSheetResponse;
- (id)perform;
- (id)presentationQueue;
- (id)presentationSceneBundleIdentifierForPaymentAuthorizationController:(id)arg1;
- (id)presentationSceneIdentifierForPaymentAuthorizationController:(id)arg1;
- (id)presentingSceneBundleIdentifier;
- (id)presentingSceneIdentifier;
- (id)purchaseInfo;
- (id)request;
- (void)setAssetCache:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)setBag:(id)arg1;
- (void)setMetricsDictionary:(id)arg1;
- (void)setPaymentAuthorizationController:(id)arg1;
- (void)setPaymentSheetPromise:(id)arg1;
- (void)setPresentationQueue:(id)arg1;
- (void)setPresentingSceneBundleIdentifier:(id)arg1;
- (void)setPresentingSceneIdentifier:(id)arg1;
- (void)setPurchaseInfo:(id)arg1;
- (void)setState:(id)arg1;
- (void)setUserActions:(id)arg1;
- (id)state;
- (id)userActions;

@end
