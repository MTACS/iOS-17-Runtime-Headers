
@interface SFIESOperation_Ivars : NSObject {
    long long  curve;
    _SFECDHOperation * diffieHellmanOperation;
    <SFDigestOperation> * digestOperation;
    _SFAuthenticatedEncryptionOperation * encryptionOperation;
}

- (void).cxx_destruct;

@end
