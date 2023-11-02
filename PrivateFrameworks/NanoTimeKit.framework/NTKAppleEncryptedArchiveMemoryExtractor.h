
@interface NTKAppleEncryptedArchiveMemoryExtractor : NSObject {
    NSURL * _archiveURL;
    id /* block */  _completion;
    NSObject<OS_dispatch_queue> * _completionQueue;
    NSObject<OS_dispatch_queue> * _extractionQueue;
    NSMutableData * _outputData;
    NSError * _outputError;
    struct AAArchiveStream_impl { } * _outputStream;
    long long  _state;
    NSData * _symmetricKey;
    NSString * _targetArchivedPath;
}

@property (nonatomic, readonly) NSURL *archiveURL;
@property (nonatomic, readonly) NSData *symmetricKey;
@property (nonatomic, readonly) NSString *targetArchivedPath;

- (void).cxx_destruct;
- (id)archiveURL;
- (void)cancel;
- (id)initWithArchiveURL:(id)arg1 symmetricKey:(id)arg2 extractingFileAtArchivedPath:(id)arg3 completion:(id /* block */)arg4;
- (void)resume;
- (id)symmetricKey;
- (id)targetArchivedPath;

@end
