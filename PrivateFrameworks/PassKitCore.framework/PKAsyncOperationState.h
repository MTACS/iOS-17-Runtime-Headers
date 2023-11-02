
@interface PKAsyncOperationState : NSObject <PKCancelObservable> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _actionLock;
    NSMutableArray * _cancelActions;
    bool  _canceled;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (getter=isCanceled, nonatomic, readonly) bool canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancel;
- (id)_init;
- (void)_invalidate;
- (void)addCancelAction:(id /* block */)arg1;
- (id)init;
- (bool)isCanceled;
- (void)performAction:(id /* block */)arg1;

@end
