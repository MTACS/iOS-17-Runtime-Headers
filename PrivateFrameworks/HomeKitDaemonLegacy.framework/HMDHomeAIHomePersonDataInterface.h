
@interface HMDHomeAIHomePersonDataInterface : HMDHomeAIPersonDataInterface <HMFLogging, HMIHomePersonManagerDataSource> {
    HMIHomePersonManager * _homePersonManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMIHomePersonManager *homePersonManager;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addFaceCrops:(id)arg1 completion:(id /* block */)arg2;
- (void)addFaceprints:(id)arg1 completion:(id /* block */)arg2;
- (void)addPersonFaceCrops:(id)arg1 completion:(id /* block */)arg2;
- (void)addPersons:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAllUnassociatedFaceCropsWithCompletion:(id /* block */)arg1;
- (void)fetchSettingsWithCompletion:(id /* block */)arg1;
- (void)handleFaceMisclassificationForFaceCropData:(id)arg1 personUUID:(id)arg2;
- (void)handleUpdatedSettings:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)handleUpdatedUnassociatedFaceCrop:(id)arg1 mirrorOutputFuture:(id)arg2;
- (id)homePersonManager;
- (id)initWithHomePersonManager:(id)arg1 workQueue:(id)arg2;
- (id)initWithPersonManagerUUID:(id)arg1 homeUUID:(id)arg2 workQueue:(id)arg3;
- (id)logIdentifier;
- (void)removeFaceCropsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)removeFaceprintsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)removePersonsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;

@end
