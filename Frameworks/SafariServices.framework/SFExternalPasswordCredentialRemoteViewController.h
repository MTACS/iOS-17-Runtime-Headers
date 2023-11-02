
@interface SFExternalPasswordCredentialRemoteViewController : SFPasswordRemoteViewController <SFExternalPasswordCredentialRemoteViewControllerProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFExternalPasswordCredentialRemoteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)passwordServiceViewControllerName;
+ (id)serviceViewControllerInterface;

- (bool)_canShowWhileLocked;
- (void)presentExternalPasswordCredentialRemoteViewController;

@end
