
@interface IDSTransactionLogSyncTask : IDSTransactionLogTask {
    id /* block */  _batchProcessingBlock;
    id /* block */  _knownRecordIDsFromList;
    bool  _shouldContinueFromLastSyncPoint;
}

@property (nonatomic, copy) id /* block */ batchProcessingBlock;
@property (nonatomic, copy) id /* block */ knownRecordIDsFromList;
@property (nonatomic) bool shouldContinueFromLastSyncPoint;

- (void).cxx_destruct;
- (id /* block */)batchProcessingBlock;
- (id /* block */)knownRecordIDsFromList;
- (void)setBatchProcessingBlock:(id /* block */)arg1;
- (void)setKnownRecordIDsFromList:(id /* block */)arg1;
- (void)setShouldContinueFromLastSyncPoint:(bool)arg1;
- (bool)shouldContinueFromLastSyncPoint;

@end
