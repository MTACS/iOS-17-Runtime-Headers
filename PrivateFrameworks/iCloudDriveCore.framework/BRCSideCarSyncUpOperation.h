
@interface BRCSideCarSyncUpOperation : _BRCOperation <BRCOperationSubclass> {
    BRCAccountSession * _session;
    bool  _shouldPerformAnotherBatch;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_itemsNeedingSyncUpEnumerator;
- (void)_markItemsFailedSync;
- (void)_syncUpRecordBatchWithModifiedRecords:(id)arg1 deletedRecordIDs:(id)arg2 recordIDToZoneMap:(id)arg3 requestID:(unsigned long long)arg4;
- (id)createActivity;
- (void)fakeSyncForItem:(id)arg1 itemRank:(unsigned long long)arg2;
- (id)initWithSession:(id)arg1;
- (void)main;
- (bool)shouldPerformAnotherBatch;
- (bool)shouldRetryForError:(id)arg1;

@end
