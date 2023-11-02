
@protocol EXEnumeratorConfig <NSObject>

@required

- (NSDictionary *)compatibilityExtensionPointAllowList;
- (NSURL *)extensionPointsConfigURL;
- (NSDictionary *)legacyExtensionPointAllowList;
- (NSURL *)rootURL;
- (NSURL *)xpcExtensionPointsCache;
- (NSURL *)xpcExtensionsCache;

@end
