
@interface POLoginResponseJWTBody : _POJWTBodyBase

@property (readonly) NSString *aud;
@property (readonly) NSNumber *expires_in;
@property (readonly) NSDate *expires_on;
@property (readonly) NSDate *iat;
@property (readonly) NSString *id_token;
@property (readonly) NSString *iss;
@property (readonly) NSString *refresh_token;
@property (readonly) NSNumber *refresh_token_expires_in;
@property (readonly) NSString *token_type;

- (id)aud;
- (id)expires_in;
- (id)expires_on;
- (id)iat;
- (id)id_token;
- (id)iss;
- (id)mutableCopy;
- (id)refresh_token;
- (id)refresh_token_expires_in;
- (id)token_type;

@end
