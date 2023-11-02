
@interface HKSignedClinicalDataStore : NSObject <HKSignedClinicalDataStoreClientInterface, _HKXPCExportable> {
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)_fetchServerProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)connectionInvalidated;
- (void)deleteSignedClinicalDataRecord:(id)arg1 completion:(id /* block */)arg2;
- (id)description;
- (id)exportedInterface;
- (void)fetchCurrentRegistryIssuerContentVersionWithCompletion:(id /* block */)arg1;
- (void)fetchCurrentRegistryPublicKeyContentVersionWithCompletion:(id /* block */)arg1;
- (void)fetchPublicKeyEntriesWithCompletion:(id /* block */)arg1;
- (void)fetchPublicKeyWithKeyID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSignedClinicalDataGroupBackingMedicalRecord:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (void)insertOrReplaceIssuerRegistryEntries:(id)arg1 completion:(id /* block */)arg2;
- (void)insertOrReplacePublicKeyEntries:(id)arg1 completion:(id /* block */)arg2;
- (id)logPrefix;
- (void)parseSignedClinicalData:(id)arg1 options:(long long)arg2 completion:(id /* block */)arg3;
- (void)reextractSignedClinicalDataRecordsForAccountWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)remoteInterface;
- (void)removePublicKeyEntriesWithKeyIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)reverifySignatureForRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)setRegistryIssuerContentVersion:(id)arg1 completion:(id /* block */)arg2;
- (void)setRegistryPublicKeyContentVersion:(id)arg1 completion:(id /* block */)arg2;
- (void)storeSignedClinicalData:(id)arg1 completion:(id /* block */)arg2;
- (void)triggerDownloadIssuerRegistryForCatalogURL:(id)arg1 shouldPersist:(bool)arg2 completion:(id /* block */)arg3;
- (void)triggerDownloadPublicKeysForCatalogURL:(id)arg1 shouldPersist:(bool)arg2 completion:(id /* block */)arg3;

@end
