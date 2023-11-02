
@interface ENUIHostViewController : _UIRemoteViewController <ENUIHostViewControllerProtocol> {
    <ENUIHostViewControllerDelegate> * _delegate;
}

@property (nonatomic, readonly) <ENUIRemoteViewControllerProtocol> *_remoteViewControllerProxy;
@property (nonatomic) <ENUIHostViewControllerDelegate> *delegate;

+ (id)exportedInterface;
+ (id)requestRemoteViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)_remoteViewControllerProxy;
- (id)delegate;
- (void)didFinishWithError:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPresentationRequest:(id)arg1;
- (void)show;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
