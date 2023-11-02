
@interface AMSUIParentalVerificationIDCardTask : AMSTask {
    ACAccount * _account;
    NSDictionary * _accountParameters;
    <AMSBagProtocol> * _bag;
    NSString * _displayName;
    AMSUIPaymentVerificationMetrics * _metrics;
    ACAccount * _originalAccount;
    UIViewController * _viewController;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSDictionary *accountParameters;
@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) AMSUIPaymentVerificationMetrics *metrics;
@property (nonatomic, retain) ACAccount *originalAccount;
@property (nonatomic, retain) UIViewController *viewController;

+ (id)_descriptorForMinimumAge:(long long)arg1;
+ (id)_identityController;
+ (id)_identityRequestWithDescriptor:(id)arg1 nonce:(id)arg2;
+ (long long)_minAgeFromObject:(id)arg1;
+ (id)_nonceFromString:(id)arg1;
+ (id)_requestDictFromMinimumAge:(long long)arg1 walletData:(id)arg2 nonce:(id)arg3;

- (void).cxx_destruct;
- (id)_dataFromIDCardForMinimumAge:(long long)arg1 nonce:(id)arg2;
- (id)_promiseToFetchIDCardTokenURL:(id)arg1 requestBody:(id)arg2;
- (id)_promiseToLoadPVTURLWithBody:(id)arg1;
- (id)_promiseToRequestIDCardData;
- (id)account;
- (id)accountParameters;
- (id)bag;
- (id)displayName;
- (id)initWithAccount:(id)arg1 accountParameters:(id)arg2 bag:(id)arg3 displayName:(id)arg4 metrics:(id)arg5 viewController:(id)arg6;
- (id)metrics;
- (id)originalAccount;
- (id)performTask;
- (void)setAccount:(id)arg1;
- (void)setAccountParameters:(id)arg1;
- (void)setBag:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setOriginalAccount:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end
