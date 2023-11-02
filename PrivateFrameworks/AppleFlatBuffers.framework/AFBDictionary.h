
@interface AFBDictionary : NSDictionary {
    AFBBufRef * _bufRef;
    unsigned long long  _count;
    id /* block */  _keyAtIndex;
    Class  _keyClass;
    id /* block */  _objectForValidKey;
    id /* block */  _tableAtIndex;
}

- (void).cxx_destruct;
- (id)allKeys;
- (id)allKeysForObject:(id)arg1;
- (id)allValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithBufRef:(id)arg1 count:(unsigned long long)arg2 keyClass:(Class)arg3 keyAtIndex:(id /* block */)arg4 tableAtIndex:(id /* block */)arg5 objectForValidKey:(id /* block */)arg6;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (bool)isEqualToDictionary:(id)arg1;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;

@end
