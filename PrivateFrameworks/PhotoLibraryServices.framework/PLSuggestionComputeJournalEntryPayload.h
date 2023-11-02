
@interface PLSuggestionComputeJournalEntryPayload : PLManagedObjectJournalEntryPayload <PLCloudAssetPayloadRestorePayload>

@property (nonatomic, retain) NSString *assetIdentifier;
@property (nonatomic, readonly) long long assetIdentifierType;

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

- (void)appendAttributeKey:(id)arg1 value:(id)arg2 toDescriptionBuilder:(id)arg3;
- (id)assetIdentifier;
- (long long)assetIdentifierType;
- (bool)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;
- (bool)insertWithAsset:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)payloadValueFromAttributes:(id)arg1 forPayloadProperty:(id)arg2;
- (void)setAssetIdentifier:(id)arg1;
- (bool)updatePayloadAttributes:(id)arg1 andNilAttributes:(id)arg2 withManagedObject:(id)arg3 forPayloadProperty:(id)arg4;

@end
