
@interface PLFolderJournalEntryPayload : PLGenericAlbumJournalEntryPayload

@property (nonatomic, readonly) NSOrderedSet *childCollectionUUIDs;
@property (nonatomic, readonly) bool isProjectAlbumRootFolder;
@property (nonatomic, readonly) bool isRootFolder;

+ (bool)isValidForPersistenceWithObjectDictionary:(id)arg1 additionalEntityName:(id)arg2;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelProperties;
+ (id)modelPropertiesDescription;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (id)persistedPropertyNamesForEntityNames;
+ (void)updateChildrenOrderingInFolder:(id)arg1 usingChildCollectionUUIDs:(id)arg2 includePendingChanges:(bool)arg3;

- (void)appendAttributeKey:(id)arg1 value:(id)arg2 toDescriptionBuilder:(id)arg3;
- (id)childCollectionUUIDs;
- (bool)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;
- (id)insertAlbumFromDataInManagedObjectContext:(id)arg1;
- (bool)isProjectAlbumRootFolder;
- (bool)isRootFolder;
- (id)payloadValueFromAttributes:(id)arg1 forPayloadProperty:(id)arg2;
- (void)updateAlbum:(id)arg1 includePendingChanges:(bool)arg2;
- (bool)updatePayloadAttributes:(id)arg1 andNilAttributes:(id)arg2 withManagedObject:(id)arg3 forPayloadProperty:(id)arg4;

@end
