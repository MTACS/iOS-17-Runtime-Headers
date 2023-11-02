
@interface SYStoreResetSessionOwner : SYStoreSessionOwner {
    NSMutableArray * _buffer;
    unsigned int  _bufferedState;
    id /* block */  _fetchNextBatch;
}

@property (nonatomic, copy) id /* block */ fetchNextBatch;

- (void).cxx_destruct;
- (unsigned int)_sendBufferedChanges:(id /* block */)arg1;
- (id /* block */)fetchNextBatch;
- (id)init;
- (bool)isResetSync;
- (void)setFetchNextBatch:(id /* block */)arg1;
- (unsigned int)syncSession:(id)arg1 enqueueChanges:(id /* block */)arg2 error:(id*)arg3;

@end
