
@interface BRCSideCarSyncDownOperation : _BRCOperation <BRCOperationSubclass> {
    CKServerChangeToken * _serverChangeToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createSyncDownOperation;
- (void)_createZone;
- (void)_saveChangedRecords:(id)arg1 deletedRecords:(id)arg2 serverChangeToken:(id)arg3 clientChangeToken:(id)arg4;
- (id)createActivity;
- (id)initWithSession:(id)arg1 changeToken:(id)arg2;
- (void)main;
- (bool)shouldRetryForError:(id)arg1;

@end
