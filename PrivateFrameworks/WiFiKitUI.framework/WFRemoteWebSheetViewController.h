
@interface WFRemoteWebSheetViewController : _UIRemoteViewController {
    <WFRemoteWebSheetViewControllerDelegate> * _delegate;
}

@property (nonatomic) <WFRemoteWebSheetViewControllerDelegate> *delegate;

+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)_setupButtonListener;
- (void)_wheelChangedWithEvent:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)webSheetViewControllerContentDidFinishLoading;
- (void)webSheetViewControllerContentDidStartLoading;
- (void)webSheetViewControllerContentReadyForPresentation;

@end
