
@protocol KeychainSyncPhoneSettingsFragmentDelegate <NSObject>

@required

- (void)phoneSettingsFragment:(KeychainSyncPhoneSettingsFragment *)arg1 didChangePhoneNumber:(NSString *)arg2 countryInfo:(KeychainSyncCountryInfo *)arg3;

@end
