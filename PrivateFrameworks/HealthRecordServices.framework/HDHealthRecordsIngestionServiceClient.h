
@interface HDHealthRecordsIngestionServiceClient : NSObject <_HKXPCExportable> {
    HKProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_synchronousPerformWithProxyHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)addCardToWalletForRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)connectionInvalidated;
- (void)dealloc;
- (void)didUpdateSignedClinicalDataRecord:(id)arg1;
- (id)exportedInterface;
- (id)handleSignedClinicalDataFeature:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (void)parseSignedClinicalData:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)processOriginalSignedClinicalDataRecords:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)remoteInterface;
- (void)reverifySignatureForRecord:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)triggerDownloadIssuerRegistryForCatalogURL:(id)arg1 shouldPersist:(bool)arg2 completion:(id /* block */)arg3;
- (void)triggerDownloadPublicKeysForCatalogURL:(id)arg1 shouldPersist:(bool)arg2 completion:(id /* block */)arg3;
- (void)willDeleteSignedClinicalDataRecordWithSyncIdentifier:(id)arg1;

@end
