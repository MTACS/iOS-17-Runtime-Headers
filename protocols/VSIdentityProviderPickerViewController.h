
@protocol VSIdentityProviderPickerViewController <NSObject>

@required

- (unsigned long long)additionalProvidersMode;
- (NSArray *)allStorefronts;
- (<VSIdentityProviderPickerViewControllerDelegate> *)delegate;
- (void)deselectSelectedProviderAnimated:(bool)arg1;
- (NSArray *)identityProviders;
- (bool)isCancellationAllowed;
- (NSString *)requestedStorefrontCountryCode;
- (NSString *)requestingAppDisplayName;
- (NSString *)resourceTitle;
- (void)setAdditionalProvidersMode:(unsigned long long)arg1;
- (void)setAllStorefronts:(NSArray *)arg1;
- (void)setCancellationAllowed:(bool)arg1;
- (void)setDelegate:(id <VSIdentityProviderPickerViewControllerDelegate>)arg1;
- (void)setIdentityProviders:(NSArray *)arg1;
- (void)setRequestedStorefrontCountryCode:(NSString *)arg1;
- (void)setRequestingAppDisplayName:(NSString *)arg1;
- (void)setResourceTitle:(NSString *)arg1;

@optional

- (UISearchController *)searchController;
- (void)setRequestedStorefrontCountryCode:(NSString *)arg1 defaultToDeveloperProviders:(bool)arg2;

@end
