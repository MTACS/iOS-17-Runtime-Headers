
@interface NTKAppleEncryptedArchiveDiskExtractor : NSObject {
    NSURL * _archiveURL;
    id /* block */  _completion;
    NSObject<OS_dispatch_queue> * _completionQueue;
    NSObject<OS_dispatch_queue> * _extractionQueue;
    NSString * _fileProtection;
    NSURL * _outputDirectoryURL;
    struct AAArchiveStream_impl { } * _outputStream;
    long long  _state;
    NSData * _symmetricKey;
}

@property (nonatomic, readonly) NSURL *archiveURL;
@property (nonatomic, readonly) NSString *fileProtection;
@property (nonatomic, readonly) NSURL *outputDirectoryURL;
@property (nonatomic, readonly) NSData *symmetricKey;

- (void).cxx_destruct;
- (id)archiveURL;
- (void)cancel;
- (id)fileProtection;
- (id)initWithArchiveURL:(id)arg1 symmetricKey:(id)arg2 outputDirectoryURL:(id)arg3 fileProtection:(id)arg4 completion:(id /* block */)arg5;
- (id)outputDirectoryURL;
- (id)requiredDiskSpaceWithError:(id*)arg1;
- (void)resume;
- (id)symmetricKey;
- (bool)verifyExtractedContentsWithError:(id*)arg1;

@end
