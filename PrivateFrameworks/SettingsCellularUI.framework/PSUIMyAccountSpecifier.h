
@interface PSUIMyAccountSpecifier : PSSpecifier {
    CTXPCServiceSubscriptionContext * _context;
    PSListController * _hostController;
    Logger * _logger;
    PSUICarrierSpaceMyAccountWebViewController * _myAccountWebViewController;
    UINavigationController * _navCon;
}

@property (nonatomic, retain) CTXPCServiceSubscriptionContext *context;
@property (nonatomic) PSListController *hostController;
@property (nonatomic, retain) Logger *logger;
@property (nonatomic, retain) PSUICarrierSpaceMyAccountWebViewController *myAccountWebViewController;
@property (nonatomic, retain) UINavigationController *navCon;

- (void).cxx_destruct;
- (id)context;
- (id)getLogger;
- (id)hostController;
- (id)initWithContext:(id)arg1 cbCache:(id)arg2;
- (void)launchMyAccountInSafari:(id)arg1;
- (void)launchMyAccountInWebView:(id)arg1;
- (id)logger;
- (id)myAccountWebViewController;
- (id)navCon;
- (void)setContext:(id)arg1;
- (void)setHostController:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)setMyAccountWebViewController:(id)arg1;
- (void)setNavCon:(id)arg1;

@end
