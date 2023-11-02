
@interface WFFileCoder : NSObject <NSSecureCoding> {
    long long  _deletionResponsibility;
    NSURL * _sharedDirectory;
    NSURL * _sharedTemporaryDirectory;
    long long  _targetPlatform;
}

@property (nonatomic) long long deletionResponsibility;
@property (nonatomic, copy) NSURL *sharedDirectory;
@property (nonatomic, copy) NSURL *sharedTemporaryDirectory;
@property (nonatomic) long long targetPlatform;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)archiveFileAtURL:(id)arg1 fileShouldBeDeletedOnDeallocation:(bool)arg2 withCoder:(id)arg3;
- (id)decodeFileWithCoder:(id)arg1 fileShouldBeDeletedOnDeallocation:(bool*)arg2 fileIsSecurityScoped:(bool*)arg3;
- (long long)deletionResponsibility;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDeletionResponsibility:(long long)arg1;
- (void)setSharedDirectory:(id)arg1;
- (void)setSharedTemporaryDirectory:(id)arg1;
- (void)setTargetPlatform:(long long)arg1;
- (id)sharedDirectory;
- (id)sharedTemporaryDirectory;
- (long long)targetPlatform;
- (void)waitForFileAvailabilityWithCompletionHandler:(id /* block */)arg1;

@end
