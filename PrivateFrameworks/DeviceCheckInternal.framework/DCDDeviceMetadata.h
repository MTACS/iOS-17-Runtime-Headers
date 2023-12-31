
@interface DCDDeviceMetadata : NSObject {
    DCContext * _context;
    <DCCryptoProxy> * _cryptoProxy;
}

- (void).cxx_destruct;
- (void)baaSignatureForData:(id)arg1 completion:(id /* block */)arg2;
- (void)baaSignaturesForData:(id)arg1 completion:(id /* block */)arg2;
- (void)generateEncryptedBlobWithCompletion:(id /* block */)arg1;
- (id)initWithContext:(id)arg1 cryptoProxy:(id)arg2;

@end
