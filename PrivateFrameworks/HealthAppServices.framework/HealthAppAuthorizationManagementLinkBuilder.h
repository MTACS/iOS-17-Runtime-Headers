
@interface HealthAppAuthorizationManagementLinkBuilder : HealthAppLinkBuilder

+ (bool)canOpenAuthorizationManagementWithValidIdentifier:(id)arg1;
+ (bool)canOpenLinkWithSourceIdentifier:(id)arg1 destinationIdentifier:(id)arg2;

- (id)URLForAuthorizationManagementFromLocation:(long long)arg1;
- (id)URLForAuthorizationManagementFromLocation:(long long)arg1 bundleIdentifier:(id)arg2;
- (id)_URLForAuthorizationManagementFromLocation:(long long)arg1 bundleIdentifier:(id)arg2;
- (id)_URLForAuthorizationManagementLocationHealthProfileWithBundleIdentifier:(id)arg1;
- (id)_URLForAuthorizationManagementLocationHealthSharingWithBundleIdentifier:(id)arg1;
- (id)_URLForAuthorizationManagementLocationSettingsWithBundleIdentifier:(id)arg1;
- (id)appendBundleIdentifierIfNecessary:(id)arg1;
- (id)appendBundleIdentifierIfNecessary:(id)arg1 toPath:(id)arg2;

@end
