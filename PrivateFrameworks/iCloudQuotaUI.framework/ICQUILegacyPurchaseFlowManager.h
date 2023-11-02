
@interface ICQUILegacyPurchaseFlowManager : NSObject <AMSPurchaseResponseProtocol, AMSURLProtocolDelegate, NSURLSessionDelegate, RUIObjectModelDelegate> {
    ACAccount * _amsAccount;
    AMSURLSession * _defaultAMSURLSession;
    id /* block */  _flowCompletion;
    bool  _isDowngradePurchaseInProgress;
    UINavigationController * _navController;
    NSMutableArray * _objectModels;
    UIViewController * _presenter;
    NSString * _presentingSceneBundleIdentifier;
    unsigned long long  _requiredStorageThreshold;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *presentingSceneBundleIdentifier;
@property (nonatomic) unsigned long long requiredStorageThreshold;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(id /* block */)arg4;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(id /* block */)arg4;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleEngagementRequest:(id)arg3 completion:(id /* block */)arg4;
- (void)_beginRUIFlowWithAMSURLResult:(id)arg1;
- (void)_beginURLOperationWithURLRequest:(id)arg1;
- (void)_clearRetailFollowUpItem;
- (void)_didCompletePurchaseFlowWithStatusCode:(long long)arg1;
- (void)_dismissPurchaseFlow;
- (void)_fetchURLRequestWithURL:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleAuthenticateRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleDialogRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleEngagementRequest:(id)arg1 completion:(id /* block */)arg2;
- (bool)_loadNativeURL:(id)arg1;
- (void)_popObjectModelAnimated:(bool)arg1;
- (id)_presentationContext;
- (void)_updatePage:(id)arg1;
- (void)beginFlowWithCompletion:(id /* block */)arg1;
- (void)handleAuthenticateRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)handleDialogRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)handleEngagementRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithPresenter:(id)arg1;
- (void)makeBuyRequest:(id)arg1;
- (void)makeBuyRequestWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 completion:(id /* block */)arg4;
- (void)objectModelPressedBack:(id)arg1;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (id)presentingSceneBundleIdentifier;
- (unsigned long long)requiredStorageThreshold;
- (void)setPresentingSceneBundleIdentifier:(id)arg1;
- (void)setRequiredStorageThreshold:(unsigned long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;

@end
