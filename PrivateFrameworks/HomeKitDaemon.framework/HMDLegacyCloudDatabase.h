
@interface HMDLegacyCloudDatabase : HMBCloudDatabase <HMBCloudZoneDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)legacyCloudDatabaseWithLocalDatabase:(id)arg1;
+ (id)recordZoneIDForLegacyName:(id)arg1;

- (id)createLegacyZone:(id)arg1 controllerIdentity:(id)arg2 delegate:(id)arg3 error:(id*)arg4;
- (id)initWithLocalDatabase:(id)arg1;
- (id)mirrorLegacyZone:(id)arg1 controllerIdentity:(id)arg2 delegate:(id)arg3 error:(id*)arg4;

@end
