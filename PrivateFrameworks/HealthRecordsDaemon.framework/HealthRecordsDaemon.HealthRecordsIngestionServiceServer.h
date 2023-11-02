
@interface HealthRecordsDaemon.HealthRecordsIngestionServiceServer : NSObject <HDHealthRecordsIngestionServiceInterface, _HKXPCExportable> {
    void cancellables;
    void client;
}

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)init;
- (id)remoteInterface;
- (void)remote_addCardToWalletForRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_didUpdateSignedClinicalDataRecord:(id)arg1;
- (void)remote_handleSignedClinicalDataFeature:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_parseSignedClinicalData:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)remote_processOriginalSignedClinicalDataRecords:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)remote_reverifySignatureForRecord:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)remote_triggerDownloadIssuerRegistryForCatalogURL:(id)arg1 shouldPersist:(bool)arg2 completion:(id /* block */)arg3;
- (void)remote_triggerDownloadPublicKeysForCatalogURL:(id)arg1 shouldPersist:(bool)arg2 completion:(id /* block */)arg3;
- (void)remote_willDeleteSignedClinicalDataRecordWithSyncIdentifier:(id)arg1;

@end
