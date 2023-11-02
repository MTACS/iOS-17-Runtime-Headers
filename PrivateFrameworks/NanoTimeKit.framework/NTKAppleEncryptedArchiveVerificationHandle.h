
@interface NTKAppleEncryptedArchiveVerificationHandle : NTKAppleEncryptedArchiveHandle {
    struct AAArchiveStream_impl { } * _archiveStream;
    struct AAFieldKeySet_impl { } * _excludeFields;
    NSURL * _outputDirectoryURL;
    struct AAArchiveStream_impl { } * _verificationStream;
}

@property (readonly) struct AAArchiveStream_impl { }*archiveStream;
@property (readonly) struct AAArchiveStream_impl { }*verificationStream;

- (void).cxx_destruct;
- (struct AAArchiveStream_impl { }*)archiveStream;
- (bool)closeReturningError:(id*)arg1;
- (void)dealloc;
- (id)initWithArchiveURL:(id)arg1 symmetricKey:(id)arg2 outputDirectoryURL:(id)arg3 excludeFields:(id)arg4;
- (struct AAArchiveStream_impl { }*)openReturningError:(id*)arg1;
- (struct AAArchiveStream_impl { }*)verificationStream;

@end
