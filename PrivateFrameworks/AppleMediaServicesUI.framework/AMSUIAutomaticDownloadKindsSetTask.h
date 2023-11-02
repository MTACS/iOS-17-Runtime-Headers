
@interface AMSUIAutomaticDownloadKindsSetTask : AMSTask <AMSBagConsumer, AMSRequestPresentationDelegate> {
    ACAccount * _account;
    <AMSBagProtocol> * _bag;
    NSArray * _enabledMediaKinds;
    AMSAutomaticDownloadKindsSetTask * _task;
    UIViewController * _viewController;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *enabledMediaKinds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) AMSAutomaticDownloadKindsSetTask *task;
@property (nonatomic, retain) UIViewController *viewController;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)account;
- (id)bag;
- (id)enabledMediaKinds;
- (void)handleAuthenticateRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleDialogRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithEnabledMediaKinds:(id)arg1 account:(id)arg2 bag:(id)arg3 viewController:(id)arg4;
- (id)perform;
- (void)setTask:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)task;
- (id)viewController;

@end
