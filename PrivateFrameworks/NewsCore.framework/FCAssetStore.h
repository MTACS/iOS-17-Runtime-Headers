
@interface FCAssetStore : NSObject {
    NSString * _directoryPath;
    FCThreadSafeMutableSet * _keysAwaitingRemoval;
    NSMutableSet * _knownKeys;
    NSString * _preferredExtension;
    NSObject<OS_dispatch_queue> * _removalQueue;
}

- (void).cxx_destruct;
- (id)allKeys;
- (id)copyData:(id)arg1 withKey:(id)arg2;
- (id)copyFileAtPath:(id)arg1 withKey:(id)arg2;
- (id)filePathForKey:(id)arg1;
- (id)fileURLForKey:(id)arg1;
- (id)initWithDirectoryAtPath:(id)arg1 preferredAssetPathExtension:(id)arg2;
- (id)initWithDirectoryAtPath:(id)arg1 preferredAssetPathExtension:(id)arg2 knownKeys:(id)arg3;
- (id)moveFileAtPath:(id)arg1 withKey:(id)arg2;
- (id)moveFileAtURL:(id)arg1 withKey:(id)arg2;
- (void)removeAllFiles;
- (void)removeAllFilesExceptKeys:(id)arg1;
- (void)removeFileWithKey:(id)arg1;
- (unsigned long long)sizeOfFileForKey:(id)arg1;
- (unsigned long long)storeSize;
- (unsigned long long)storeSizeForKeys:(id)arg1;

@end
