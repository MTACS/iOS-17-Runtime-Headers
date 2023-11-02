
@interface SAMLSignatureKeyValue : SAMLBaseElement

@property (nonatomic, readonly) SAMLDSAKeyValue *dsaKeyValue;
@property (nonatomic, readonly) SAMLRSAKeyValue *rsaKeyValue;

+ (id)createElement:(id*)arg1;

- (id)dsaKeyValue;
- (id)rsaKeyValue;

@end
