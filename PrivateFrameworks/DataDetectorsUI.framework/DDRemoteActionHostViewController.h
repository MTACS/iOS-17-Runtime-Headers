
@interface DDRemoteActionHostViewController : _UIRemoteViewController {
    <DDRemoteActionHostViewControllerDelegate> * _delegate;
}

@property <DDRemoteActionHostViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
