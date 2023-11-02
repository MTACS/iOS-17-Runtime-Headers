
@interface SFECDHKeySource_Ivars : NSObject {
    _SFECKeyPair * localKeyPair;
    _SFECPublicKey * remotePublicKey;
}

- (void).cxx_destruct;

@end
