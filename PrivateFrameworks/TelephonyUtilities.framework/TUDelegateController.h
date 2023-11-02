
@interface TUDelegateController : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _delegateLock;
    NSMapTable * _delegateToQueue;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } delegateLock;
@property (nonatomic, readonly) NSMapTable *delegateToQueue;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (struct os_unfair_lock_s { unsigned int x1; })delegateLock;
- (id)delegateToQueue;
- (void)enumerateDelegatesUsingBlock:(id /* block */)arg1;
- (id)init;
- (void)removeDelegate:(id)arg1;

@end
