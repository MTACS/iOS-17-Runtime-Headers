
@interface BRCFetchRecordsWrapperOperation : _BRCOperation <BRCOperationSubclass> {
    CKFetchRecordsOperation * _fetchRecordsOperation;
    BRCServerZone * _serverZone;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createActivity;
- (id)initWithCKFetchRecordsOperation:(id)arg1 group:(id)arg2 serverZone:(id)arg3 isUserWaiting:(bool)arg4;
- (void)main;
- (bool)shouldRetryForError:(id)arg1;

@end
