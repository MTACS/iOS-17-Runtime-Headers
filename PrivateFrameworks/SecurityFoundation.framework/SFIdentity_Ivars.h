
@interface SFIdentity_Ivars : NSObject {
    SFIdentityAttributes * attributes;
    _SFCertificate * certificate;
    _SFKeyPair * keyPair;
    _SFPublicKey * publicKey;
}

- (void).cxx_destruct;

@end
