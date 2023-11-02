
@interface _BMDirectFileManager : BMFileManager <BMFileManagerImpl> {
    NSString * _directory;
    BMFileHandle * _directoryHandle;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _setUpLock;
}

- (void).cxx_destruct;
- (id)_fileHandleForFileAtPath:(id)arg1 flags:(int)arg2 protection:(int)arg3 error:(id*)arg4;
- (id)_openTemporaryDirectoryWithError:(id*)arg1;
- (bool)_removeDirectoryAtPath:(id)arg1 error:(id*)arg2;
- (bool)_removeFileAtPath:(id)arg1 error:(id*)arg2;
- (id)initWithDirectory:(id)arg1 cachingOptions:(long long)arg2;
- (id)replaceFileAtPath:(id)arg1 withFileHandle:(id)arg2 protection:(int)arg3 error:(id*)arg4;
- (bool)setUpWithError:(id*)arg1;
- (id)temporaryFileHandleWithProtection:(int)arg1 error:(id*)arg2;

@end
