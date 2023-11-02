
@interface BMFileManager : NSObject <BMFileManagerImpl> {
    long long  _cachingOptions;
    <BMFileManagerDelegate> * _delegate;
    NSString * _directory;
    BMCache * _fileHandleCache;
}

@property (nonatomic) <BMFileManagerDelegate> *delegate;
@property (nonatomic, readonly) NSString *directory;

+ (id)bm_accountIds;
+ (id)fileManagerWithDirectAccessToDirectory:(id)arg1 cachingOptions:(long long)arg2;
+ (id)fileManagerWithMediatedAccessToDirectory:(id)arg1 useCase:(id)arg2 domain:(unsigned long long)arg3 user:(unsigned int)arg4;
+ (id)globalWeakFileHandleCache;

- (void).cxx_destruct;
- (id)_fileHandleForFileAtPath:(id)arg1 flags:(int)arg2 protection:(int)arg3 error:(id*)arg4;
- (bool)_removeDirectoryAtPath:(id)arg1 error:(id*)arg2;
- (bool)_removeFileAtPath:(id)arg1 error:(id*)arg2;
- (bool)acquireLockfile:(id)arg1 andRunBlock:(id /* block */)arg2;
- (bool)changePermissionsOfFileAtPath:(id)arg1 mode:(unsigned short)arg2 error:(id*)arg3;
- (id)contentsOfDirectoryAtPath:(id)arg1 error:(id*)arg2;
- (bool)createDirectoryAtPath:(id)arg1 error:(id*)arg2;
- (id)dataWithContentsOfFileAtPath:(id)arg1 error:(id*)arg2;
- (id)delegate;
- (id)directory;
- (bool)fileExistsAtPath:(id)arg1 error:(id*)arg2;
- (id)fileHandleForFileAtPath:(id)arg1 flags:(int)arg2 protection:(int)arg3 error:(id*)arg4;
- (id)init;
- (id)initWithDirectory:(id)arg1 cachingOptions:(long long)arg2;
- (unsigned long long)modificationTimeOfFileAtPath:(id)arg1 error:(id*)arg2;
- (bool)removeDirectoryAtPath:(id)arg1 error:(id*)arg2;
- (bool)removeFileAtPath:(id)arg1 error:(id*)arg2;
- (bool)replaceFileAtPath:(id)arg1 withData:(id)arg2 protection:(int)arg3 error:(id*)arg4;
- (id)replaceFileAtPath:(id)arg1 withFileHandle:(id)arg2 protection:(int)arg3 error:(id*)arg4;
- (void)setDelegate:(id)arg1;
- (unsigned long long)sizeOfFileAtPath:(id)arg1 error:(id*)arg2;
- (id)temporaryFileHandleWithProtection:(int)arg1 error:(id*)arg2;

@end
