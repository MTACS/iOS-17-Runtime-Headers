
@interface HMUserListRemoteViewController : _UIRemoteViewController <HMUserManagementRemoteHost> {
    <HMUserManagementRemoteHost> * _delegate;
}

@property (nonatomic) <HMUserManagementRemoteHost> *delegate;

+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)userManagementDidFinishWithError:(id)arg1;
- (void)userManagementDidLoad;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
