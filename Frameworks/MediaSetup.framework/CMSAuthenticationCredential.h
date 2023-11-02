
@interface CMSAuthenticationCredential : NSObject <NSCopying, NSSecureCoding> {
    NSString * _authHeader;
    NSString * _authToken;
    NSDate * _authTokenExpiration;
    NSString * _refreshToken;
    NSString * _scope;
    NSString * _tokenType;
}

@property (readonly) NSString *authHeader;
@property (readonly) NSString *authToken;
@property (readonly) NSDate *authTokenExpiration;
@property (readonly) NSString *refreshToken;
@property (readonly) NSString *scope;
@property (readonly) NSString *tokenType;

+ (id)authCredentialFromMSAuthData:(id)arg1;
+ (id)authCredentialWithToken:(id)arg1 tokenType:(id)arg2 expirationDate:(id)arg3 scope:(id)arg4 refreshToken:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authHeader;
- (id)authToken;
- (id)authTokenExpiration;
- (id)basicPropertiesDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithToken:(id)arg1 tokenType:(id)arg2 expirationDate:(id)arg3 scope:(id)arg4 refreshToken:(id)arg5;
- (id)jsonDictionary;
- (id)refreshToken;
- (id)scope;
- (id)tokenType;

@end
