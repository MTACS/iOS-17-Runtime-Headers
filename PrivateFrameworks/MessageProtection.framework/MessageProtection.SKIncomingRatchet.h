
@interface MessageProtection.SKIncomingRatchet : MessageProtection.SKRatchet {
    void messageKeys;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  ratchet;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  signingPublicKey;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithKey:(id)arg1 index:(unsigned short)arg2 signingKey:(id)arg3 error:(id*)arg4;
- (id)openStatusWithIndex:(unsigned long long)arg1 encryptedMessage:(id)arg2 authenticating:(id)arg3 signature:(id)arg4 error:(id*)arg5;
- (id)serializedData;
- (id)signingKeyIdentifier;

@end
