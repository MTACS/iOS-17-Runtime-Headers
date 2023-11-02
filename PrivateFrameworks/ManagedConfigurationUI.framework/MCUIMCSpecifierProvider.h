
@interface MCUIMCSpecifierProvider : MCUISpecifierProvider

- (void)_loadAppSignerFromSpecifier:(id)arg1;
- (void)_presentModalNavController:(id)arg1;
- (void)_presentViewController:(id)arg1;
- (void)_selectInstalledPhoneProfileIdentifier:(id)arg1;
- (void)_selectUninstalledPhoneProfileIdentifier:(id)arg1;
- (bool)_showProfileDetailPageForUserEnrollmentProfile:(id)arg1;
- (id)_specifierForAppSigner:(id)arg1;
- (id)_specifierForBlockedApp:(id)arg1;
- (void)loadProfileFromSpecifier:(id)arg1;
- (id)specifiers;

@end
