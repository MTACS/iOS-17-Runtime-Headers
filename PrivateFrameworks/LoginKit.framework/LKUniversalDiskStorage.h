
@interface LKUniversalDiskStorage : NSObject {
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _lock;
    NSDictionary * _storageDictionary;
    bool  _storageDictionaryModified;
    NSObject<OS_dispatch_queue> * _storageQueue;
}

@property (nonatomic) struct _opaque_pthread_rwlock_t { long long x1; BOOL x2[192]; } lock;
@property (nonatomic, retain) NSDictionary *storageDictionary;
@property (getter=isStorageDictionaryModified, nonatomic) bool storageDictionaryModified;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *storageQueue;

+ (id)localDictionaryPath;
+ (id)localDirectoryPath;
+ (id)sharedStorage;

- (void).cxx_destruct;
- (void)_refreshStorageCacheIfNeeded;
- (void)clearAllKeyValueStorage:(id /* block */)arg1;
- (bool)clearKeys:(id)arg1;
- (void)clearKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (bool)isStorageDictionaryModified;
- (struct _opaque_pthread_rwlock_t { long long x1; BOOL x2[192]; })lock;
- (id)retrieveValueForKey:(id)arg1;
- (void)saveKeyValuePairs:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)saveKeyValuePairs:(id)arg1 error:(id*)arg2;
- (void)setLock:(struct _opaque_pthread_rwlock_t { long long x1; BOOL x2[192]; })arg1;
- (void)setStorageDictionary:(id)arg1;
- (void)setStorageDictionaryModified:(bool)arg1;
- (void)setStorageQueue:(id)arg1;
- (id)storageDictionary;
- (id)storageQueue;

@end
