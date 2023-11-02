
@interface CalAsyncBlockQueue : NSObject {
    <CalAsyncBlockPerformer> * _blockPerformer;
    NSMutableSet * _pendingBlocks;
}

@property (nonatomic, readonly) <CalAsyncBlockPerformer> *blockPerformer;
@property (nonatomic, readonly) NSMutableSet *pendingBlocks;

- (void).cxx_destruct;
- (id)blockPerformer;
- (void)cancelAllPendingBlocks;
- (id)initWithBlockPerformer:(id)arg1;
- (id)pendingBlocks;
- (void)performAfterDelay:(double)arg1 block:(id /* block */)arg2;
- (void)performAsync:(id /* block */)arg1;

@end
