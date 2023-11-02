
@interface PLDetectedFaceComputeJournalEntryPayload : PLDetectedFaceJournalEntryPayload

+ (id)entityName;
+ (bool)isValidForPersistenceWithObjectDictionary:(id)arg1 additionalEntityName:(id)arg2;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelProperties;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadAdapterForManagedObject:(id)arg1;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (id)persistedPropertyNamesForEntityNames;

- (bool)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;
- (bool)insertWithAsset:(id)arg1 inManagedObjectContext:(id)arg2;

@end
