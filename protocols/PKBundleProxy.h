
@protocol PKBundleProxy <NSObject>

@required

- (NSString *)bundleIdentifier;
- (NSURL *)bundleURL;
- (NSString *)bundleVersion;
- (NSURL *)dataContainerURL;
- (NSDictionary *)entitlements;
- (NSString *)localizedName;

@end
