
@interface _CDSharedMemoryKeyValueStore : NSObject <_CDStringKeyDataValueStoring> {
    NSMutableDictionary * _dictionary;
    NSError * _lastPersistError;
    NSObject<OS_os_log> * _log;
    void * _mappedMem;
    NSObject<OS_dispatch_queue> * _persistQueue;
    NSObject<OS_os_transaction> * _persistTransaction;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _size;
}

@property (nonatomic, readonly) unsigned long long size;

+ (id)defaultName;
+ (unsigned long long)defaultSize;
+ (id)keyValueStoreWithName:(id)arg1 size:(unsigned long long)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)allKeys;
- (id)dataForKey:(id)arg1;
- (id)description;
- (void*)memoryPointer;
- (bool)removeDataForKey:(id)arg1;
- (bool)removeDataForKeys:(id)arg1;
- (bool)setData:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (unsigned long long)size;
- (bool)syncPersistToShMem;
- (id)valueForKey:(id)arg1;

@end
