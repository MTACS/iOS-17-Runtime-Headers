
@protocol DMTProfileInstallationPrimitives <NSObject>

@required

- (NSString *)installProfileData:(NSData *)arg1 error:(id*)arg2;
- (bool)uninstallProfileWithIdentifier:(NSString *)arg1 error:(id*)arg2;

@end
