
@interface _DKSyncCompositeOperation : _DKSyncOperation {
    NSHashTable * _children;
    NSMutableArray * _errors;
    _Atomic bool  _isReadyToStart;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    _DKSyncCompositeOperation * _parent;
}

@property (readonly) NSMutableArray *errors;

- (void).cxx_destruct;
- (void)_shutdownOperation;
- (void)cancel;
- (void)childOperation:(id)arg1 didEndWithErrors:(id)arg2;
- (void)childOperationWasAdded:(id)arg1;
- (void)dealloc;
- (void)endOperation;
- (id)errors;
- (id)init;
- (id)initWithParent:(id)arg1;
- (bool)isAsynchronous;
- (bool)isReady;
- (void)setReadyToStart:(bool)arg1;

@end
