
@interface PLAlbumListJournalEntryPayload : PLManagedObjectJournalEntryPayload

@property (nonatomic, readonly) short albumListType;
@property (nonatomic, readonly) NSOrderedSet *albumUUIDs;

+ (bool)isValidForPersistenceWithObjectDictionary:(id)arg1 additionalEntityName:(id)arg2;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelProperties;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (id)persistedPropertyNamesForEntityNames;

- (short)albumListType;
- (id)albumUUIDs;
- (void)appendAttributeKey:(id)arg1 value:(id)arg2 toDescriptionBuilder:(id)arg3;
- (bool)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;
- (id)insertAlbumListFromDataInManagedObjectContext:(id)arg1;
- (id)payloadValueFromAttributes:(id)arg1 forPayloadProperty:(id)arg2;
- (void)updateAlbumList:(id)arg1;
- (bool)updatePayloadAttributes:(id)arg1 andNilAttributes:(id)arg2 withManagedObject:(id)arg3 forPayloadProperty:(id)arg4;

@end
