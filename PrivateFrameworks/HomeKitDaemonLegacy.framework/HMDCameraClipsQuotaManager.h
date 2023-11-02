
@interface HMDCameraClipsQuotaManager : NSObject <HMDDatabaseDelegate, HMFLogging> {
    HMBCloudDatabase * _cloudDatabase;
}

@property (readonly) HMBCloudDatabase *cloudDatabase;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_quotaErrorFromServerError:(id)arg1;
+ (id)_quotaServerErrorFromServerError:(id)arg1;
+ (id)defaultManager;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)_addCodeOperationWithFunctionName:(id)arg1 request:(id)arg2 responseClass:(Class)arg3;
- (id)cloudDatabase;
- (id)database:(id)arg1 willRemoveZoneWithName:(id)arg2 isPrivate:(bool)arg3;
- (id)disableCloudStorageForZoneWithName:(id)arg1;
- (id)enableCloudStorageForZoneWithName:(id)arg1;
- (id)initWithDatabase:(id)arg1;
- (id)logIdentifier;

@end
