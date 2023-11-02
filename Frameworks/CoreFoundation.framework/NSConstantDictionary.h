
@interface NSConstantDictionary : NSDictionary <NSFastEnumeration> {
    unsigned long long  _count;
    const id * _keys;
    const id * _objects;
    unsigned long long  _options;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)new;

- (void)__apply:(int (*)arg1 context:(void*)arg2;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)allKeys;
- (id)allValues;
- (id)autorelease;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3;
- (id)init;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (id)keyEnumerator;
- (id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectEnumerator;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
