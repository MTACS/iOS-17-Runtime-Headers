
@interface NTKAppleEncryptedArchiveDiskExtractionHandle : NTKAppleEncryptedArchiveHandle {
    NSString * _fileProtection;
    NSURL * _outputDirectoryURL;
    struct AAArchiveStream_impl { } * _outputStream;
}

@property (readonly) struct AAArchiveStream_impl { }*archiveStream;
@property (readonly) struct AAArchiveStream_impl { }*outputStream;

- (void).cxx_destruct;
- (struct AAArchiveStream_impl { }*)archiveStream;
- (bool)closeReturningError:(id*)arg1;
- (void)dealloc;
- (id)initWithArchiveURL:(id)arg1 symmetricKey:(id)arg2 outputDirectoryURL:(id)arg3 fileProtection:(id)arg4;
- (struct AAArchiveStream_impl { }*)openReturningError:(id*)arg1;
- (struct AAArchiveStream_impl { }*)outputStream;

@end
