
@interface PLAtomicObject : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id  _object;
}

- (void).cxx_destruct;
- (void)atomicallyPerformBlockAndWait:(id /* block */)arg1;
- (id)initWithObject:(id)arg1;
- (void)invalidateWithHandler:(id /* block */)arg1;

@end
