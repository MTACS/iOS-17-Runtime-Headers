
@protocol IKJSDevice <JSExport>

@required

- (NSString *)appIdentifier;
- (NSString *)appVersion;
- (bool)isNetworkReachable;
- (NSString *)model;
- (NSString *)productType;
- (NSString *)systemVersion;
- (NSString *)vendorIdentifier;

@end
