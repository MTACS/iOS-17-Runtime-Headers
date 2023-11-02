
@interface GCObjectPool : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    NSMutableArray * objects;
}

- (void).cxx_destruct;
- (bool)addObjectWith:(id /* block */)arg1;
- (id)init;
- (id)takeObjectOrCreateWith:(id /* block */)arg1;

@end
