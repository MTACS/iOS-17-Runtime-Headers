
@interface PLGenericAlbumJournalEntryPayload : PLManagedObjectJournalEntryPayload

@property (nonatomic, readonly) NSString *cloudGUID;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSString *customKeyAssetUUID;
@property (nonatomic, readonly) bool customSortAscending;
@property (nonatomic, readonly) int customSortKey;
@property (nonatomic, readonly) NSString *importSessionID;
@property (nonatomic, readonly) NSString *importedByBundleIdentifier;
@property (nonatomic, readonly) bool isInTrash;
@property (nonatomic, readonly) bool isPinned;
@property (nonatomic, readonly) bool isPrototype;
@property (nonatomic, readonly) NSNumber *kind;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, retain) NSData *userQueryData;

+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;

- (void)appendAttributeKey:(id)arg1 value:(id)arg2 toDescriptionBuilder:(id)arg3;
- (id)cloudGUID;
- (bool)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;
- (id)creationDate;
- (id)customKeyAssetUUID;
- (bool)customSortAscending;
- (int)customSortKey;
- (id)importSessionID;
- (id)importedByBundleIdentifier;
- (id)insertAlbumFromDataInManagedObjectContext:(id)arg1;
- (bool)isInTrash;
- (bool)isPinned;
- (bool)isPrototype;
- (id)kind;
- (id)payloadValueFromAttributes:(id)arg1 forPayloadProperty:(id)arg2;
- (void)setUserQueryData:(id)arg1;
- (id)title;
- (void)updateAlbum:(id)arg1 includePendingChanges:(bool)arg2;
- (bool)updatePayloadAttributes:(id)arg1 andNilAttributes:(id)arg2 withManagedObject:(id)arg3 forPayloadProperty:(id)arg4;
- (id)userQueryData;

@end
