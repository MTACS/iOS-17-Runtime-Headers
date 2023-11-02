
@interface CKVConcurrentDictionary : NSMutableDictionary {
    NSMutableDictionary * _dictionary;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)allKeys;
- (id)allValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyEnumerator;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
