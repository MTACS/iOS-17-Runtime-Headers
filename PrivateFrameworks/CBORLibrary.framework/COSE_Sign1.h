
@interface COSE_Sign1 : COSE

@property (nonatomic, readonly) NSData *signature;
@property (nonatomic, readonly) NSArray *x509bag;
@property (nonatomic, readonly) NSArray *x509chain;
@property (nonatomic, readonly) NSString *x509hashAlgorithmIdentifier;
@property (nonatomic, readonly) NSData *x509hashValue;
@property (nonatomic, readonly) NSString *x509uri;

- (id)description;
- (id)initWithCBOR:(id)arg1;
- (id)initWithProtectedHeaders:(id)arg1 unprotectedHeaders:(id)arg2 payload:(id)arg3 signature:(id)arg4 includeCBORTag:(bool)arg5;
- (id)signature;
- (id)x509bag;
- (id)x509chain;
- (id)x509hashAlgorithmIdentifier;
- (id)x509hashValue;
- (id)x509uri;

@end
