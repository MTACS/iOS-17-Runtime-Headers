
@interface BRCSyncDownOperation : _BRCOperation <BRCOperationSubclass> {
    BRCServerZone * _serverZone;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchInitialZoneIfNecessaryWithCreatedZone:(id)arg1;
- (void)_performAfterFetchingRecordChanges:(id /* block */)arg1;
- (void)_saveInitialServerZoneData:(id)arg1 clientChangeTokenData:(id)arg2;
- (void)_startCreateZoneAndSubscriptionAndSyncDown;
- (void)_startSyncDown;
- (id)createActivity;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (bool)handleZoneNotFoundIfSyncingDownForTheFirstTime:(id)arg1;
- (id)initDeltaSyncWithServerZone:(id)arg1;
- (void)main;
- (bool)shouldRetryForError:(id)arg1;

@end
