
@interface POKeyRequestJWTBody : _POJWTBodyBase

@property (readonly) NSString *aud;
@property (readonly) NSDate *exp;
@property (readonly) NSDate *iat;
@property (readonly) NSString *iss;
@property (readonly) NSString *key_purpose;
@property (readonly) NSString *nonce;
@property (readonly) NSString *refresh_token;
@property (readonly) NSString *request_nonce;
@property (readonly) NSString *request_type;
@property (readonly) NSString *sub;
@property (readonly) NSString *username;
@property (readonly) NSString *version;

- (id)aud;
- (id)exp;
- (id)iat;
- (id)iss;
- (id)key_purpose;
- (id)mutableCopy;
- (id)nonce;
- (id)refresh_token;
- (id)request_nonce;
- (id)request_type;
- (id)sub;
- (id)username;
- (id)version;

@end
