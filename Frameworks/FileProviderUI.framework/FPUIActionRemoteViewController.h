
@interface FPUIActionRemoteViewController : _UIRemoteViewController {
    <FPUIActionRemoteViewControllerDelegate> * _delegate;
}

@property (nonatomic) <FPUIActionRemoteViewControllerDelegate> *delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
