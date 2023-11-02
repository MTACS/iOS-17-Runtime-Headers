
@interface PLPersonJournalEntryPayload : PLManagedObjectJournalEntryPayload

@property (nonatomic, readonly) int cloudVerifiedType;
@property (nonatomic, readonly) NSDictionary *contactMatchingDictionary;
@property (nonatomic, readonly) NSNumber *detectionType;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) short keyFacePickSource;
@property (nonatomic, readonly) unsigned int manualOrder;
@property (nonatomic, readonly) NSString *mergeTargetPersonUUID;
@property (nonatomic, readonly) NSString *personUri;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) int verifiedType;

+ (bool)isValidForPersistenceWithObjectDictionary:(id)arg1 additionalEntityName:(id)arg2;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelProperties;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (id)persistedPropertyNamesForEntityNames;
+ (void)updateMergeTargetPersonWithPersonUUIDMapping:(id)arg1 fromDataInManagedObjectContext:(id)arg2;

- (void)appendAttributeKey:(id)arg1 value:(id)arg2 toDescriptionBuilder:(id)arg3;
- (void)applyPayloadProperty:(id)arg1 toManagedObject:(id)arg2 key:(id)arg3 payloadAttributesToUpdate:(id)arg4;
- (int)cloudVerifiedType;
- (bool)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;
- (id)contactMatchingDictionary;
- (id)detectionType;
- (id)displayName;
- (id)fullName;
- (id)initWithUserFeedback:(id)arg1 changedKeys:(id)arg2;
- (id)insertPersonFromDataInManagedObjectContext:(id)arg1;
- (short)keyFacePickSource;
- (unsigned int)manualOrder;
- (id)mergeTargetPersonUUID;
- (id)payloadValueFromAttributes:(id)arg1 forPayloadProperty:(id)arg2;
- (id)personUri;
- (int)type;
- (bool)updatePayloadAttributes:(id)arg1 andNilAttributes:(id)arg2 withManagedObject:(id)arg3 forPayloadProperty:(id)arg4;
- (int)verifiedType;

@end
