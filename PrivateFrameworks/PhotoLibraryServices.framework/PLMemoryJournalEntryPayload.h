
@interface PLMemoryJournalEntryPayload : PLManagedObjectJournalEntryPayload

@property (nonatomic, readonly) NSSet *curatedAssetUUIDs;
@property (nonatomic, readonly) NSOrderedSet *customUserAssetUUIDs;
@property (nonatomic, readonly) NSSet *extendedCuratedAssetUUIDs;
@property (nonatomic, readonly) NSString *keyAssetUUID;
@property (nonatomic, readonly) NSSet *movieCuratedAssetUUIDs;
@property (nonatomic, readonly) NSSet *representativeAssetUUIDs;
@property (nonatomic, readonly) NSSet *userCuratedAssetUUIDs;

+ (bool)isValidForPersistenceWithObjectDictionary:(id)arg1 additionalEntityName:(id)arg2;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelProperties;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (id)persistedPropertyNamesForEntityNames;

- (void)appendAttributeKey:(id)arg1 value:(id)arg2 toDescriptionBuilder:(id)arg3;
- (void)applyPayloadProperty:(id)arg1 toManagedObject:(id)arg2 key:(id)arg3 payloadAttributesToUpdate:(id)arg4;
- (bool)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;
- (id)curatedAssetUUIDs;
- (id)customUserAssetUUIDs;
- (id)extendedCuratedAssetUUIDs;
- (bool)hasAllAssetsAvailableInManagedObjectContext:(id)arg1 includePendingAssetChanges:(bool)arg2;
- (id)initWithUserFeedback:(id)arg1 changedKeys:(id)arg2;
- (id)insertMemoryFromDataInManagedObjectContext:(id)arg1;
- (id)keyAssetUUID;
- (id)movieCuratedAssetUUIDs;
- (id)payloadValueFromAttributes:(id)arg1 forPayloadProperty:(id)arg2;
- (id)representativeAssetUUIDs;
- (bool)updateAssetsInMemory:(id)arg1 includePendingAssetChanges:(bool)arg2;
- (bool)updatePayloadAttributes:(id)arg1 andNilAttributes:(id)arg2 withManagedObject:(id)arg3 forPayloadProperty:(id)arg4;
- (id)userCuratedAssetUUIDs;

@end
