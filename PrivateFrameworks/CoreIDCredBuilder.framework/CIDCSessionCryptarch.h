
@interface CIDCSessionCryptarch : NSObject {
    _TtC17CoreIDCredBuilder28CIDCInternalSessionCryptarch * _internalCryptarch;
}

@property (nonatomic, retain) _TtC17CoreIDCredBuilder28CIDCInternalSessionCryptarch *internalCryptarch;
@property (nonatomic, readonly) NSData *publicKey;

- (void).cxx_destruct;
- (id)decryptData:(id)arg1 error:(id*)arg2;
- (bool)deriveSessionKeysFromSessionTranscript:(id)arg1 error:(id*)arg2;
- (bool)deriveSessionKeysFromSessionTranscript:(id)arg1 intermediateKeyMaterial:(id)arg2 error:(id*)arg3;
- (id)encryptData:(id)arg1 error:(id*)arg2;
- (id)initWithRole:(unsigned long long)arg1 curve:(unsigned long long)arg2;
- (id)initWithRole:(unsigned long long)arg1 curve:(unsigned long long)arg2 variant:(unsigned long long)arg3;
- (id)internalCryptarch;
- (id)publicKey;
- (void)setInternalCryptarch:(id)arg1;
- (bool)setRemoteKey:(id)arg1 error:(id*)arg2;

@end
