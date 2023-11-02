
@interface BRCSharingProcessFolderSubitemsOperation : _BRCFrameworkOperation <BRCListOperationDelegate, BRCOperationSubclass> {
    NSMutableArray * _activeListOperations;
    NSMutableArray * _aliasItemsToDelete;
    bool  _alreadyHasShareID;
    BRCALRowID * _appLibraryRowID;
    unsigned long long  _batchSize;
    unsigned long long  _failedSubitemsLeft;
    bool  _isFSRoot;
    unsigned long long  _processType;
    BRCPrivateClientZone * _rootClientZone;
    BRCItemID * _rootItemID;
    unsigned long long  _rowID;
    NSMutableArray * _shareIDsToDelete;
    NSMutableArray * _sharedClientSubitems;
    NSMutableArray * _sharedServerSubitems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_completeAfterProcessingClientTruthIfNecessaryWithError:(id)arg1;
- (bool)_completeAfterProcessingServerTruthIfNecessaryWithError:(id)arg1;
- (void)_stopObservingListOperation;
- (id)computeURLForItemID:(id)arg1 rootURL:(id)arg2;
- (id)createActivity;
- (void)dealloc;
- (bool)deleteShareInfoFromZone:(id)arg1 zoneRowID:(id)arg2 itemID:(id)arg3 sharingOptions:(unsigned long long)arg4 itemsTable:(id)arg5;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithItem:(id)arg1 processType:(unsigned long long)arg2 maxSubitemsToFail:(unsigned long long)arg3;
- (void)listOperation:(id)arg1 wasReplacedByOperation:(id)arg2;
- (void)main;
- (void)processClientTruthWithCompletion:(id /* block */)arg1;
- (void)processServerItemsUnderItemID:(id)arg1 completion:(id /* block */)arg2;
- (void)processServerTruthWithCompletion:(id /* block */)arg1;
- (void)removeSharedSubitemsWithCompletion:(id /* block */)arg1;
- (bool)shouldRetryForError:(id)arg1;

@end
