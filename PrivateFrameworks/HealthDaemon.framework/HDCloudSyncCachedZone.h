
@interface HDCloudSyncCachedZone : NSObject {
    HDAssertion * _accessibilityAssertion;
    HDCloudSyncRepository * _repository;
    HDCloudSyncZoneIdentifier * _zoneIdentifier;
    long long  _zoneType;
}

@property (nonatomic, readonly) HDCloudSyncRepository *repository;
@property (nonatomic, readonly, copy) HDCloudSyncZoneIdentifier *zoneIdentifier;
@property (nonatomic, readonly) long long zoneType;

- (void).cxx_destruct;
- (bool)addRecord:(id)arg1 error:(id*)arg2;
- (id)cloudSyncRecordForCKRecord:(id)arg1 error:(id*)arg2;
- (long long)containsRecordWithRecordID:(id)arg1 error:(id*)arg2;
- (long long)containsRecordsWithError:(id*)arg1;
- (bool)deleteRecordID:(id)arg1 error:(id*)arg2;
- (bool)deleteZoneWithError:(id*)arg1;
- (void)handleCloudError:(id)arg1 operation:(id)arg2 container:(id)arg3 database:(id)arg4;
- (id)initForZoneIdentifier:(id)arg1 repository:(id)arg2 accessibilityAssertion:(id)arg3;
- (long long)needsFetchWithError:(id*)arg1;
- (id)recordForRecordID:(id)arg1 class:(Class)arg2 error:(id*)arg3;
- (bool)recordsForClass:(Class)arg1 epoch:(long long)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
- (id)recordsForClass:(Class)arg1 error:(id*)arg2;
- (id)recordsForClass:(Class)arg1 error:(id*)arg2 filter:(id /* block */)arg3;
- (id)repository;
- (bool)resetZoneServerChangeTokenWithError:(id*)arg1;
- (id)serverChangeTokenWithError:(id*)arg1;
- (bool)setServerChangeToken:(id)arg1 fetchComplete:(bool)arg2 error:(id*)arg3;
- (id)zoneIdentifier;
- (id)zoneShareWithError:(id*)arg1;
- (long long)zoneType;

@end
