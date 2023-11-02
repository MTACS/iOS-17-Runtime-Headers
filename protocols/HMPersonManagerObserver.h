
@protocol HMPersonManagerObserver <NSObject>

@optional

- (void)personManager:(HMPersonManager *)arg1 didRemoveFaceCropsWithUUIDs:(NSSet *)arg2;
- (void)personManager:(HMPersonManager *)arg1 didRemoveFaceprintsWithUUIDs:(NSSet *)arg2;
- (void)personManager:(HMPersonManager *)arg1 didRemovePersonsWithUUIDs:(NSSet *)arg2;
- (void)personManager:(HMPersonManager *)arg1 didUpdateFaceprints:(NSSet *)arg2;
- (void)personManager:(HMPersonManager *)arg1 didUpdatePersonFaceCrops:(NSSet *)arg2;
- (void)personManager:(HMPersonManager *)arg1 didUpdatePersons:(NSSet *)arg2;
- (void)personManager:(HMPersonManager *)arg1 didUpdateUnassociatedFaceCrops:(NSSet *)arg2;

@end
