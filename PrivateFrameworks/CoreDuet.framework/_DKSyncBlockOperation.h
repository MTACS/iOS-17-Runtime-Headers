
@interface _DKSyncBlockOperation : _DKSyncOperation {
    bool  _asynchronous;
    NSMutableArray * _blocks;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (getter=isAsynchronous) bool asynchronous;
@property (readonly) NSMutableArray *blocks;

+ (id)blockOperationWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)addExecutionBlock:(id /* block */)arg1;
- (id)blocks;
- (id)executionBlocks;
- (id)init;
- (id)initWithBlock:(id /* block */)arg1;
- (bool)isAsynchronous;
- (void)main;
- (void)setAsynchronous:(bool)arg1;

@end
