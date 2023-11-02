
@interface SFPasswordServiceViewController : UIViewController {
    NSString * _applicationIdentifier;
}

@property (nonatomic, readonly) NSString *applicationIdentifier;

+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)_willAppearInRemoteViewController;
- (id)applicationIdentifier;

@end
