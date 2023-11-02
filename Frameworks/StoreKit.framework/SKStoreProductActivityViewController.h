
@interface SKStoreProductActivityViewController : UIViewController {
    _UIAsyncInvocation * _cancelRequest;
    <SKStoreProductActivityViewControllerDelegate> * _delegate;
    NSString * _logKey;
    NSDictionary * _parameters;
    SKRemoteProductActivityViewController * _remoteViewController;
    SKInvocationQueueProxy<SKUIServiceProductActivityViewController> * _serviceProxy;
}

@property (nonatomic) <SKStoreProductActivityViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_addRemoteView;
- (void)_didFinishWithResult:(unsigned long long)arg1 error:(id)arg2;
- (void)_requestRemoteViewController;
- (void)_viewTapped:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithParameters:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
