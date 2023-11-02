
@interface TSTTableDataObjectKeyDict : NSObject {
    void * mMap;
}

- (unsigned long long)count;
- (void)dealloc;
- (id)init;
- (unsigned int)keyForObject:(id)arg1;
- (void)removeAllKeys;
- (void)removeKeyForObject:(id)arg1;
- (void)setKey:(unsigned int)arg1 forObject:(id)arg2;

@end
