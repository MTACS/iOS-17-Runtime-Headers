
@interface HDCloudSyncCachedCloudState : NSObject {
    HDAssertion * _accessibilityAssertion;
    long long  _changedRecordsCount;
    long long  _changedZonesCount;
    long long  _deletedRecordsCount;
    long long  _deletedZonesCount;
    long long  _operationCountForAnalytics;
    HDProfile * _profile;
    HDCloudSyncRepository * _repository;
}

@property (nonatomic) long long changedRecordsCount;
@property (nonatomic) long long changedZonesCount;
@property (nonatomic) long long deletedRecordsCount;
@property (nonatomic) long long deletedZonesCount;
@property (nonatomic) long long operationCountForAnalytics;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) HDCloudSyncRepository *repository;

- (void).cxx_destruct;
- (bool)addDatabaseWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 error:(id*)arg3;
- (bool)addZoneWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)attachmentZoneForContainerID:(id)arg1 error:(id*)arg2;
- (long long)changedRecordsCount;
- (long long)changedZonesCount;
- (id)contextSyncZoneForContainerID:(id)arg1 error:(id*)arg2;
- (long long)deletedRecordsCount;
- (long long)deletedZonesCount;
- (id)detailedDescription;
- (id)init;
- (id)initWithRepository:(id)arg1 accessibilityAssertion:(id)arg2;
- (id)masterZoneForContainerID:(id)arg1 error:(id*)arg2;
- (long long)operationCountForAnalytics;
- (id)privateMetadataZoneForContainerID:(id)arg1 error:(id*)arg2;
- (id)profile;
- (id)repository;
- (bool)resetServerChangeTokenForContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 error:(id*)arg3;
- (id)serverChangeTokenForContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 error:(id*)arg3;
- (void)setChangedRecordsCount:(long long)arg1;
- (void)setChangedZonesCount:(long long)arg1;
- (void)setDeletedRecordsCount:(long long)arg1;
- (void)setDeletedZonesCount:(long long)arg1;
- (void)setOperationCountForAnalytics:(long long)arg1;
- (bool)setServerChangeToken:(id)arg1 containerIdentifier:(id)arg2 databaseScope:(long long)arg3 error:(id*)arg4;
- (id)unifiedSyncZoneForContainerID:(id)arg1 error:(id*)arg2;
- (bool)unitTest_deleteDatabaseWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 error:(id*)arg3;
- (id)zoneForRecordID:(id)arg1 containerIdentifier:(id)arg2 error:(id*)arg3;
- (id)zoneIdentifiersForContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 error:(id*)arg3;
- (id)zoneIdentifiersRequiringFetchForContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 error:(id*)arg3;
- (id)zoneIdentifiersWithIdentityLossForContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 error:(id*)arg3;
- (id)zonesByIdentifierForContainers:(id)arg1 error:(id*)arg2 filter:(id /* block */)arg3;
- (id)zonesByIdentifierWithError:(id*)arg1;
- (id)zonesByIdentifierWithError:(id*)arg1 filter:(id /* block */)arg2;
- (id)zonesForContainerID:(id)arg1 error:(id*)arg2;

@end
