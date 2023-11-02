
@protocol HMDDatabase <NSObject>

@required

+ (void)registerQueries;

- (NAFuture *)acceptInvitation:(HMBShareInvitation *)arg1;
- (void)addDelegate:(id <HMDDatabaseDelegate>)arg1;
- (HMBCloudDatabase *)cloudDatabase;
- (HMDDatabaseFetchZonesResult *)existingPrivateZonesWithName:(NSString *)arg1 configuration:(HMBCloudZoneConfiguration *)arg2 delegate:(id <HMBLocalZoneDelegate><HMBCloudZoneDelegate>)arg3 error:(id*)arg4;
- (HMBCloudZoneID *)existingSharedZoneIDWithName:(NSString *)arg1;
- (HMBLocalDatabase *)localDatabase;
- (HMDDatabaseFetchZonesResult *)privateZonesWithName:(NSString *)arg1 configuration:(HMBCloudZoneConfiguration *)arg2 delegate:(id <HMBLocalZoneDelegate><HMBCloudZoneDelegate>)arg3 error:(id*)arg4;
- (NAFuture *)registerSharedSubscriptionForExternalRecordType:(NSString *)arg1;
- (void)removeDelegate:(id <HMDDatabaseDelegate>)arg1;
- (NAFuture *)removeLocalAndCloudDataForLocalZone:(HMBLocalZone *)arg1;
- (NAFuture *)removePrivateZonesWithName:(NSString *)arg1;
- (NAFuture *)removeSharedZonesWithName:(NSString *)arg1;
- (HMDDatabaseFetchZonesResult *)sharedZonesWithID:(HMBCloudZoneID *)arg1 configuration:(HMBCloudZoneConfiguration *)arg2 delegate:(id <HMBLocalZoneDelegate><HMBCloudZoneDelegate>)arg3 error:(id*)arg4;
- (void)start;
- (NAFuture *)synchronizeSharedZones;
- (NAFuture *)unregisterSharedSubscriptionForExternalRecordType:(NSString *)arg1;

@end
