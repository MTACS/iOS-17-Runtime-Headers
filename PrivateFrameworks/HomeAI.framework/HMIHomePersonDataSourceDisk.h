
@interface HMIHomePersonDataSourceDisk : HMIPersonDataSourceDisk <HMIHomePersonManagerDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void)addFaceCrops:(id)arg1 completion:(id /* block */)arg2;
- (void)addPersonFaceCrops:(id)arg1 completion:(id /* block */)arg2;
- (void)addPersons:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAllUnassociatedFaceCropsWithCompletion:(id /* block */)arg1;
- (void)fetchSettingsWithCompletion:(id /* block */)arg1;
- (void)removeFaceCropsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)removeFaceprintsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)removePersonsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;

@end
