
@interface NSSafeMutableDictionary : NSMutableDictionary {
    NSLock * _lock;
    NSMutableDictionary * _storage;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)init;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
