
@interface PLDetectedFaceJournalEntryPayload : PLManagedObjectJournalEntryPayload <PLCloudAssetPayloadRestorePayload, PLFaceRebuildDescription>

@property (nonatomic, retain) NSString *assetIdentifier;
@property (nonatomic, readonly) long long assetIdentifierType;
@property (nonatomic, readonly) double centerX;
@property (nonatomic, readonly) double centerY;
@property (nonatomic, readonly) int cloudNameSource;
@property (getter=isClusterRejected, nonatomic, readonly) bool clusterRejected;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (getter=isManual, nonatomic, readonly) bool manual;
@property (nonatomic, readonly) int nameSource;
@property (getter=isRepresentative, nonatomic, readonly) bool representative;
@property (nonatomic, readonly) double size;
@property (readonly) Class superclass;

+ (bool)isValidForPersistenceWithObjectDictionary:(id)arg1 additionalEntityName:(id)arg2;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelProperties;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (id)persistedPropertyNamesForEntityNames;

- (id)_insertDeferredRebuildFaceForPersonUUID:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)_insertDeferredRebuildFacesFromDataInManagedObjectContext:(id)arg1;
- (id)additionalDescription;
- (void)appendAttributeKey:(id)arg1 value:(id)arg2 toDescriptionBuilder:(id)arg3;
- (id)assetIdentifier;
- (long long)assetIdentifierType;
- (double)bodyCenterX;
- (double)bodyCenterY;
- (double)bodyHeight;
- (double)bodyWidth;
- (double)centerX;
- (double)centerY;
- (int)cloudNameSource;
- (id)clusterRejectedPersonsUUIDs;
- (bool)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;
- (id)detectionType;
- (id)insertDetectedFaceWithAsset:(id)arg1 inManagedObjectContext:(id)arg2 checkExisting:(bool)arg3;
- (bool)insertFaceFromDataInManagedObjectContext:(id)arg1 allowDeferred:(bool*)arg2;
- (bool)insertWithAsset:(id)arg1 inManagedObjectContext:(id)arg2;
- (bool)isClusterRejected;
- (bool)isDeferrable;
- (bool)isHidden;
- (bool)isKeyFace;
- (bool)isManual;
- (bool)isRepresentative;
- (int)nameSource;
- (id)payloadValueFromAttributes:(id)arg1 forPayloadProperty:(id)arg2;
- (id)personUUID;
- (id)rejectedPersonsUUIDs;
- (void)setAssetIdentifier:(id)arg1;
- (double)size;
- (bool)updatePayloadAttributes:(id)arg1 andNilAttributes:(id)arg2 withManagedObject:(id)arg3 forPayloadProperty:(id)arg4;

@end
