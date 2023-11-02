
@interface DIBaseParams : NSObject <NSCoding, NSSecureCoding> {
    NSError * _deserializationError;
    DiskImageParamsXPC * _diskImageParamsXPC;
    DIURL * _inputURL;
    unsigned long long  _readPassphraseFlags;
    DIShadowChain * _shadowChain;
}

@property (nonatomic, readonly) bool RAMdisk;
@property (nonatomic, readonly) struct shared_ptr<Backend> { struct Backend {} *x1; struct __shared_weak_count {} *x2; } backend;
@property (nonatomic, readonly) void*cryptoHeader;
@property (nonatomic, copy) NSError *deserializationError;
@property (nonatomic, retain) DiskImageParamsXPC *diskImageParamsXPC;
@property (nonatomic, readonly, copy) NSUUID *encryptionUUID;
@property (nonatomic, readonly) bool hasUnlockedBackend;
@property (nonatomic, readonly, copy) DIURL *inputURL;
@property (nonatomic, readonly, copy) NSUUID *instanceID;
@property (nonatomic) unsigned long long rawBlockSize;
@property (nonatomic) unsigned long long readPassphraseFlags;
@property (nonatomic, readonly) bool requiresRootDaemon;
@property (nonatomic, readonly) DIShadowChain *shadowChain;
@property (nonatomic, copy) NSURL *shadowURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)RAMdisk;
- (struct shared_ptr<Backend> { struct Backend {} *x1; struct __shared_weak_count {} *x2; })backend;
- (bool)checkBeforeSetWithIsPassphrase:(bool)arg1 error:(id*)arg2;
- (void*)cryptoHeader;
- (id)description;
- (id)deserializationError;
- (id)diskImageParamsXPC;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptionUUID;
- (bool)hasUnlockedBackend;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (id)inputURL;
- (id)instanceID;
- (void)invalidate;
- (bool)openExistingImageWithFlags:(int)arg1 error:(id*)arg2;
- (bool)prepareImageWithXpcHandler:(id)arg1 fileMode:(long long)arg2 error:(id*)arg3;
- (unsigned long long)rawBlockSize;
- (unsigned long long)readPassphraseFlags;
- (bool)requiresRootDaemon;
- (void)setDeserializationError:(id)arg1;
- (void)setDiskImageParamsXPC:(id)arg1;
- (bool)setPassphrase:(const char *)arg1 error:(id*)arg2;
- (void)setRawBlockSize:(unsigned long long)arg1;
- (void)setReadPassphraseFlags:(unsigned long long)arg1;
- (void)setShadowURL:(id)arg1;
- (id)shadowChain;
- (id)shadowURL;
- (bool)tryUnlockUsingKeychainCertificateWithError:(id*)arg1;
- (bool)validateDeserializationWithError:(id*)arg1;

@end
