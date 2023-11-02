
@interface SigningPublicKey : PublicKey

- (id)description;
- (bool)verifySignature:(id)arg1 formatter:(id)arg2;
- (bool)verifySignature:(id)arg1 ofData:(id)arg2;

@end
