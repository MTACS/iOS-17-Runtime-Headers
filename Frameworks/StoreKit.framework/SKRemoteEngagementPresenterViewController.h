
@interface SKRemoteEngagementPresenterViewController : UIViewController <SKEngagementViewServiceProtocol> {
    <SKEngagementPresenterProtocol> * _delegate;
    NSObject<OS_dispatch_queue> * _engagementPresentationQueue;
    SKRemoteEngagementRemoteViewController * _remoteViewController;
    NSObject<OS_dispatch_semaphore> * _remoteViewControllerSemaphore;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKEngagementPresenterProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<OS_dispatch_queue> *engagementPresentationQueue;
@property (readonly) unsigned long long hash;
@property (retain) SKRemoteEngagementRemoteViewController *remoteViewController;
@property (readonly) NSObject<OS_dispatch_semaphore> *remoteViewControllerSemaphore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRemoteView;
- (void)_loadRemoteViewController;
- (id)delegate;
- (id)engagementPresentationQueue;
- (id)init;
- (void)presentEngagementRequestData:(id)arg1 clientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (id)remoteViewController;
- (id)remoteViewControllerSemaphore;
- (void)setDelegate:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)viewDidLoad;

@end
