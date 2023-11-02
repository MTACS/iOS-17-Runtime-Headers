
@interface BRCFetchParentChainOperation : _BRCOperation <BRCOperationSubclass> {
    NSMutableArray * _fetchParentChainCompletionBlocks;
    BRCItemID * _parentID;
    CKRecordID * _parentRecordID;
    unsigned long long  _recordsFetched;
    unsigned long long  _recordsFetchedTotalMetadataSize;
    BRCServerZone * _serverZone;
    unsigned long long  _xattrsFetchedTotalSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BRCItemID *parentIDToList;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchParentChain:(id)arg1;
- (void)addFetchParentChainCompletionBlock:(id /* block */)arg1;
- (void)cancelToBeReplacedByOperation:(id)arg1;
- (id)createActivity;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithParentID:(id)arg1 zone:(id)arg2 isUserWaiting:(bool)arg3;
- (void)main;
- (id)parentIDToList;
- (bool)shouldRetryForError:(id)arg1;

@end
