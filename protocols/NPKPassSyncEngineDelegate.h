
@protocol NPKPassSyncEngineDelegate <NSObject>

@required

- (void)passSyncEngine:(void *)arg1 requestsAddPassData:(void *)arg2 forSyncStateItem:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NPKPassSyncEngine *, NSData *, NPKPassSyncStateItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)passSyncEngine:(void *)arg1 requestsRemovePassWithUniqueID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NPKPassSyncEngine *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)passSyncEngine:(void *)arg1 requestsUpdatePassData:(void *)arg2 forSyncStateItem:(void *)arg3 baseManifestHashForPartialUpdate:(void *)arg4 remoteAssetsForPartialUpdate:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 12: NPKPassSyncEngine *, NSData *, NPKPassSyncStateItem *, NSData *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, void*
- (void)passSyncEngine:(NPKPassSyncEngine *)arg1 sendProposedReconciledState:(NPKPassSyncState *)arg2;
- (void)passSyncEngine:(NPKPassSyncEngine *)arg1 sendReconciledStateAcceptedWithHash:(NSData *)arg2;
- (void)passSyncEngine:(NPKPassSyncEngine *)arg1 sendReconciledStateUnrecognizedWithHash:(NSData *)arg2 version:(unsigned long long)arg3 currentPassSyncState:(NPKPassSyncState *)arg4;
- (void)passSyncEngine:(NPKPassSyncEngine *)arg1 sendStateChange:(NPKPassSyncChange *)arg2;
- (void)passSyncEngine:(NPKPassSyncEngine *)arg1 sendStateChangeProcessedWithUUID:(NSUUID *)arg2 changeAccepted:(bool)arg3 fullPassRequired:(bool)arg4;

@optional

- (void)passSyncEngine:(NPKPassSyncEngine *)arg1 finishedProcessingChange:(NPKPassSyncChange *)arg2;
- (void)passSyncEngine:(NPKPassSyncEngine *)arg1 receivedStateChangeProcessed:(NPKPassSyncChange *)arg2 changeAccepted:(bool)arg3;
- (void)passSyncEngineEncounteredUnexpectedEvent:(NPKPassSyncEngine *)arg1;
- (void)passSyncEngineStateChanged:(NPKPassSyncEngine *)arg1;

@end
