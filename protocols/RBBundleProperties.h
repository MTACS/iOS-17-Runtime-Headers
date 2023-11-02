
@protocol RBBundleProperties <RBSProcessBundleDataSource>

@required

- (NSString *)bundleIdentifier;
- (NSDictionary *)bundleInfoValuesForKeys:(NSArray *)arg1;
- (NSString *)bundlePath;
- (NSString *)containerOverrideIdentifier;
- (bool)continuousBackgroundMode;
- (NSURL *)dataContainerURL;
- (NSDictionary *)environmentVariables;
- (NSString *)executablePath;
- (NSString *)extensionPointIdentifier;
- (bool)hasPreferredJetsamBand;
- (bool)isExtension;
- (int)platform;
- (int)preferredJetsamBand;
- (bool)supportsBackgroundAudio;
- (bool)supportsBackgroundContentFetching;
- (bool)supportsBackgroundNetworkAuthentication;
- (bool)supportsUnboundedTaskCompletion;
- (bool)usesSocketMonitoring;

@end
