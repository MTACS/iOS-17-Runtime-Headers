
@protocol VUIJSDevice <JSExport>

@required

- (NSString *)appIdentifier;
- (NSString *)appVersion;
- (bool)isInAirplaneMode;
- (bool)isInRetailDemoMode;
- (bool)isNetworkReachable;
- (bool)isSeedBuild;
- (bool)isVisionOS;
- (NSString *)model;
- (NSString *)networkType;
- (NSString *)osBuildNumber;
- (NSString *)productType;
- (bool)runningAnInternalBuild;
- (bool)supportsSharedWatchPostPlayBinge;
- (NSString *)systemVersion;

@end
