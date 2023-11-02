
@interface PLCloudMaster : PLManagedObject <PLSyncableMaster>

@property (nonatomic, retain) NSSet *assets;
@property (nonatomic) short cloudLocalState;
@property (nonatomic, retain) NSString *cloudMasterGUID;
@property (nonatomic) NSString *codecName;
@property (nonatomic, retain) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) short fullSizeJPEGSource;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *importDate;
@property (nonatomic, retain) NSString *importSessionID;
@property (nonatomic) short importedBy;
@property (nonatomic, retain) NSString *importedByBundleIdentifier;
@property (nonatomic, retain) NSString *importedByDisplayName;
@property (nonatomic, readonly, retain) id localID;
@property (nonatomic, retain) PLCloudMasterMediaMetadata *mediaMetadata;
@property (nonatomic, retain) NSString *mediaMetadataType;
@property (nonatomic, retain) PLMomentShare *momentShare;
@property (nonatomic, retain) NSString *originalFilename;
@property (nonatomic) short originalOrientation;
@property (nonatomic, copy) NSString *originatingAssetIdentifier;
@property (nonatomic) short placeholderState;
@property (nonatomic, retain) NSSet *resources;
@property (nonatomic, retain) CPLScopedIdentifier *sourceMasterForDuplicationCPLScopedIdentifier;
@property (nonatomic, retain) NSString *sourceMasterForDuplicationIdentifier;
@property (nonatomic, retain) NSString *sourceMasterForDuplicationScopeIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSSet *transientModernResources;
@property (nonatomic, retain) NSString *uniformTypeIdentifier;
@property (nonatomic) short videoFrameRate;

+ (id)_originalTypes;
+ (id)cloudMasterWithGUID:(id)arg1 inMomentShare:(id)arg2 prefetchResources:(bool)arg3 inManagedObjectContext:(id)arg4;
+ (id)cloudMasterWithScopedIdentifier:(id)arg1 prefetchResources:(bool)arg2 inManagedObjectContext:(id)arg3;
+ (id)cloudMastersByScopedIdentifiers:(id)arg1 relationshipKeyPathsForPrefetching:(id)arg2 inLibrary:(id)arg3;
+ (id)cloudMastersWithScopedIdentifiers:(id)arg1 relationshipKeyPathsForPrefetching:(id)arg2 inLibrary:(id)arg3;
+ (void)deleteAllCloudMastersInManagedObjectContext:(id)arg1;
+ (void)deleteMasterIfNecessary:(id)arg1 inLibrary:(id)arg2;
+ (void)deleteOrphanedMastersWithManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (unsigned long long)fullSizeJPEGSourceForUTI:(id)arg1 andImageDimensions:(struct CGSize { double x1; double x2; })arg2;
+ (id)insertIntoPhotoLibrary:(id)arg1 withCloudMasterGUID:(id)arg2 inMomentShare:(id)arg3;
+ (id)listOfSyncedProperties;
+ (void)resetCloudMastersStateInManagedObjectContext:(id)arg1;

- (void)_promptForNilScopeIdentifierRadar;
- (id)allMasterResources;
- (bool)allOriginalsAreLocallyAvailableForAssetUuid:(id)arg1 useOriginalAltInsteadOfOriginal:(bool)arg2;
- (bool)allOriginalsAreUploaded;
- (void)applyPropertiesFromCPLMasterChange:(id)arg1;
- (void)awakeFromInsert;
- (id)cplFullRecord;
- (id)cplMasterPropertyChangeForAsset:(id)arg1;
- (id)cplPropertyRecord;
- (id)description;
- (bool)hasResourcesOtherThanForAssetUuid:(id)arg1;
- (bool)isSyncableChange;
- (id)localID;
- (id)originalFilenameForResourceType:(unsigned long long)arg1 filePath:(id)arg2;
- (id)payloadID;
- (id)payloadsForChangedKeys:(id)arg1;
- (void)rm_applyExpungeableResourceStatesFromCPLMasterChange:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)rm_applyResourcesFromCPLMasterChange:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)rm_assetUUIDToCloudResources;
- (id)rm_cloudResourceForResourceType:(unsigned long long)arg1 forAssetUuid:(id)arg2;
- (id)rm_cloudResourcesForResourceType:(unsigned long long)arg1;
- (id)scopedIdentifier;
- (void)setSourceMasterForDuplicationCPLScopedIdentifier:(id)arg1;
- (unsigned long long)sizeOfOriginal;
- (id)sourceMasterForDuplicationCPLScopedIdentifier;
- (bool)supportsCloudUpload;
- (void)updateImportedByBundleIdentifier:(id)arg1;
- (void)updateImportedByDisplayName:(id)arg1;

@end
