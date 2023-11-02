
@interface SFAirDropViewController : UIViewController <SFAirDropViewServiceHostProtocol, _UIRemoteViewControllerContaining> {
    _SFAirDropRemoteViewController * _childViewController;
    <SFAirDropViewControllerDelegate> * _delegate;
    NSExtension * _extension;
    id  _extensionRequest;
    UIViewController * _retainedActivityViewController;
}

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFAirDropViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController *retainedActivityViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_containedRemoteViewController;
- (void)_presentationControllerDidDismiss:(id)arg1;
- (void)_setChildViewController:(id)arg1;
- (void)_setExtensionRequest:(id)arg1;
- (void)airDropViewServiceDidFinishTransferWithSuccess:(bool)arg1;
- (void)airDropViewServiceDidRequestDismissal;
- (void)airDropViewServiceDidStartTransfer;
- (void)airDropViewServiceRequestingSendingAppBundleIdentifierWithCompletionHandler:(id /* block */)arg1;
- (void)airDropViewServiceRequestingSharedItemsWithDataRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)airDropViewServiceWillStartTransferToRecipient:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)extension;
- (id)initWithNoContentView:(bool)arg1;
- (id)retainedActivityViewController;
- (void)setDelegate:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setRetainedActivityViewController:(id)arg1;
- (void)viewDidLoad;

@end
