
@interface SAMLKeyInfo : SAMLBaseElement

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *keyName;
@property (nonatomic, readonly) SAMLSignatureKeyValue *keyValue;
@property (nonatomic, readonly) NSString *mgmtData;
@property (nonatomic, readonly) SAMLPGPData *pgpData;
@property (nonatomic, readonly) SAMLKeyRetrievalMethod *retrievalMethod;
@property (nonatomic, readonly) NSData *spkiSexpData;
@property (nonatomic, readonly) SAMLX509Data *x509Data;

+ (id)createElement:(id*)arg1;

- (id)identifier;
- (id)keyName;
- (id)keyValue;
- (id)mgmtData;
- (id)pgpData;
- (id)retrievalMethod;
- (id)spkiSexpData;
- (id)x509Data;

@end
