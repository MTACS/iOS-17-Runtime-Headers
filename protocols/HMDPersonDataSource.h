
@protocol HMDPersonDataSource <NSObject>

@required

- (NAFuture *)addOrUpdateFaceCrops:(NSSet *)arg1;
- (NAFuture *)addOrUpdateFaceprints:(NSSet *)arg1;
- (NAFuture *)addOrUpdatePersons:(NSSet *)arg1;
- (NAFuture *)addOrUpdatePersons:(NSSet *)arg1 andRemovePersonsWithUUIDs:(NSSet *)arg2;
- (NAFuture *)associateFaceCropsWithUUIDs:(NSSet *)arg1 toPersonWithUUID:(NSUUID *)arg2 forSource:(long long)arg3;
- (HMDPersonDataBatchChange *)createBatchChange;
- (NAFuture *)disassociateFaceCropsWithUUIDs:(NSSet *)arg1;
- (void)enumerateFaceCropsUsingBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMFaceCrop *, bool*, void*
- (void)enumerateFaceprintsUsingBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMFaceprint *, bool*, void*
- (void)enumeratePersonFaceCropsUsingBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMPersonFaceCrop *, bool*, void*
- (void)enumeratePersonsUsingBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMPerson *, bool*, void*
- (void)enumerateUnassociatedFaceCropsUsingBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMFaceCrop *, bool*, void*
- (NSSet *)faceCropUUIDsForPersonWithUUID:(NSUUID *)arg1;
- (NSSet *)faceCropsForPersonsWithUUIDs:(NSSet *)arg1;
- (NSSet *)faceCropsWithUUIDs:(NSSet *)arg1;
- (NSSet *)faceprintsForFaceCropsWithUUIDs:(NSSet *)arg1;
- (void)handleFaceMisclassificationForFaceCropData:(NSData *)arg1 personUUID:(NSUUID *)arg2;
- (bool)isCurrentDeviceAvailableResident;
- (bool)isDataAvailable;
- (NAFuture *)performCloudPull;
- (NSSet *)personsWithUUIDs:(NSSet *)arg1;
- (NAFuture *)removeFaceCropsWithUUIDs:(NSSet *)arg1;
- (NAFuture *)removeFaceprintsWithUUIDs:(NSSet *)arg1;
- (NAFuture *)removePersonsWithUUIDs:(NSSet *)arg1;
- (<HMDPersonManagerSettings> *)settings;

@end
