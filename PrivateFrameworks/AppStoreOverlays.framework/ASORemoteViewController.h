
@interface ASORemoteViewController : _UIRemoteViewController {
    <ASORemoteViewControllerDelegate> * _delegate;
}

@property (nonatomic) <ASORemoteViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
