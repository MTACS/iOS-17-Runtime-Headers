
@interface PLFetchingAlbumJournalEntryPayload : PLGenericAlbumJournalEntryPayload

+ (bool)isValidForPersistenceWithObjectDictionary:(id)arg1 additionalEntityName:(id)arg2;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelProperties;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (id)persistedPropertyNamesForEntityNames;

- (void)_fixHasLocationSmartAlbum;
- (id)insertAlbumFromDataInManagedObjectContext:(id)arg1;
- (void)migrateMergedPayloadWithUpdatePayloads:(id)arg1;

@end
