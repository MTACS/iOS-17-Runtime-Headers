
@interface GKRemoteUINavigationController : UINavigationController {
    GKRemoteUIController * _remoteUIController;
}

@property (nonatomic, readonly) GKRemoteUIController *remoteUIController;

- (void).cxx_destruct;
- (id)initWithRemoteUIController:(id)arg1;
- (void)loadView;
- (id)remoteUIController;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;

@end
