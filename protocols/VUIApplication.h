
@protocol VUIApplication <NSObject>

@required

- (NSString *)appIdentifier;
- (NSURL *)appJSURL;
- (bool)shouldIgnoreJSValidation;
- (<VUIAppUserDefaultsStoring> *)userDefaultsStorage;

@optional

- (NSDictionary *)appLaunchParams;
- (NSDictionary *)appTraitCollection;
- (bool)shouldAllowRemoteInspection;

@end
