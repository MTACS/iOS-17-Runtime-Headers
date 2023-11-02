
@interface DMTManagedConfigurationBackedProfileInstallationPrimitives : NSObject <DMTProfileInstallationPrimitives>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)installProfileData:(id)arg1 error:(id*)arg2;
- (bool)uninstallProfileWithIdentifier:(id)arg1 error:(id*)arg2;

@end
