
@interface AMSUIPaymentVerificationTokenFetchTask : AMSTask <AMSBagConsumer, AMSUIWebDelegate> {
    ACAccount * _account;
    NSDictionary * _accountParameters;
    <AMSBagProtocol> * _bag;
    AMSProcessInfo * _clientInfo;
    NSString * _displayName;
    AMSUIPaymentVerificationMetrics * _metrics;
    unsigned long long  _mode;
    AMSPromise * _resultPromise;
    NSDictionary * _userInfo;
    UIViewController * _viewController;
    WrappedAMSUIWebViewController * _webVC;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) NSDictionary *accountParameters;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AMSUIPaymentVerificationMetrics *metrics;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, retain) AMSPromise *resultPromise;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *userInfo;
@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, retain) WrappedAMSUIWebViewController *webVC;

+ (id)_contextCombining:(id)arg1 with:(id)arg2;
+ (id)_promiseToTryNextFlowWithResult:(id)arg1 error:(id)arg2 continuationBlock:(id /* block */)arg3;
+ (id)_tokenFromDictionary:(id)arg1;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (id)performRemoteDisabledFeatureWithBag:(id)arg1 featureKey:(id)arg2 featureBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_finishPromiseWithResult:(id)arg1 error:(id)arg2;
- (id)account;
- (id)accountParameters;
- (id)bag;
- (id)clientInfo;
- (id)displayName;
- (id)initWithMode:(unsigned long long)arg1 account:(id)arg2 viewController:(id)arg3 bag:(id)arg4 displayName:(id)arg5;
- (id)initWithMode:(unsigned long long)arg1 accountParameters:(id)arg2 viewController:(id)arg3 bag:(id)arg4 displayName:(id)arg5;
- (id)metrics;
- (unsigned long long)mode;
- (id)performApplePayTaskWithFeatureFlag:(bool)arg1;
- (id)performCardOnFileTaskWithFeatureFlag:(bool)arg1;
- (id)performIDCardTaskWithFeatureFlag:(bool)arg1;
- (id)performTask;
- (id)performWebFlowTask;
- (id)resultPromise;
- (void)setClientInfo:(id)arg1;
- (void)setHeader:(id)arg1 withValueIn:(id)arg2 forKey:(id)arg3 onRequest:(id)arg4;
- (void)setMetrics:(id)arg1;
- (void)setResultPromise:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setWebVC:(id)arg1;
- (id)userInfo;
- (id)viewController;
- (id)webVC;
- (void)webViewController:(id)arg1 didEncodeNetworkRequest:(id)arg2;
- (void)webViewController:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id /* block */)arg3;
- (bool)webViewController:(id)arg1 handleDelegateAction:(id)arg2 completion:(id /* block */)arg3;

@end
