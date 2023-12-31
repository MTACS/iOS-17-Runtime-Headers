
@interface TSUZipFileArchive : TSUZipArchive {
    NSObject<OS_dispatch_queue> * _accessQueue;
    unsigned long long  _archiveLength;
    <TSUReadChannel> * _archiveReadChannel;
    NSURL * _temporaryDirectoryURL;
}

+ (void)readArchiveFromURL:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (unsigned long long)archiveLength;
- (bool)copyToTemporaryLocationRelativeToURL:(id)arg1;
- (void)createTemporaryDirectoryRelativeToURL:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithURL:(id)arg1;
- (id)initWithWriter:(id)arg1 atURL:(id)arg2;
- (bool)openWithURL:(id)arg1;
- (id)readChannel;
- (void)removeTemporaryDirectory;
- (bool)reopenWithTemporaryURL:(id)arg1;

@end
