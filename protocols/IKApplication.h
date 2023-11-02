
@protocol IKApplication <NSObject>

@required

- (NSString *)appIdentifier;
- (NSURL *)appJSURL;
- (<IKAppDataStoring> *)localStorage;
- (bool)shouldIgnoreJSValidation;
- (<IKAppUserDefaultsStoring> *)userDefaultsStorage;
- (NSString *)vendorIdentifier;
- (<IKAppDataStoring> *)vendorStorage;

@optional

- (IKAppDocument *)activeDocument;
- (bool)appIsPrivileged;
- (bool)appIsTrusted;
- (NSURL *)appJSCachePath;
- (NSDictionary *)appLaunchParams;
- (NSString *)appLaunchParamsResolvedBootURLKey;
- (NSURL *)appLocalJSURL;
- (NSDictionary *)appTraitCollection;
- (bool)appUsesDefaultStyleSheets;
- (NSString *)bagBootURLKey;
- (NSURL *)offlineJSURL;
- (bool)shouldAllowRemoteInspection;
- (IKViewElementRegistry *)viewElementRegistry;

@end
