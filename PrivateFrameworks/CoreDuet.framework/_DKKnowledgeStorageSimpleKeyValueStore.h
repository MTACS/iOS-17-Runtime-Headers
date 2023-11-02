
@interface _DKKnowledgeStorageSimpleKeyValueStore : NSObject <_DKSimpleKeyValueStore> {
    NSString * _domain;
    _DKKnowledgeStorage * _storage;
}

- (void).cxx_destruct;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
