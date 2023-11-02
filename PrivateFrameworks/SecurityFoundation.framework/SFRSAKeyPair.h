
@interface SFRSAKeyPair : _SFKeyPair {
    id  _rsaKeyPairInternal;
}

- (void).cxx_destruct;
- (id)initRandomKeyPairWithSpecifier:(id)arg1;
- (id)initRandomKeyPairWithSpecifier:(id)arg1 privateKeyDomain:(id)arg2;

@end
