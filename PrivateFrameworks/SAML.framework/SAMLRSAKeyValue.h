
@interface SAMLRSAKeyValue : SAMLBaseElement

@property (nonatomic, readonly) NSData *exponent;
@property (nonatomic, readonly) NSData *modulus;

+ (id)createElement:(id*)arg1;

- (id)exponent;
- (id)modulus;

@end
