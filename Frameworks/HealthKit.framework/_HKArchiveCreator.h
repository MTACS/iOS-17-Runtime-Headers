
@interface _HKArchiveCreator : NSObject <_HKArchiveWriter> {
    struct archive { } * _archive;
    NSURL * _archiveURL;
    NSError * _error;
    NSFileHandle * _fileHandle;
}

@property (nonatomic, readonly, copy) NSURL *archiveURL;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSFileHandle *fileHandle;

+ (bool)archiveContentsOfDirectoryAtURL:(id)arg1 archiveURL:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_addDataOfSize:(long long)arg1 toPathInArchive:(id)arg2 fromByteProvider:(id /* block */)arg3;
- (void)_closeArchiveWithError:(id)arg1;
- (void)addDataToArchive:(id)arg1 pathInArchive:(id)arg2;
- (void)addFileToArchive:(id)arg1 pathInArchive:(id)arg2;
- (bool)archiveIsValid;
- (id)archiveURL;
- (void)closeArchive;
- (void)dealloc;
- (id)error;
- (id)fileHandle;
- (id)initWithFileHandle:(id)arg1 archiveType:(long long)arg2;
- (id)initWithURL:(id)arg1 archiveType:(long long)arg2;
- (id)initWithURL:(id)arg1 fileHandle:(id)arg2 archiveType:(long long)arg3;
- (long long)writeData:(const void*)arg1 ofLength:(unsigned long long)arg2;

@end
