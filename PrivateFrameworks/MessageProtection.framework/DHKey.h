
@interface DHKey : FullKey

- (id)description;
- (id)keyAgreementWithPublicKey:(id)arg1 error:(id*)arg2;
- (id)publicKey;

@end
