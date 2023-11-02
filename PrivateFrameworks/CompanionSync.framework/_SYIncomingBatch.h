
@interface _SYIncomingBatch : NSObject {
    SYBatchSyncChunk * _batch;
    id /* block */  _completion;
}

@property (nonatomic, retain) SYBatchSyncChunk *batch;
@property (nonatomic, copy) id /* block */ completion;

- (void).cxx_destruct;
- (id)batch;
- (id /* block */)completion;
- (void)setBatch:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;

@end
