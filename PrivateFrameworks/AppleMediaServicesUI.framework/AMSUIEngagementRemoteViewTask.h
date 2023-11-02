
@interface AMSUIEngagementRemoteViewTask : AMSTask <AMSUIEngagementTaskHostInterface> {
    <AMSBagProtocol> * _bag;
    AMSProcessInfo * _clientInfo;
    NSObject<OS_dispatch_group> * _dispatchGroup;
    NSError * _error;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
    UIViewController * _presentedViewController;
    NSXPCListener * _remoteListener;
    AMSEngagementRequest * _request;
    AMSEngagementResult * _result;
    UIViewController * _viewController;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *dispatchGroup;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;
@property (nonatomic, retain) UIViewController *presentedViewController;
@property (nonatomic, retain) NSXPCListener *remoteListener;
@property (nonatomic, retain) AMSEngagementRequest *request;
@property (nonatomic, retain) AMSEngagementResult *result;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_presentViewController:(id)arg1;
- (id)_snapshotBagDataPromise;
- (void)_unblock;
- (id)bag;
- (id)clientInfo;
- (id)dispatchGroup;
- (void)engagementTaskDidFinishWithResult:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (id)error;
- (id)initWithRequest:(id)arg1 presentingViewController:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)preferredContentSizeDidChange:(struct CGSize { double x1; double x2; })arg1;
- (id)presentEngagement;
- (id)presentedViewController;
- (id)remoteListener;
- (id)request;
- (id)result;
- (void)setBag:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setDispatchGroup:(id)arg1;
- (void)setError:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPresentedViewController:(id)arg1;
- (void)setRemoteListener:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end
