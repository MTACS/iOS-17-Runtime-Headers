
@interface _PASLowValueCardinalityMutableDictionary : NSMutableDictionary {
    unsigned long long  _count;
    NSMutableArray * _objectsAndKeys;
}

- (void).cxx_destruct;
- (id)allKeysForObject:(id)arg1;
- (id)allValues;
- (unsigned long long)count;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
