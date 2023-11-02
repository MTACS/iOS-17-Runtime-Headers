
@interface GKTable : NSObject {
    unsigned long long  _count;
    struct _gktableitem { unsigned int x1; id x2; double x3; double x4; } * _items;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    unsigned long long  _size;
}

@property (readonly) unsigned long long count;

- (id)allObjects;
- (unsigned long long)count;
- (void)dealloc;
- (id)init;
- (id)initWithSize:(unsigned long long)arg1;
- (void)lock;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)objectForKey:(unsigned int)arg1;
- (void)print;
- (void)removeAllObjects;
- (void)removeObjectForKey:(unsigned int)arg1;
- (void)setObject:(id)arg1 forKey:(unsigned int)arg2;
- (void)touchObject:(id)arg1;
- (void)touchObjectForKey:(unsigned int)arg1;
- (void)unlock;

@end