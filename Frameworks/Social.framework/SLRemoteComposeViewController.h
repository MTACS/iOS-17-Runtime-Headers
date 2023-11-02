
@interface SLRemoteComposeViewController : _UIRemoteViewController {
    <SLRemoteComposeViewControllerDelegateProtocol> * _delegate;
}

@property (nonatomic) <SLRemoteComposeViewControllerDelegateProtocol> *delegate;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
