
@interface _PASLRUCache : NSObject {
    unsigned long long  _countLimit;
    _PASLock * _lock;
}

- (void).cxx_destruct;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (id)initWithCountLimit:(unsigned long long)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
