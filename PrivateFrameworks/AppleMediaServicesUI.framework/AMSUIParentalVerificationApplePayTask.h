
@interface AMSUIParentalVerificationApplePayTask : AMSTask <AMSURLProtocolDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate, PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate> {
    ACAccount * _account;
    NSDictionary * _accountParameters;
    <AMSBagProtocol> * _bag;
    AMSMutablePromise * _delegatePromise;
    NSString * _displayName;
    AMSUIPaymentVerificationMetrics * _metrics;
    ACAccount * _originalAccount;
    NSData * _paymentData;
    NSError * _paymentError;
    AMSPromise * _resultPromise;
    AMSUIParentalVerificationApplePayTask * _strongSelf;
    UIViewController * _viewController;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSDictionary *accountParameters;
@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) AMSMutablePromise *delegatePromise;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AMSUIPaymentVerificationMetrics *metrics;
@property (nonatomic, retain) ACAccount *originalAccount;
@property (nonatomic, retain) NSData *paymentData;
@property (nonatomic, retain) NSError *paymentError;
@property (nonatomic, retain) AMSPromise *resultPromise;
@property (nonatomic, retain) AMSUIParentalVerificationApplePayTask *strongSelf;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController *viewController;

+ (id)paymentRequestFromPaymentSession:(id)arg1 currencyCode:(id)arg2 countryCode:(id)arg3 networks:(id)arg4;

- (void).cxx_destruct;
- (id)_presentPaymentRequest:(id)arg1;
- (id)_promiseToFetchPaymentCardTokenURL:(id)arg1 requestBody:(id)arg2;
- (id)_promiseToLoadPVTURLWithBody:(id)arg1;
- (id)_promiseToRequestWalletDataUsingSession:(id)arg1;
- (id)account;
- (id)accountParameters;
- (id)bag;
- (id)delegatePromise;
- (id)displayName;
- (id)initWithAccount:(id)arg1 accountParameters:(id)arg2 bag:(id)arg3 displayName:(id)arg4 metrics:(id)arg5 viewController:(id)arg6;
- (id)metrics;
- (id)originalAccount;
- (void)paymentAuthorizationController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationController:(id)arg1 willFinishWithError:(id)arg2;
- (void)paymentAuthorizationControllerDidFinish:(id)arg1;
- (id)paymentData;
- (id)paymentError;
- (id)performTask;
- (id)resultPromise;
- (void)setAccount:(id)arg1;
- (void)setAccountParameters:(id)arg1;
- (void)setBag:(id)arg1;
- (void)setDelegatePromise:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setOriginalAccount:(id)arg1;
- (void)setPaymentData:(id)arg1;
- (void)setPaymentError:(id)arg1;
- (void)setResultPromise:(id)arg1;
- (void)setStrongSelf:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)strongSelf;
- (id)viewController;

@end
