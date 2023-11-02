
@interface TPSController : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _delegateLock;
    NSMapTable * _delegateToQueue;
}

@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } delegateLock;
@property (nonatomic, readonly) NSMapTable *delegateToQueue;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (struct os_unfair_lock_s { unsigned int x1; })delegateLock;
- (id)delegateToQueue;
- (id)init;
- (void)performAtomicDelegateBlock:(id /* block */)arg1;
- (void)removeDelegate:(id)arg1;
- (void)setDelegateLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;

@end
