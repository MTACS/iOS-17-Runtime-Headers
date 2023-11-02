
@interface SBFFileCacheMemoryStore : NSObject <SBFFileCacheStore> {
    NSMutableDictionary * _fileWrappers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)fileCache:(id)arg1 loadFileWrapperNamed:(id)arg2;
- (void)fileCache:(id)arg1 removeFileWrapperNamed:(id)arg2;
- (void)fileCache:(id)arg1 storeFileWrapper:(id)arg2;
- (void)removeAllFileWrappersForFileCache:(id)arg1;

@end