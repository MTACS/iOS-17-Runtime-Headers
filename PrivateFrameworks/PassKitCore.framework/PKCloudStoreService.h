
@interface PKCloudStoreService : NSObject <PKCloudStoreCoordinatorDelegate> {
    PKXPCService * _remoteService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(bool)arg2 completion:(id /* block */)arg3;
- (void)applePayContainerItemsFromDate:(id)arg1 toDate:(id)arg2 completion:(id /* block */)arg3;
- (void)changeHistoryForContainerIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)checkTLKsMissingWithCompletion:(id /* block */)arg1;
- (void)cloudStoreRecordArrayWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)cloudStoreStatusForContainer:(id)arg1 completion:(id /* block */)arg2;
- (void)createInvitationForRecipientHandle:(id)arg1 zoneName:(id)arg2 containerName:(id)arg3 qualityOfService:(long long)arg4 completion:(id /* block */)arg5;
- (void)createZone:(id)arg1 containerName:(id)arg2 completion:(id /* block */)arg3;
- (void)declineInvitationForRecipientHandle:(id)arg1 zoneName:(id)arg2 containerName:(id)arg3 qualityOfService:(long long)arg4 completion:(id /* block */)arg5;
- (void)deleteZone:(id)arg1 containerName:(id)arg2 completion:(id /* block */)arg3;
- (void)diagnosticInfoForContainerWithName:(id)arg1 completion:(id /* block */)arg2;
- (void)diagnosticSnapshotForContainerWithName:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)errorHandlerForMethod:(SEL)arg1 completion:(id /* block */)arg2;
- (void)fetchAndStoreRecordsForTransactionSourceIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)generateRandomTransactionForTransactionSourceIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 completion:(id /* block */)arg3;
- (void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(id /* block */)arg4;
- (void)itemOfItemTypeFromAllZones:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(id /* block */)arg4;
- (void)performAction:(long long)arg1 inContainerWithName:(id)arg2 completion:(id /* block */)arg3;
- (void)performBackgroundRecordChangesSyncWithCompletion:(id /* block */)arg1;
- (void)performBackgroundTransactionSyncFromDate:(id)arg1 completion:(id /* block */)arg2;
- (void)populateEvents:(id)arg1 forAccountIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)removeAllItems:(unsigned long long)arg1 inZoneName:(id)arg2 containerName:(id)arg3 storeLocally:(bool)arg4 completion:(id /* block */)arg5;
- (void)removeRecordWithRecordName:(id)arg1 zoneName:(id)arg2 containerName:(id)arg3 completion:(id /* block */)arg4;
- (void)resetApplePayManateeViewWithCompletion:(id /* block */)arg1;
- (void)resetContainerWithIdentifier:(id)arg1 zoneNames:(id)arg2 completion:(id /* block */)arg3;
- (void)setupCloudDatabaseForContainerName:(id)arg1 completion:(id /* block */)arg2;
- (void)shareForZoneName:(id)arg1 containerName:(id)arg2 qualityOfService:(long long)arg3 completion:(id /* block */)arg4;
- (void)simulateCloudStorePushForContainerIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)updateCloudStoreWithLocalItemsWithConfigurations:(id)arg1 completion:(id /* block */)arg2;
- (void)uploadTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2 includeServerData:(bool)arg3 completion:(id /* block */)arg4;

@end
