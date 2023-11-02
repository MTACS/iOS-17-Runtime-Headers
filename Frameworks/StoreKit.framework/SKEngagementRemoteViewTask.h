
@interface SKEngagementRemoteViewTask : NSObject <SKEngagementPresenterProtocol> {
    NSString * _clientBundleID;
    id /* block */  _completion;
    NSObject<OS_dispatch_group> * _dispatchGroup;
    NSError * _error;
    SKRemoteEngagementPresenterViewController * _remoteViewController;
    NSData * _requestData;
    NSDictionary * _result;
    NSData * _resultData;
    UIWindowScene * _scene;
    UIViewController * _viewController;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSString *clientBundleID;
@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *dispatchGroup;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SKRemoteEngagementPresenterViewController *remoteViewController;
@property (nonatomic, retain) NSData *requestData;
@property (nonatomic, retain) NSDictionary *result;
@property (nonatomic, retain) NSData *resultData;
@property (nonatomic, retain) UIWindowScene *scene;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController *viewController;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_presentViewController:(id)arg1;
- (void)_unblock;
- (id)clientBundleID;
- (id /* block */)completion;
- (id)dispatchGroup;
- (void)engagementTaskDidFinishWithResult:(id)arg1 resultData:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (id)error;
- (id)initWithRequestData:(id)arg1 presentingViewController:(id)arg2 windowScene:(id)arg3;
- (void)preferredContentSizeDidChange:(struct CGSize { double x1; double x2; })arg1;
- (void)presentEngagement;
- (id)remoteViewController;
- (id)requestData;
- (id)result;
- (id)resultData;
- (id)scene;
- (void)setClientBundleID:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDispatchGroup:(id)arg1;
- (void)setError:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setRequestData:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setResultData:(id)arg1;
- (void)setScene:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;
- (id)workQueue;

@end
