
@interface TSTIntegerKeyDict : NSObject {
    void * mMap;
}

- (id)allValues;
- (void)applyFunction:(int (*)arg1 withState:(void*)arg2;
- (void)applyFunction:(int (*)arg1 withState:(void*)arg2 andState:(void*)arg3;
- (long long)count;
- (void)dealloc;
- (id)init;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (id)objectForKey:(unsigned int)arg1;
- (void)removeAllObjects;
- (void)removeFirstObject;
- (void)removeObjectForKey:(unsigned int)arg1;
- (void)setObject:(id)arg1 forKey:(unsigned int)arg2;
- (void)transformWithFunction:(int (*)arg1 withState:(void*)arg2;

@end
