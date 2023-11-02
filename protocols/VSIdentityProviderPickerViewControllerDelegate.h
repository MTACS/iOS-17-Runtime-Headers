
@protocol VSIdentityProviderPickerViewControllerDelegate <NSObject>

@optional

- (void)identityProviderPickerViewController:(UIViewController<VSIdentityProviderPickerViewController> *)arg1 didPickIdentityProvider:(VSIdentityProvider *)arg2;
- (void)identityProviderPickerViewControllerDidCancel:(UIViewController<VSIdentityProviderPickerViewController> *)arg1;
- (void)identityProviderPickerViewControllerDidPickAdditionalIdentityProviders:(UIViewController<VSIdentityProviderPickerViewController> *)arg1;

@end
