
@interface AMSDeallocGuard : NSObject {
    id /* block */  _block;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _invalidationLock;
}

@property (nonatomic, readonly, copy) id /* block */ block;
@property (nonatomic, readonly) bool invalidated;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } invalidationLock;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)dealloc;
- (id)initWithDeallocGuardBlock:(id /* block */)arg1;
- (void)invalidate;
- (bool)invalidated;
- (struct os_unfair_lock_s { unsigned int x1; })invalidationLock;

@end
