
@interface PKVirtualCardEncryptionFields : NSObject {
    NSArray * _certificates;
    NSString * _encryptionVersion;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithCertificates:(id)arg1;
- (void)prepareCertificateWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)prepareOneTimeCertificateWithQueue:(id)arg1 completion:(id /* block */)arg2;

@end
