
@interface AMSUIWebBuyAction : AMSUIWebAction <AMSUIPurchaseDelegate, AMSUIWebActionRunnable> {
    ACAccount * _account;
    NSString * _buyParams;
    NSString * _contentType;
    bool  _legacyBuy;
    bool  _makeCurrentAccount;
    NSDictionary * _metricsOverlay;
    bool  _requiresAccount;
    long long  _type;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSString *buyParams;
@property (nonatomic, retain) NSString *contentType;
@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool legacyBuy;
@property (nonatomic) bool makeCurrentAccount;
@property (nonatomic, retain) NSDictionary *metricsOverlay;
@property (nonatomic) bool requiresAccount;
@property (readonly) Class superclass;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)_iTunesAccount;
- (void)_makeCurrentAccountIfNeeded:(id)arg1;
- (id)_presentingSceneBundleIdentifier;
- (id)_presentingSceneBundleIdentifierPromise;
- (id)_presentingSceneIdentifier;
- (id)_presentingSceneIdentifierPromise;
- (id)_purchasePluginIdentifierForContentType:(id)arg1;
- (id)_runBuy;
- (id)_runBuyWithContentType:(id)arg1;
- (id)_runLegacyBuy;
- (id)account;
- (id)buyParams;
- (id)contentType;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (bool)legacyBuy;
- (bool)makeCurrentAccount;
- (id)metricsOverlay;
- (void)purchase:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)purchase:(id)arg1 handleDialogRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)purchase:(id)arg1 handleEngagementRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)purchase:(id)arg1 handleSceneBundleIdentifierRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)purchase:(id)arg1 handleSceneIdentifierRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)purchase:(id)arg1 handleWindowRequest:(id)arg2 completion:(id /* block */)arg3;
- (id)purchaseContentWithType:(id)arg1;
- (bool)requiresAccount;
- (id)runAction;
- (void)setAccount:(id)arg1;
- (void)setBuyParams:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setLegacyBuy:(bool)arg1;
- (void)setMakeCurrentAccount:(bool)arg1;
- (void)setMetricsOverlay:(id)arg1;
- (void)setRequiresAccount:(bool)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
