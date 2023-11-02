
@interface SESAtomicArray : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _objects;
}

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (id)firstWhere:(id /* block */)arg1;
- (id)init;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (id)snapshot;

@end
