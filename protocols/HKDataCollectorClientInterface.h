
@protocol HKDataCollectorClientInterface

@required

- (void)clientRemote_beginCollectionWithConfiguration:(HKDataCollectorCollectionConfiguration *)arg1 lastPersistedDatum:(HKQuantityDatum *)arg2 registrationUUID:(NSUUID *)arg3;
- (void)clientRemote_collectThroughDate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)clientRemote_collectionConfigurationDidChange:(HKDataCollectorCollectionConfiguration *)arg1;
- (void)clientRemote_finishedPersistenceForBatch:(NSUUID *)arg1 error:(NSError *)arg2;
- (void)clientRemote_receivedBatch:(NSUUID *)arg1 error:(NSError *)arg2;
- (void)clientRemote_synchronizeWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
