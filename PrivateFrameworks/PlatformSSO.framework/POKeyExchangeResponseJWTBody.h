
@interface POKeyExchangeResponseJWTBody : _POJWTBodyBase

@property (readonly) NSDate *exp;
@property (readonly) NSDate *iat;
@property (readonly) NSString *key;
@property (readonly) NSString *key_context;

- (id)exp;
- (id)iat;
- (id)key;
- (id)key_context;
- (id)mutableCopy;

@end
