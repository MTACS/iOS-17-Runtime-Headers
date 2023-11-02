
@interface BUZipFileArchive : BUZipArchive {
    NSURL * _URL;
    NSObject<OS_dispatch_queue> * _accessQueue;
    unsigned long long  _archiveLength;
    BUZipFileDescriptorWrapper * _fdWrapper;
    NSURL * _temporaryDirectoryURL;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, retain) BUZipFileDescriptorWrapper *fdWrapper;
@property (nonatomic, retain) NSURL *temporaryDirectoryURL;

+ (bool)extractArchiveFromURL:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
+ (bool)isZipArchiveAtFD:(int)arg1;
+ (bool)isZipArchiveAtURL:(id)arg1 error:(id*)arg2;
+ (void)readArchiveFromURL:(id)arg1 options:(unsigned long long)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (id)zipArchiveFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)URL;
- (id)accessQueue;
- (unsigned long long)archiveLength;
- (bool)copyToTemporaryLocationRelativeToURL:(id)arg1 error:(id*)arg2;
- (void)createTemporaryDirectoryRelativeToURL:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)fdWrapper;
- (id)initForReadingFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithWriter:(id)arg1 forReadingFromURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (bool)isValid;
- (id)newArchiveReadChannel;
- (bool)openWithURL:(id)arg1 error:(id*)arg2;
- (void)removeTemporaryDirectory;
- (bool)reopenWithTemporaryURL:(id)arg1 error:(id*)arg2;
- (void)setAccessQueue:(id)arg1;
- (void)setFdWrapper:(id)arg1;
- (void)setTemporaryDirectoryURL:(id)arg1;
- (void)setURL:(id)arg1;
- (id)temporaryDirectoryURL;

@end
