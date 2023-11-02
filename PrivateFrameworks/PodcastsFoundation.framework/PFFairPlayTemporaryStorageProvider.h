
@interface PFFairPlayTemporaryStorageProvider : NSObject <PFFairPlayTemporaryKeyStorageProviding> {
    void $__lazy_storage_$_logPrefix;
    void fileManager;
}

- (void).cxx_destruct;
- (id)createDirectoryFor:(long long)arg1 error:(id*)arg2;
- (bool)directoryExistsFor:(long long)arg1;
- (id)directoryLocationFor:(long long)arg1;
- (id)init;
- (bool)removeDirectoryFor:(long long)arg1 error:(id*)arg2;

@end
