
@interface RMAccountsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController

- (void)_reloadSpecifiersAndDeleteAccountButton;
- (Class)accountInfoControllerClass;
- (id)messageForAccountDeletionWarning;
- (id)specifiers;
- (id)titleForDeleteButton;
- (void)viewDidLoad;

@end
