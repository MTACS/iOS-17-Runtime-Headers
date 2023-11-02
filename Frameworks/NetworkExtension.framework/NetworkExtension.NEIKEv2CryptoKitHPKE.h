
@interface NetworkExtension.NEIKEv2CryptoKitHPKE : NSObject {
    void aad;
    void key;
    void payload;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  psk;
    void pskID;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithPayload:(id)arg1 aad:(id)arg2 psk:(id)arg3 pskID:(id)arg4 keyData:(id)arg5;
- (id)initWithPayload:(id)arg1 aad:(id)arg2 psk:(id)arg3 pskID:(id)arg4 keyRef:(struct __SecKey { }*)arg5;
- (id)performHPKEOpenAndReturnError:(id*)arg1;
- (id)performHPKESealAndReturnError:(id*)arg1;

@end
