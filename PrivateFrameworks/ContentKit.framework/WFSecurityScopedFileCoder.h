
@interface WFSecurityScopedFileCoder : WFFileCoder

+ (bool)supportsSecureCoding;

- (void)archiveFileAtURL:(id)arg1 fileShouldBeDeletedOnDeallocation:(bool)arg2 withCoder:(id)arg3;
- (id)decodeFileWithCoder:(id)arg1 fileShouldBeDeletedOnDeallocation:(bool*)arg2 fileIsSecurityScoped:(bool*)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sharedDirectory;
- (id)sharedTemporaryDirectory;
- (void)waitForFileAvailabilityWithCompletionHandler:(id /* block */)arg1;

@end
