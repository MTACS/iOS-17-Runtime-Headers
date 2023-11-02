
@protocol IKJSError <JSExport>

@required

- (NSNumber *)code;
- (NSString *)description;
- (NSString *)domain;
- (NSString *)failureReason;
- (NSString *)recoverySuggestion;
- (IKJSError *)underlyingError;
- (NSDictionary *)userInfo;

@end
