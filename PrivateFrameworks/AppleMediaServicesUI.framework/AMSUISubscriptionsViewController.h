
@interface AMSUISubscriptionsViewController : UIViewController <AMSBagConsumer> {
    NSString * _subscriptionType;
    AMSUIWebViewController * _webViewController;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *metricsOverlay;
@property (nonatomic, retain) NSString *subscriptionType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AMSUIWebViewController *webViewController;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (void)_setChildViewController:(id)arg1;
- (void)_setup;
- (void)_setupChildViewController;
- (void)_setupLayout;
- (void)_startLoading;
- (id)account;
- (id)bag;
- (id)clientInfo;
- (id)initWithAccount:(id)arg1 bag:(id)arg2;
- (id)initWithAccount:(id)arg1 bag:(id)arg2 clientInfo:(id)arg3;
- (id)metricsOverlay;
- (void)setAccount:(id)arg1;
- (void)setBag:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setMetricsOverlay:(id)arg1;
- (void)setSubscriptionType:(id)arg1;
- (id)subscriptionType;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)webViewController;

@end
