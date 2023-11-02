
@interface PLManagedObjectContextList : NSObject {
    NSHashTable * _contexts;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (void).cxx_destruct;
- (void)addContext:(id)arg1;
- (id)allContexts;
- (id)allContextsNotIdenticalTo:(id)arg1;
- (id)init;

@end
