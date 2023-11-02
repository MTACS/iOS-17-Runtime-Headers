
@interface NDOBAAManager : NSObject {
    NSArray * _clientCertArray;
    struct __SecKey { } * _privateKey;
}

@property (nonatomic, retain) NSArray *clientCertArray;
@property (nonatomic) struct __SecKey { }*privateKey;

- (void).cxx_destruct;
- (id)_compressCertificates:(id)arg1;
- (id)_zlibCompressionForData:(id)arg1;
- (bool)addBAAAuthenticationHeadersToRequest:(id)arg1 withBody:(id)arg2 error:(id*)arg3;
- (id)certificatesEncodeToBase64:(id)arg1 status:(id*)arg2;
- (id)clientCertArray;
- (void)dealloc;
- (bool)generateBAACertficate:(id /* block */)arg1;
- (struct __SecKey { }*)privateKey;
- (id)serializeCertificateChain:(id)arg1;
- (void)setClientCertArray:(id)arg1;
- (void)setPrivateKey:(struct __SecKey { }*)arg1;
- (id)signDataAndEncodeToBase64:(id)arg1 withPrivateKey:(struct __SecKey { }*)arg2 status:(id*)arg3;
- (void)writeCertsToDevice:(id)arg1;

@end
