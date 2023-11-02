
@interface __NSDictionaryI : NSDictionary {
    unsigned int  _copyKeys;
    id  _list;
    unsigned int  _szidx;
    unsigned int  _used;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)__apply:(int (*)arg1 context:(void*)arg2;
- (id)_cfMutableCopy;
- (double)_clumpingFactor;
- (double)_clumpingInterestingThreshold;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3;
- (id)keyEnumerator;
- (id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;

@end
