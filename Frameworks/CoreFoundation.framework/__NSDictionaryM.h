
@interface __NSDictionaryM : NSMutableDictionary {
    _Atomic struct __cow_state_t {} * cow;
    /* Warning: unhandled struct encoding: '{?="buffer"^@"state"(?=""{?="mutations"Q}""{?="muts"I"other"I}""{?="mutbits"b31"copyKeys"b1"used"b25"kvo"b1"szidx"b6})}' */ struct { 
        state **buffer; 
    }  storage;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)__apply:(int (*)arg1 context:(void*)arg2;
- (void)__setObject:(id)arg1 forKey:(id)arg2;
- (id)_cfMutableCopy;
- (double)_clumpingFactor;
- (double)_clumpingInterestingThreshold;
- (void)_mutate;
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
- (void)removeAllObjects;
- (void)removeEntriesWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObservationInfo:(void*)arg1;

@end
