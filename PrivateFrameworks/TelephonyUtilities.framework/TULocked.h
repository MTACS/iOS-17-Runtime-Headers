
@interface TULocked : NSObject {
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _lock;
    id  _object;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)initWithObject:(id)arg1;
- (id)object;
- (void)performWhileLocked:(id /* block */)arg1;
- (void)setObject:(id)arg1;
- (struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int x_1_1_1; } x1; unsigned int x2; }*)unfairLockForTesting;

@end
