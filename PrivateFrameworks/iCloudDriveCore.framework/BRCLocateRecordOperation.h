
@interface BRCLocateRecordOperation : _BRCOperation <BRCOperationSubclass> {
    bool  _exists;
    NSMutableArray * _locateRecordCompletionBlocks;
    CKRecordID * _recordID;
    unsigned long long  _recordsFetched;
    unsigned long long  _recordsFetchedTotalMetadataSize;
    BRCServerZone * _serverZone;
    CKRecordID * _structureRecordID;
    unsigned long long  _xattrsFetchedTotalSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CKRecordID *recordID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performAfterLocatingRecord:(id /* block */)arg1;
- (void)addLocateRecordCompletionBlock:(id /* block */)arg1;
- (void)cancelToBeReplacedByOperation:(id)arg1;
- (id)createActivity;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithRecordID:(id)arg1 serverZone:(id)arg2 isUserWaiting:(bool)arg3;
- (void)main;
- (id)recordID;
- (bool)shouldRetryForError:(id)arg1;

@end
