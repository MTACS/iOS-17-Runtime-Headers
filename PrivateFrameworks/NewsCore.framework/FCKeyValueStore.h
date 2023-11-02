
@interface FCKeyValueStore : NSObject <FCJSONEncodableObjectProviding, FRRingBufferContainer> {
    id /* block */  _arrayObjectHandler;
    FCKeyValueStoreClassRegistry * _classRegistry;
    unsigned long long  _clientVersion;
    id /* block */  _dictionaryKeyHandler;
    id /* block */  _dictionaryValueHandler;
    <NFLocking> * _lock;
    <FCKeyValueStoreMigrating> * _migrator;
    NSString * _name;
    id /* block */  _objectHandler;
    unsigned long long  _optionsMask;
    FCKeyValueStoreSavePolicy * _savePolicy;
    bool  _shouldExportJSONSidecar;
    NSString * _storeDirectory;
    unsigned long long  _storeSize;
    NSMutableDictionary * _unsafeObjectsByKey;
    bool  _unsafeWaitingOnSave;
}

@property (nonatomic, readonly) NSDictionary *asDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldExportJSONSidecar;
@property (nonatomic, readonly) NSString *storeDirectory;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (void).cxx_destruct;
- (void)addAllEntriesToDictionary:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)allKeys;
- (id)asDictionary;
- (bool)boolValueForKey:(id)arg1;
- (bool)containsObjectForKey:(id)arg1;
- (void)enumerateKeysAndObjectsForKeys:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithName:(id)arg1 directory:(id)arg2 version:(unsigned long long)arg3 options:(unsigned long long)arg4 classRegistry:(id)arg5;
- (id)initWithName:(id)arg1 directory:(id)arg2 version:(unsigned long long)arg3 options:(unsigned long long)arg4 classRegistry:(id)arg5 migrator:(id)arg6;
- (id)initWithName:(id)arg1 directory:(id)arg2 version:(unsigned long long)arg3 options:(unsigned long long)arg4 classRegistry:(id)arg5 migrator:(id)arg6 savePolicy:(id)arg7;
- (id)jsonEncodableObject;
- (id)keysOfEntriesPassingTest:(id /* block */)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectsForKeys:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)replaceContentsWithDictionary:(id)arg1;
- (void)save;
- (void)saveWithCompletionHandler:(id /* block */)arg1;
- (void)setBoolValue:(bool)arg1 forKey:(id)arg2;
- (void)setCloudBackupEnabled:(bool)arg1;
- (void)setJSONEncodingHandlersWithObjectHandler:(id /* block */)arg1 arrayObjectHandler:(id /* block */)arg2 dictionaryKeyHandler:(id /* block */)arg3 dictionaryValueHandler:(id /* block */)arg4;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObjects:(id)arg1 forKeys:(id)arg2;
- (void)setShouldExportJSONSidecar:(bool)arg1;
- (bool)shouldExportJSONSidecar;
- (id)storeDirectory;
- (unsigned long long)storeSize;
- (void)updateObjectsForKeys:(id)arg1 withBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday

- (bool)hasMaxForKey:(id)arg1;
- (bool)hasMinForKey:(id)arg1;
- (double)maxForKey:(id)arg1;
- (double)minForKey:(id)arg1;
- (id)ringBufferForKey:(id)arg1;
- (id)ringBufferForKey:(id)arg1 capacity:(unsigned long long)arg2;
- (void)setRingBuffers:(id)arg1;

@end
