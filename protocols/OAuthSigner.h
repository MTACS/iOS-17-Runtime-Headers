
@protocol OAuthSigner

@required

+ (NSString *)signatureForText:(NSString *)arg1 withKey:(NSString *)arg2;

@end
