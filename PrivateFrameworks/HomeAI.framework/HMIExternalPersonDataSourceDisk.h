
@interface HMIExternalPersonDataSourceDisk : HMIPersonDataSourceDisk <HMIExternalPersonManagerDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void)addPerson:(id)arg1 completion:(id /* block */)arg2;
- (void)addPersonFaceCrops:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSettingsWithCompletion:(id /* block */)arg1;

@end
