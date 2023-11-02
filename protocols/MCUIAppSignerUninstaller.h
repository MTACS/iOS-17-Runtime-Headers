
@protocol MCUIAppSignerUninstaller <NSObject>

@required

- (void)setTrustedCodeSigningIdentities:(NSArray *)arg1;
- (NSArray *)trustedCodeSigningIdentities;
- (void)uninstallApplicationWithBundleID:(NSString *)arg1;
- (void)uninstallProvisioningProfileWithUUID:(NSString *)arg1;

@end
