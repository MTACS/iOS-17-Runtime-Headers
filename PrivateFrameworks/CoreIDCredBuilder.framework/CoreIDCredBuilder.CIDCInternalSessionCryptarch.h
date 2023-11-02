
@interface CoreIDCredBuilder.CIDCInternalSessionCryptarch : NSObject {
    void sessionCryptarch;
}

@property (nonatomic, readonly) NSData *publicKey;

- (void).cxx_destruct;
- (id)decryptWithData:(id)arg1 error:(id*)arg2;
- (bool)deriveSessionKeysWithSessionTranscript:(id)arg1 ikm:(id)arg2 error:(id*)arg3;
- (id)encryptWithData:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithRole:(unsigned long long)arg1 curve:(unsigned long long)arg2 variant:(unsigned long long)arg3;
- (id)publicKey;
- (bool)setRemoteKey:(id)arg1 error:(id*)arg2;

@end
