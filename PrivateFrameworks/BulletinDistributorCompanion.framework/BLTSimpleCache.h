
@interface BLTSimpleCache : NSObject {
    unsigned long long  _capacity;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _objects;
}

- (void).cxx_destruct;
- (void)cacheObject:(id)arg1;
- (id)description;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)objects;

@end
