
@interface AMSUIEngagementTask : AMSTask <AMSBagConsumer, AMSUIDynamicViewControllerDelegate, AMSUIEngagementViewControllerDelegate, AMSUIWebDelegate, PRXFlowDelegate> {
    bool  _allowMultiplePresentations;
    <AMSBagProtocol> * _bag;
    UIViewController * _cachedNavigationController;
    AMSProcessInfo * _clientInfo;
    <AMSUIEngagementTaskDelegate> * _delegate;
    NSError * _error;
    bool  _finished;
    bool  _isRootRemotePresentation;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
    bool  _presented;
    UIViewController * _presentingViewController;
    bool  _remotePresentation;
    AMSEngagementRequest * _request;
    AMSEngagementResult * _result;
    bool  _running;
    AMSUIEngagementViewController * _taskController;
}

@property (nonatomic) bool allowMultiplePresentations;
@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) UIViewController *cachedNavigationController;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMSUIEngagementTaskDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isRootRemotePresentation;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;
@property (nonatomic) bool presented;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic) bool remotePresentation;
@property (nonatomic, retain) AMSEngagementRequest *request;
@property (nonatomic, retain) AMSEngagementResult *result;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AMSUIEngagementViewController *taskController;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)_infoWithBuyParams:(id)arg1 additionalInfo:(id)arg2;
- (bool)_isInitialEngagementViewController;
- (bool)_isRemotePresentationEnabled;
- (bool)_isRemoteViewService;
- (bool)_isWindowPresentation;
- (long long)_modalPresentationStyle;
- (id)_presentEngagementLocally;
- (id)_presentEngagementRemotely;
- (id)_presentTaskController;
- (id)_presentViewController:(id)arg1 dismissBlock:(id /* block */)arg2;
- (bool)allowMultiplePresentations;
- (id)bag;
- (id)cachedNavigationController;
- (id)clientInfo;
- (id)delegate;
- (id)engagementViewController:(id)arg1 contentViewWithDictionary:(id)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)engagementViewController:(id)arg1 didResolveWithResult:(id)arg2 error:(id)arg3;
- (bool)engagementViewController:(id)arg1 handleDynamicDelegateAction:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)engagementViewControllerShouldDismiss:(id)arg1;
- (id)error;
- (id)initWithRequest:(id)arg1 bag:(id)arg2 presentingViewController:(id)arg3;
- (bool)isFinished;
- (bool)isRootRemotePresentation;
- (bool)isRunning;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)presentEngagement;
- (bool)presented;
- (id)presentingViewController;
- (bool)remotePresentation;
- (id)request;
- (id)result;
- (void)setAllowMultiplePresentations:(bool)arg1;
- (void)setBag:(id)arg1;
- (void)setCachedNavigationController:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setIsRootRemotePresentation:(bool)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPresented:(bool)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setRemotePresentation:(bool)arg1;
- (void)setRequest:(id)arg1;
- (void)setResult:(id)arg1;
- (id)taskController;

@end
