
@interface HMIPersonDataSourceDisk : HMFObject <HMFLogging, HMIPersonManagerDataSource> {
    NSUUID * _homeUUID;
    NSURL * _sourceURL;
    NSUUID * _sourceUUID;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *homeUUID;
@property (readonly) NSURL *sourceURL;
@property (readonly) NSUUID *sourceUUID;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)getStoragePath;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)addFaceprints:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAllFaceprintsWithCompletion:(id /* block */)arg1;
- (void)fetchAllPersonFaceCropsWithCompletion:(id /* block */)arg1;
- (void)fetchAllPersonsWithCompletion:(id /* block */)arg1;
- (void)fetchFaceCropsForPersonsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchPersonsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (id)homeUUID;
- (id)initWithHomeUUID:(id)arg1 sourceUUID:(id)arg2 error:(id*)arg3;
- (void)performCloudPullWithCompletion:(id /* block */)arg1;
- (id)sourceURL;
- (id)sourceUUID;
- (id)workQueue;

@end
