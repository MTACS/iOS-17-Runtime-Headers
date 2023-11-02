
@interface AMSUICardOnFilePVTFetchTask : AMSTask {
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

+ (id)_accountToUseFromGivenAccount:(id)arg1 accountParameters:(id)arg2 activeiTunesAccount:(id)arg3;

- (void).cxx_destruct;
- (id)_promiseToFetchCardOnStackBooleanURL:(id)arg1;
- (id)_promiseToFetchCardOnStackTokenURL:(id)arg1;
- (id)_promiseToLoadBooleanURL;
- (id)_promiseToLoadPVTURL;
- (id)_promiseToPromptAfterCancel;
- (id)_promiseToPromptBeforeBiometricAuth;
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
