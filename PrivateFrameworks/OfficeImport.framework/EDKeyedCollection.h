
@interface EDKeyedCollection : EDCollection {
    OITSUIntegerKeyDictionary * mMap;
}

- (void).cxx_destruct;
- (unsigned long long)addObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)insertIntoMap:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isObjectInMap:(id)arg1;
- (bool)isOverwritingKeyOK;
- (id)objectWithKey:(long long)arg1;
- (void)removeAllObjects;
- (void)removeFromMap:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;

@end
