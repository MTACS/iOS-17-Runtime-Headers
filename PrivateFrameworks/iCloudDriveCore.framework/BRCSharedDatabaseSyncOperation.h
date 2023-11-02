
@interface BRCSharedDatabaseSyncOperation : _BRCOperation <BRCOperationSubclass> {
    BRCServerChangeState * _changeState;
    id /* block */  _shareDBSyncCompletionBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ shareDBSyncCompletionBlock;
@property (readonly) Class superclass;

+ (id)queue;

- (void).cxx_destruct;
- (void)_performAfterAddingOwnerKeysForZoneIDs:(id)arg1 block:(id /* block */)arg2;
- (void)_performAfterRegisteringForPushes:(id /* block */)arg1;
- (void)_performFetchChangedZones;
- (id)createActivity;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithSyncContext:(id)arg1 changeState:(id)arg2 group:(id)arg3;
- (void)main;
- (void)setShareDBSyncCompletionBlock:(id /* block */)arg1;
- (id /* block */)shareDBSyncCompletionBlock;
- (bool)shouldRetryForError:(id)arg1;

@end
