
@interface _DKSyncBlockCompositeOperation : _DKSyncCompositeOperation {
    NSMutableArray * _blocks;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly) NSMutableArray *blocks;

- (void).cxx_destruct;
- (id)blocks;
- (id)executionBlocks;
- (bool)isAsynchronous;
- (void)main;

@end
