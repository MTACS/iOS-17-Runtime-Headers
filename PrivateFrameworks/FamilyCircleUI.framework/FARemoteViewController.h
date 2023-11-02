
@interface FARemoteViewController : _UIRemoteViewController <FARemoteViewControllerProtocol, _UIRemoteViewControllerContaining> {
    id /* block */  _completion;
    <FARemoteViewControllerDelegate> * _delegate;
    UIViewController * _hostViewController;
    id /* block */  _presentationCompletion;
    unsigned long long  _ruiPresentationStyle;
}

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FARemoteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)requestViewControllerWithCompletion:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)_containedRemoteViewController;
- (void)_notifyPresentationCompletion;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)delegate;
- (void)dismissAlertProxyWithCompletion:(id /* block */)arg1;
- (void)dismissWithCompletion:(id /* block */)arg1;
- (void)operationFinishedWithResponse:(id)arg1;
- (void)presentAlertProxyWithCompletion:(id /* block */)arg1;
- (void)presentWithRUIModalPresentationStyle:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)replaceModalRUIControllerWithStyle:(unsigned long long)arg1 byController:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)startFlowWithContext:(id)arg1 viewController:(id)arg2 completion:(id /* block */)arg3;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
