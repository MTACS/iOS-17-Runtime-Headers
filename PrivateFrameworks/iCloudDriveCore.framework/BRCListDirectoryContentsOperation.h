
@interface BRCListDirectoryContentsOperation : BRCAutoCancelOperation {
    unsigned int  _batchSize;
    NSHashTable * _delegates;
    bool  _hasNilDelegate;
    BRCItemID * _itemID;
    NSMutableArray * _listCompletionBlocks;
    NSMutableArray * _preFlushListCompletionBlocks;
    CKQueryOperation * _queryOp;
    CKRecordID * _recordID;
    unsigned long long  _recordsFetched;
    unsigned long long  _recordsFetchedTotalMetadataSize;
    bool  _rescheduleApply;
    BRCServerZone * _serverZone;
    unsigned long long  _xattrsFetchedTotalSize;
}

@property (nonatomic, readonly) BRCItemID *folderToList;
@property (nonatomic) bool rescheduleApply;

- (void).cxx_destruct;
- (void)_cursorWasUpdated:(id)arg1 subResourcesOp:(id)arg2;
- (void)_scheduleQueryOp;
- (void)_waitForFlushAndRescheduleApplyIfNecessaryWithError:(id)arg1;
- (void)addDirectoryListCompletionBlock:(id /* block */)arg1;
- (void)addPreFlushDirectoryListCompletionBlock:(id /* block */)arg1;
- (void)beginObservingChangesWithDelegate:(id)arg1;
- (void)cancelToBeReplacedByOperation:(id)arg1;
- (void)endObservingChangesWithDelegate:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)folderToList;
- (id)initWithItemID:(id)arg1 zone:(id)arg2 isUserWaiting:(bool)arg3;
- (void)main;
- (bool)rescheduleApply;
- (void)setRescheduleApply:(bool)arg1;
- (bool)shouldRetryForError:(id)arg1;

@end
