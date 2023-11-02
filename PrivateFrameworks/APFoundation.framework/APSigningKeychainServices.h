
@interface APSigningKeychainServices : NSObject {
    NSString * _inMemoryContextsKey;
    NSString * _inProgressContextsKey;
    NSString * _stashedContextsKey;
    NSString * _usedContextsKey;
}

@property (nonatomic, retain) NSString *inMemoryContextsKey;
@property (nonatomic, retain) NSString *inProgressContextsKey;
@property (nonatomic, retain) NSString *stashedContextsKey;
@property (nonatomic, retain) NSString *usedContextsKey;

- (void).cxx_destruct;
- (id)_allContextForKey:(id)arg1;
- (void)_generateKeys;
- (id)_getKeyForType:(long long)arg1;
- (id)_keychainQuery:(id)arg1;
- (id)_objectForKey:(id)arg1 error:(id*)arg2;
- (id)_readDataFromKeychain:(id)arg1 error:(id*)arg2;
- (void)_removeObjectForKey:(id)arg1;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (void)_writeDataToKeychain:(id)arg1 andData:(id)arg2;
- (id)contextsForType:(long long)arg1;
- (id)inMemoryContextsKey;
- (id)inProgressContextsKey;
- (id)init;
- (void)removeAllContexts;
- (void)setInMemoryContextsKey:(id)arg1;
- (void)setInProgressContextsKey:(id)arg1;
- (void)setStashedContextsKey:(id)arg1;
- (void)setUsedContextsKey:(id)arg1;
- (id)stashedContextsKey;
- (void)updateContext:(id)arg1 forType:(long long)arg2;
- (id)usedContextsKey;

@end
