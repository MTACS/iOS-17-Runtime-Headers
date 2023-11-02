
@protocol RBSProcessBundleDataSource <NSObject>

@required

- (NSString *)bundleIdentifier;
- (NSDictionary *)bundleInfoValuesForKeys:(NSArray *)arg1;
- (NSString *)bundlePath;
- (NSString *)executablePath;
- (NSString *)extensionPointIdentifier;

@end
