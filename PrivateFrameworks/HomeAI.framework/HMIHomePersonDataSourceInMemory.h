
@interface HMIHomePersonDataSourceInMemory : HMFObject <HMIHomePersonManagerDataSource> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _personToFaceCrops;
    NSSet * _removedPersonFaceCrops;
    NSMutableSet * _unassociatedFaceCrops;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (readonly) NSMutableDictionary *personToFaceCrops;
@property (readonly) NSSet *removedPersonFaceCrops;
@property (readonly) Class superclass;
@property (readonly) NSMutableSet *unassociatedFaceCrops;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)addFaceCrops:(id)arg1 completion:(id /* block */)arg2;
- (void)addFaceprints:(id)arg1 completion:(id /* block */)arg2;
- (void)addPersonFaceCrops:(id)arg1 completion:(id /* block */)arg2;
- (void)addPersons:(id)arg1 completion:(id /* block */)arg2;
- (void)associateFaceCropsWithUUIDs:(id)arg1 toPersonWithUUID:(id)arg2 forSource:(long long)arg3 completion:(id /* block */)arg4;
- (id)existingFaceCropUUIDs;
- (id)existingPersonFaceCropUUIDs;
- (id)existingPersonUUIDs;
- (void)fetchAllFaceprintsWithCompletion:(id /* block */)arg1;
- (void)fetchAllPersonFaceCropsWithCompletion:(id /* block */)arg1;
- (void)fetchAllPersonsWithCompletion:(id /* block */)arg1;
- (void)fetchAllUnassociatedFaceCropsWithCompletion:(id /* block */)arg1;
- (void)fetchFaceCropsForPersonsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchPersonsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSettingsWithCompletion:(id /* block */)arg1;
- (id)init;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)performCloudPullWithCompletion:(id /* block */)arg1;
- (id)personToFaceCrops;
- (void)removeFaceCropsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)removeFaceprintsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)removePersonsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (id)removedPersonFaceCrops;
- (id)unassociatedFaceCrops;
- (id)workQueue;

@end
