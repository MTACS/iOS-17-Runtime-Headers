
@interface AMSUIAgeVerificationTask : AMSTask <AMSBagConsumer, AMSRequestPresentationDelegate> {
    ACAccount * _account;
    <AMSBagProtocol> * _bag;
    NSDictionary * _options;
    AMSAgeVerificationTask * _task;
    UIViewController * _viewController;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *options;
@property (nonatomic, retain) NSString *pincode;
@property (readonly) Class superclass;
@property (nonatomic, retain) AMSAgeVerificationTask *task;
@property (nonatomic, retain) UIViewController *viewController;

+ (id)_dateFormatter;
+ (id)_dialogForResult:(id)arg1 withBag:(id)arg2 expiration:(id)arg3 dateFormatter:(id)arg4;
+ (id)_errorCheckWithAccount:(id)arg1 bag:(id)arg2;
+ (id)_promiseResultForOpeningURL:(id)arg1;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)_performTaskWithVerificationResult:(id)arg1;
- (id)account;
- (id)bag;
- (void)handleAuthenticateRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleDialogRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithAccount:(id)arg1 bag:(id)arg2 options:(id)arg3 viewController:(id)arg4;
- (id)isVerificationNeeded;
- (id)options;
- (id)performTask;
- (id)pincode;
- (void)setOptions:(id)arg1;
- (void)setPincode:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)task;
- (id)viewController;

@end
