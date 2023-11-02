
@interface CKDPCSCacheZoneFetchOperation : CKDPCSCacheFetchOperation {
    bool  _rolledPCSForZone;
    bool  _shouldCreateZoneishPCS;
}

@property (nonatomic, readonly) bool needsZoneishPCS;
@property (nonatomic) bool rolledPCSForZone;
@property (nonatomic) bool shouldCreateZoneishPCS;
@property (nonatomic, readonly) CKRecordZoneID *zoneID;
@property (nonatomic, retain) CKDZonePCSData *zonePCSData;

- (bool)_checkAndUpdateZonePCSIfNeeded;
- (bool)_createAdditionalPCS;
- (bool)_decryptPCS;
- (void)_decryptZonePCSInSharedDatabase;
- (void)_decryptZonePCSUsingServiceIdentities;
- (void)_fetchDepedentPCSInSharedDatabase;
- (bool)_fetchDependentPCS;
- (bool)_fetchPCSDataFromDatabase;
- (bool)_fetchPCSDataFromServer;
- (void)_handleDecryptedZonePCSData:(id)arg1 withError:(id)arg2;
- (void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2;
- (void)_saveNewPCSOnZone:(id)arg1 completion:(id /* block */)arg2;
- (bool)_savePCSDataToCache;
- (bool)_saveUpdatedPCSToServer;
- (void)_saveZoneToServer:(id)arg1 completion:(id /* block */)arg2;
- (void)_saveZoneToServer:(id)arg1 withPCS:(struct _OpaquePCSShareProtection { }*)arg2 zoneishPCS:(struct _OpaquePCSShareProtection { }*)arg3 previousEtag:(id)arg4 completion:(id /* block */)arg5;
- (void)_willRetryFetch;
- (bool)hasAllPCSData;
- (id)itemTypeName;
- (bool)needsZoneishPCS;
- (int)operationType;
- (bool)rolledPCSForZone;
- (void)setRolledPCSForZone:(bool)arg1;
- (void)setShouldCreateZoneishPCS:(bool)arg1;
- (void)setZonePCSData:(id)arg1;
- (bool)shouldCreateZoneishPCS;
- (id)zoneID;
- (id)zonePCSData;

@end
