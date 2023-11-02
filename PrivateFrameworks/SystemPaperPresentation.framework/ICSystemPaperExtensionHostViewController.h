
@interface ICSystemPaperExtensionHostViewController : _EXHostViewController <ICSystemPaperExtensionHost, _EXHostViewControllerDelegate, _UIRemoteViewControllerContaining> {
    NSXPCConnection * _connection;
    bool  _didFinish;
    <ICSystemPaperPresentationDelegate> * _presentationDelegate;
    id /* block */  _startHostingBlock;
    NSData * _userActivityData;
}

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didFinish;
@property (readonly) unsigned long long hash;
@property (nonatomic) <ICSystemPaperPresentationDelegate> *presentationDelegate;
@property (nonatomic, copy) id /* block */ startHostingBlock;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSData *userActivityData;

- (void).cxx_destruct;
- (id)_containedRemoteViewController;
- (void)_finishAndNotifyDelegateWithError:(id)arg1;
- (void)_invokeAndReleaseStartHostingBlock;
- (void)addChildViewController:(id)arg1;
- (id)connection;
- (bool)didFinish;
- (oneway void)dismissViewControllerCancelled:(bool)arg1;
- (void)hostViewControllerDidActivate:(id)arg1;
- (void)hostViewControllerWillDeactivate:(id)arg1 error:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (oneway void)openURL:(id)arg1 completion:(id /* block */)arg2;
- (id)presentationDelegate;
- (void)setConnection:(id)arg1;
- (void)setDidFinish:(bool)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setStartHostingBlock:(id /* block */)arg1;
- (void)setUserActivityData:(id)arg1;
- (id /* block */)startHostingBlock;
- (void)teardown;
- (id)userActivityData;
- (void)viewDidDisappear:(bool)arg1;

@end
