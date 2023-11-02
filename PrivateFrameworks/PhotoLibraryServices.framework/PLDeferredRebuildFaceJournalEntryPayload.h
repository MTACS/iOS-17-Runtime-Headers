
@interface PLDeferredRebuildFaceJournalEntryPayload : PLManagedObjectJournalEntryPayload

+ (bool)isValidForPersistenceWithObjectDictionary:(id)arg1 additionalEntityName:(id)arg2;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelProperties;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (id)persistedPropertyNamesForEntityNames;

- (id)insertDeferredRebuildFaceFromDataInManagedObjectContext:(id)arg1;

@end
