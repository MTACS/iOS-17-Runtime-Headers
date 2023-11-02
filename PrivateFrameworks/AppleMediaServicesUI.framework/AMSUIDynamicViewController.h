
@interface AMSUIDynamicViewController : AMSUICommonViewController <AMSBagConsumer, AMSUIDynamicViewControllerDelegate> {
    AMSUIDynamicViewControllerDelegateProxy * _delegateProxy;
    AMSUIDynamicViewController * _dynamicViewController;
    <AMSUIMediaContentDelegate> * _mediaContentDelegate;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic) bool anonymousMetrics;
@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (nonatomic, retain) NSDictionary *clientOptions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMSUIDynamicViewControllerDelegate> *delegate;
@property (nonatomic, readonly) AMSUIDynamicViewControllerDelegateProxy *delegateProxy;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AMSUIDynamicViewController *dynamicViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *internalClientOptions;
@property (nonatomic, retain) NSString *mediaClientIdentifier;
@property (nonatomic) <AMSUIMediaContentDelegate> *mediaContentDelegate;
@property (nonatomic, retain) NSDictionary *metricsOverlay;
@property (readonly) Class superclass;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (void)_setup;
- (void)_setupContentSize;
- (id)account;
- (bool)anonymousMetrics;
- (id)bag;
- (id)clientInfo;
- (id)clientOptions;
- (id)delegate;
- (id)delegateProxy;
- (id)dynamicViewController;
- (id)initWithBag:(id)arg1 URL:(id)arg2;
- (id)initWithBag:(id)arg1 bagValue:(id)arg2;
- (id)initWithBag:(id)arg1 javaScriptBagValue:(id)arg2;
- (id)initWithBag:(id)arg1 javaScriptURL:(id)arg2;
- (id)internalClientOptions;
- (bool)isBeingDismissed;
- (bool)isMovingFromParentViewController;
- (id)mediaClientIdentifier;
- (id)mediaContentDelegate;
- (id)metricsOverlay;
- (id)navigationItem;
- (id)preload;
- (void)reloadContentViewImpressionItems;
- (void)setAccount:(id)arg1;
- (void)setAnonymousMetrics:(bool)arg1;
- (void)setBag:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setClientOptions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInternalClientOptions:(id)arg1;
- (void)setMediaClientIdentifier:(id)arg1;
- (void)setMediaContentDelegate:(id)arg1;
- (void)setMetricsOverlay:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
