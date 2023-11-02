
@interface _PASLPDictionary : NSDictionary <NSFastEnumeration> {
    _PASLPDictionaryContext * _context;
    NSData * _objectsAndKeys;
    <_PASLPReaderProtocol> * _reader;
}

- (void).cxx_destruct;
- (id)allKeys;
- (id)allKeysForObject:(id)arg1;
- (id)allValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLazyPlistReader:(id)arg1 context:(id)arg2;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (bool)isEqualToDictionary:(id)arg1;
- (id)keyEnumerator;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForKey:(id)arg1;

@end
