
@interface HMIExternalPersonDataSourceHomeKit : HMFObject <HMFLogging, HMIExternalPersonManagerDataSource> {
    HMPhotosPersonManager * _photosPersonManager;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) HMPhotosPersonManager *photosPersonManager;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addFaceprints:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAllFaceprintsWithCompletion:(id /* block */)arg1;
- (void)fetchAllPersonFaceCropsWithCompletion:(id /* block */)arg1;
- (void)fetchAllPersonsWithCompletion:(id /* block */)arg1;
- (void)fetchFaceCropsForPersonsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchPersonsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSettingsWithCompletion:(id /* block */)arg1;
- (id)initWithHMPhotosPersonManager:(id)arg1;
- (id)logIdentifier;
- (void)performCloudPullWithCompletion:(id /* block */)arg1;
- (id)photosPersonManager;
- (void)removeFaceprintsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)setPhotosPersonManager:(id)arg1;
- (id)workQueue;

@end
