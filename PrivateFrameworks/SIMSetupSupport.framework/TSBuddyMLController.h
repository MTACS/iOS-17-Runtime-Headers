
@interface TSBuddyMLController : NSObject <RemoteUIControllerDelegate> {
    UIBarButtonItem * _cancelButton;
    <TSSIMSetupFlowDelegate> * _delegate;
    bool  _initialRequest;
    RemoteUIController * _remoteUIController;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) NSURL *url;

- (void).cxx_destruct;
- (void)_configureRUIController;
- (void)_userDidTapCancel;
- (id)delegate;
- (id)initWithHostController:(id)arg1;
- (void)loadRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)remoteUIController:(id)arg1 didRemoveObjectModel:(id)arg2;
- (void)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)setDelegate:(id)arg1;
- (id)url;

@end
