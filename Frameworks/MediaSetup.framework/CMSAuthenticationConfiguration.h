
@interface CMSAuthenticationConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _authorizationURL;
    NSString * _clientID;
    NSString * _clientSecret;
    NSString * _scope;
}

@property (readonly) NSURL *authorizationURL;
@property (readonly) NSString *clientID;
@property (readonly) NSString *clientSecret;
@property (readonly) NSString *scope;

+ (id)authConfigurationFromMSAuthData:(id)arg1;
+ (id)authConfigurationWithClientID:(id)arg1 clientSecret:(id)arg2 authorizationURL:(id)arg3 scope:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authorizationURL;
- (id)basicPropertiesDictionary;
- (id)clientID;
- (id)clientSecret;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClientID:(id)arg1 clientSecret:(id)arg2 authorizationURL:(id)arg3 scope:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)jsonDictionary;
- (id)scope;

@end
