
@interface HMIHomePersonDataSourceHomeKit : HMFObject <HMFLogging, HMIHomePersonManagerDataSource> {
    HMHomePersonManager * _homePersonManager;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) HMHomePersonManager *homePersonManager;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addFaceCrops:(id)arg1 completion:(id /* block */)arg2;
- (void)addFaceprints:(id)arg1 completion:(id /* block */)arg2;
- (void)addPersonFaceCrops:(id)arg1 completion:(id /* block */)arg2;
- (void)addPersons:(id)arg1 completion:(id /* block */)arg2;
- (void)associateFaceCropsWithUUIDs:(id)arg1 toPersonWithUUID:(id)arg2 forSource:(long long)arg3 completion:(id /* block */)arg4;
- (void)fetchAllFaceprintsWithCompletion:(id /* block */)arg1;
- (void)fetchAllPersonFaceCropsWithCompletion:(id /* block */)arg1;
- (void)fetchAllPersonsWithCompletion:(id /* block */)arg1;
- (void)fetchAllUnassociatedFaceCropsWithCompletion:(id /* block */)arg1;
- (void)fetchFaceCropsForPersonsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchPersonsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSettingsWithCompletion:(id /* block */)arg1;
- (id)homePersonManager;
- (id)initWithHMHomePersonManager:(id)arg1;
- (id)logIdentifier;
- (void)performCloudPullWithCompletion:(id /* block */)arg1;
- (void)removeFaceCropsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)removeFaceprintsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)removePersonsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)setHomePersonManager:(id)arg1;
- (id)workQueue;

@end
