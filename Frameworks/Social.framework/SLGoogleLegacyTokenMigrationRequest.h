
@interface SLGoogleLegacyTokenMigrationRequest : NSObject

+ (id)urlRequestForAuthCodeFromAuthToken:(id)arg1 clientID:(id)arg2 scope:(id)arg3;
+ (id)urlRequestForAuthTokenFromLegacyClientToken:(id)arg1 username:(id)arg2 password:(id)arg3;

@end
