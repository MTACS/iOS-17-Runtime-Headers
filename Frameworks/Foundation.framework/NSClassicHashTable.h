
@interface NSClassicHashTable : NSHashTable {
    struct { 
        int (*hash)(); 
        int (*isEqual)(); 
        int (*retain)(); 
        int (*release)(); 
        int (*describe)(); 
    }  _callBacks;
    struct __CFBasicHash { } * _ht;
}

- (void)addObject:(id)arg1;
- (id)allObjects;
- (id)copy;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void*)getItem:(const void*)arg1;
- (void)getKeys:(const void**)arg1 count:(unsigned long long*)arg2;
- (unsigned long long)hash;
- (id)init;
- (void)insertItem:(const void*)arg1;
- (void)insertKnownAbsentItem:(const void*)arg1;
- (bool)isEqual:(id)arg1;
- (void)removeAllItems;
- (void)removeItem:(const void*)arg1;

@end
