
@interface BookDataStore.BDSSyncEngine : NSObject <BCCloudDataPrivacyDelegate, BDSCloudSyncDiagnosticSyncEngineInfoProvider, BDSSyncEngineSaltManagerObserver> {
    void BDSAPSDelegatePort;
    void accountChangedPublisher;
    void endFetchingChangesPublisher;
    void invalidTokenZoneIDs;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void maxRecordCountPerBatch;
    void persistFetchCoordinatorGroup;
    void queue;
    void recordChangePublisher;
    void recordDeletionPublisher;
    void registeredDataSourceByRecordType;
    void saltManager;
    void saltObservers;
    void syncEngine;
    void updateMetadataPublisher;
    void validCKZones;
    void waitingPendingModifications;
    void zoneLock;
    void zoneResetsInProgress;
}

+ (id)shared;

- (void).cxx_destruct;
- (void)addSaltChangeObserver:(id)arg1;
- (id)diagnosticSyncEngineInfo;
- (id)enabledCloudKitZones;
- (bool)establishedSalt;
- (id)init;
- (id)recordNameFromRecordType:(id)arg1 identifier:(id)arg2;
- (void)reestablishSalt;
- (void)reestablishSaltIfNeeded;
- (void)resetCloudKitZone:(id)arg1;
- (void)saltManager:(id)arg1 updatedSaltWithVersion:(id)arg2;
- (void)setCloudKitZone:(id)arg1 enabled:(bool)arg2;
- (void)setDatabase:(id)arg1 config:(id)arg2;

@end
