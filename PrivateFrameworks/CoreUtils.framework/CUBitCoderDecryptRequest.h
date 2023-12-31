
@interface CUBitCoderDecryptRequest : NSObject {
    NSData * _aad;
    unsigned long long  _authTagLength;
    NSData * _data;
    NSData * _nonce;
}

@property (nonatomic, copy) NSData *aad;
@property (nonatomic) unsigned long long authTagLength;
@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSData *nonce;

- (void).cxx_destruct;
- (id)aad;
- (unsigned long long)authTagLength;
- (id)data;
- (id)nonce;
- (void)setAad:(id)arg1;
- (void)setAuthTagLength:(unsigned long long)arg1;
- (void)setData:(id)arg1;
- (void)setNonce:(id)arg1;

@end
