
@protocol VSJSRequest <JSExport>

@required

- (NSString *)appleVerificationToken;
- (NSArray *)attributeNames;
- (NSString *)currentAuthentication;
- (NSString *)requestBody;
- (NSString *)requestType;
- (NSString *)requestorVerificationToken;

@end
