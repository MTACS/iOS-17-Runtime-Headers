
@protocol MXBundleUtilProtocol <NSObject>

@required

- (NSString *)bundleIDFromAuditToken:(struct { unsigned int x1[8]; })arg1;
- (NSString *)bundleIDFromPid:(int)arg1;
- (bool)isAppExtensionFromBundleID:(NSString *)arg1;
- (bool)isAppInstalledForBundleID:(NSString *)arg1;
- (NSString *)mainAppBundleIDforExtension:(NSString *)arg1;
- (NSString *)teamIDFromAuditToken:(struct { unsigned int x1[8]; })arg1;

@end
