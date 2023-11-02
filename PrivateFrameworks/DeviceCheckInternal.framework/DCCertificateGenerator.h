
@interface DCCertificateGenerator : NSObject {
    DCContext * _context;
    NSData * _publicKey;
}

- (void).cxx_destruct;
- (id)_encryptData:(id)arg1 serverSyncedDate:(id)arg2 error:(id*)arg3;
- (void)_generateCertificateChainWithCompletion:(id /* block */)arg1;
- (bool)_isNSDate:(id)arg1;
- (void)dealloc;
- (void)generateEncryptedCertificateChainWithCompletion:(id /* block */)arg1;
- (id)initWithContext:(id)arg1 publicKey:(id)arg2;
- (int)keybagHandle;

@end
