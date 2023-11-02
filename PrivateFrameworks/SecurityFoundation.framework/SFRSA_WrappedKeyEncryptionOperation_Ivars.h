
@interface SFRSA_WrappedKeyEncryptionOperation_Ivars : NSObject {
    SFRSAEncryptionOperation * keyWrappingOperation;
    SFSymmetricEncryptionOperation * sessionEncryptionOperation;
}

- (void).cxx_destruct;

@end
