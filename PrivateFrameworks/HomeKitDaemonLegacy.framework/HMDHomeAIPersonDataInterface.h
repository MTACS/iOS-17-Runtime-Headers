
@interface HMDHomeAIPersonDataInterface : HMFObject <HMDPersonDataInterface, HMIPersonManagerDataSource> {
    <HMDPersonDataSource> * _dataSource;
    HMIPersonManager * _personManager;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property <HMDPersonDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMIHomePersonManager *homePersonManager;
@property (readonly) HMIPersonManager *personManager;
@property (readonly) HMIExternalPersonManager *photosPersonManager;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)configureWithDataSource:(id)arg1 home:(id)arg2;
- (id)dataSource;
- (void)fetchAllFaceprintsWithCompletion:(id /* block */)arg1;
- (void)fetchAllPersonFaceCropsWithCompletion:(id /* block */)arg1;
- (void)fetchAllPersonsWithCompletion:(id /* block */)arg1;
- (void)fetchFaceCropsForPersonsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchPersonsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)handleRemovedFaceCropWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)handleRemovedFaceprintWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)handleRemovedPersonWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)handleUpdatedFaceprint:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)handleUpdatedIsCurrentDeviceAvailableResident:(bool)arg1;
- (void)handleUpdatedIsDataSyncInProgress:(bool)arg1;
- (void)handleUpdatedPerson:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)handleUpdatedPersonFaceCrop:(id)arg1 mirrorOutputFuture:(id)arg2;
- (id)initWithPersonManager:(id)arg1 workQueue:(id)arg2;
- (void)performCloudPullWithCompletion:(id /* block */)arg1;
- (id)personManager;
- (void)setDataSource:(id)arg1;
- (id)workQueue;

@end
