
@protocol BCSCodePayload <NSObject, NSSecureCoding>

@required

- (long long)codeType;
- (void)savePayloadInUserActivity:(NSUserActivity *)arg1;

@end
