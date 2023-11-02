
@interface UNSKeyedDataStoreRepository : NSObject {
    NSString * _directory;
    NSString * _fileName;
    UNCBundleLibrarian * _librarian;
    long long  _maxObjectsPerKey;
    NSString * _objectIdentifierKey;
    NSString * _pathExtension;
    <UNSContentProtectionStrategy> * _protectionStrategy;
}

- (void).cxx_destruct;
- (id)_addObject:(id)arg1 mustReplace:(bool)arg2 atPath:(id)arg3;
- (id)_addObject:(id)arg1 toObjects:(id)arg2 mustReplace:(bool)arg3 receipt:(id*)arg4;
- (id)_dataAtPath:(id)arg1;
- (id)_directoryForKey:(id)arg1;
- (bool)_isReplacementSupported;
- (id)_objectsAtPath:(id)arg1;
- (id)_objectsForData:(id)arg1 identifier:(id)arg2;
- (id)_objectsPassingTest:(id /* block */)arg1 atPath:(id)arg2;
- (id)_pathForKey:(id)arg1;
- (void)_removeItemAtPath:(id)arg1;
- (id)_removeObjectsPassingTest:(id /* block */)arg1 atPath:(id)arg2;
- (bool)_saveObjects:(id)arg1 atPath:(id)arg2;
- (void)_setObjects:(id)arg1 atPath:(id)arg2;
- (bool)_useReplacementToImport:(id)arg1 into:(id)arg2;
- (id)addObject:(id)arg1 forKey:(id)arg2;
- (id)addObject:(id)arg1 mustReplace:(bool)arg2 forKey:(id)arg3;
- (id)allKeys;
- (id)directoryPath;
- (id)initWithDirectory:(id)arg1 fileName:(id)arg2 pathExtension:(id)arg3 librarian:(id)arg4 repositoryProtectionStrategy:(id)arg5 objectIdentifierKey:(id)arg6 maxObjectsPerKey:(long long)arg7;
- (void)migrateStoreAtPath:(id)arg1 forKey:(id)arg2;
- (id)objectsForKey:(id)arg1;
- (id)objectsPassingTest:(id /* block */)arg1 forKey:(id)arg2;
- (void)protectionStateChanged;
- (void)removeAllObjectsForKey:(id)arg1;
- (void)removeDataStoreRepository;
- (id)removeObjectsPassingTest:(id /* block */)arg1 forKey:(id)arg2;
- (void)removeStoreForKey:(id)arg1;
- (id)replaceObject:(id)arg1 forKey:(id)arg2;
- (void)setObjects:(id)arg1 forKey:(id)arg2;

@end
