
@interface POIDTokenJWTBody : _POJWTBodyBase

@property (readonly) NSString *aud;
@property (readonly) NSArray *audArray;
@property (readonly) NSString *azp;
@property (readonly) NSDate *exp;
@property (readonly) NSArray *groups;
@property (readonly) NSDate *iat;
@property (readonly) NSString *iss;
@property (readonly) NSString *name;
@property (readonly) NSDate *nbf;
@property (readonly) NSString *nonce;
@property (readonly) NSString *preferred_username;
@property (readonly) NSString *sub;

- (id)aud;
- (id)audArray;
- (id)azp;
- (id)exp;
- (id)groups;
- (id)iat;
- (id)iss;
- (id)mutableCopy;
- (id)name;
- (id)nbf;
- (id)nonce;
- (id)preferred_username;
- (id)sub;

@end
