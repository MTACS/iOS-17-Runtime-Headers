
@interface AMSUIEngagementTaskViewController : AMSUICommonViewController <AMSBagConsumer, AMSUIDynamicViewControllerDelegate, AMSUIWebDelegate, UIAdaptivePresentationControllerDelegate, UIViewControllerTransitioningDelegate> {
    <AMSBagProtocol> * _bag;
    UIViewController * _childController;
    AMSPromise * _childPromise;
    AMSProcessInfo * _clientInfo;
    id /* block */  _dismissBlock;
    NSError * _error;
    bool  _ignoresDismissDetection;
    bool  _presented;
    AMSEngagementRequest * _request;
    AMSEngagementResult * _result;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) UIViewController *childController;
@property (nonatomic, retain) AMSPromise *childPromise;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissBlock;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoresDismissDetection;
@property (nonatomic) bool presented;
@property (nonatomic, retain) AMSEngagementRequest *request;
@property (nonatomic, retain) AMSEngagementResult *result;
@property (readonly) Class superclass;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (void)_finishWithResultInfo:(id)arg1 error:(id)arg2;
- (id)_isOriginatingURLTrusted;
- (bool)_isURLTrusted:(id)arg1 inDomains:(id)arg2;
- (long long)_modalPresentationStyle;
- (id)_preloadChild;
- (void)_receivedCarrierLinkResult:(id)arg1;
- (void)_receivedPurchaseResult:(id)arg1;
- (void)_setup;
- (void)_setupContentSize;
- (void)_updateChildViewController:(id)arg1;
- (id)_viewControllerForType:(id)arg1;
- (id)bag;
- (id)canPresent;
- (id)childController;
- (id)childPromise;
- (id)clientInfo;
- (void)dealloc;
- (id /* block */)dismissBlock;
- (void)dynamicViewController:(id)arg1 didFinishCarrierLinkingWithResult:(id)arg2 error:(id)arg3;
- (void)dynamicViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;
- (void)dynamicViewController:(id)arg1 didFinishWithPurchaseResult:(id)arg2 error:(id)arg3;
- (void)dynamicViewController:(id)arg1 didResolveWithResult:(id)arg2 error:(id)arg3;
- (bool)dynamicViewControllerShouldDismiss:(id)arg1;
- (id)error;
- (bool)ignoresDismissDetection;
- (id)initWithRequest:(id)arg1 bag:(id)arg2;
- (void)loadView;
- (void)presentationControllerDidDismiss:(id)arg1;
- (bool)presented;
- (id)request;
- (id)result;
- (void)setBag:(id)arg1;
- (void)setChildController:(id)arg1;
- (void)setChildPromise:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setDismissBlock:(id /* block */)arg1;
- (void)setError:(id)arg1;
- (void)setIgnoresDismissDetection:(bool)arg1;
- (void)setPresented:(bool)arg1;
- (void)setRequest:(id)arg1;
- (void)setResult:(id)arg1;
- (id)startEngagement;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)webViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;
- (void)webViewController:(id)arg1 didResolveWithResult:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;

@end
