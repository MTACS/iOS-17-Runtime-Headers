
@interface AMSUIAddFundsViewController : AMSUICommonViewController {
    AMSUIWebViewController * _webViewController;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (nonatomic, retain) NSDictionary *metricsOverlay;
@property (nonatomic, readonly) AMSUIWebViewController *webViewController;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)account;
- (id)bag;
- (id)clientInfo;
- (id)initWithAccount:(id)arg1 bag:(id)arg2;
- (id)initWithAccount:(id)arg1 bag:(id)arg2 clientInfo:(id)arg3;
- (void)loadView;
- (id)metricsOverlay;
- (void)setAccount:(id)arg1;
- (void)setBag:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setMetricsOverlay:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)webViewController;

@end
