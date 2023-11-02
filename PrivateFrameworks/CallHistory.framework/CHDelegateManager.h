
@interface CHDelegateManager : NSObject <CHDelegateManager> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessorLock;
    NSMapTable * _delegateToQueue;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } accessorLock;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSMapTable *delegateToQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct os_unfair_lock_s { unsigned int x1; })accessorLock;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)delegateToQueue;
- (id)init;
- (void)performDelegateSelector:(SEL)arg1;
- (void)performDelegateSelector:(SEL)arg1 withDelegate:(id)arg2;
- (void)removeDelegate:(id)arg1;

@end
