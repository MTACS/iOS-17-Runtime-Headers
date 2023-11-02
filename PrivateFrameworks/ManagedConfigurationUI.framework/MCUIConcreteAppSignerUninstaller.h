
@interface MCUIConcreteAppSignerUninstaller : NSObject <MCUIAppSignerUninstaller>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)setTrustedCodeSigningIdentities:(id)arg1;
- (id)trustedCodeSigningIdentities;
- (void)uninstallApplicationWithBundleID:(id)arg1;
- (void)uninstallProvisioningProfileWithUUID:(id)arg1;

@end
