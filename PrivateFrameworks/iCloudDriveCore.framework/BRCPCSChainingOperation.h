
@interface BRCPCSChainingOperation : _BRCOperation <BRCListOperationDelegate, BRCOperationSubclass> {
    BRCAppLibrary * _appLibrary;
    unsigned long long  _batchSize;
    unsigned long long  _chainedRecordsCount;
    bool  _completed;
    BRCListDirectoryContentsOperation * _listOperation;
    id /* block */  _pcsChainCompletionBlock;
    BRCServerItem * _rootItem;
    bool  _shouldFillBatch;
    bool  _syncDownBeforeRetry;
    int  _tryCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ pcsChainCompletionBlock;
@property (nonatomic) bool shouldFillBatch;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buildRecordListWithCompletion:(id /* block */)arg1;
- (void)_chainRecords;
- (void)_sendRecordBatch:(id)arg1 completion:(id /* block */)arg2;
- (void)_sendRecordBatch:(id)arg1 recursed:(bool)arg2 completion:(id /* block */)arg3;
- (id)createActivity;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithRootItem:(id)arg1 appLibrary:(id)arg2;
- (void)listOperation:(id)arg1 wasReplacedByOperation:(id)arg2;
- (void)main;
- (id /* block */)pcsChainCompletionBlock;
- (void)setPcsChainCompletionBlock:(id /* block */)arg1;
- (void)setShouldFillBatch:(bool)arg1;
- (bool)shouldFillBatch;
- (bool)shouldRetryForError:(id)arg1;

@end
