
@interface POKeyResponseJWTBody : _POJWTBodyBase

@property (readonly) NSString *certificate;
@property (readonly) NSDate *exp;
@property (readonly) NSDate *iat;
@property (readonly) NSString *key_context;

- (id)certificate;
- (id)exp;
- (id)iat;
- (id)key_context;
- (id)mutableCopy;

@end
