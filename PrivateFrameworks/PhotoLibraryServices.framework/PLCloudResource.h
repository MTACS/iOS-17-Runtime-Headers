
@interface PLCloudResource : PLManagedObject

@property (nonatomic, retain) PLManagedAsset *asset;
@property (nonatomic, retain) NSString *assetUuid;
@property (nonatomic) short cloudLocalState;
@property (nonatomic, retain) PLCloudMaster *cloudMaster;
@property (nonatomic, retain) NSDate *dateCreated;
@property (nonatomic, retain) NSString *filePath;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic, retain) NSString *fingerprint;
@property (nonatomic) long long height;
@property (nonatomic) bool isAvailable;
@property (nonatomic) bool isLocallyAvailable;
@property (nonatomic, retain) NSString *itemIdentifier;
@property (nonatomic, retain) NSDate *lastOnDemandDownloadDate;
@property (nonatomic, retain) NSDate *lastPrefetchDate;
@property (nonatomic) short prefetchCount;
@property (nonatomic, retain) NSDate *prunedAt;
@property (nonatomic, readonly) CPLScopedIdentifier *scopedIdentifier;
@property (nonatomic) int sourceType;
@property (nonatomic) int type;
@property (nonatomic, retain) NSString *uniformTypeIdentifier;
@property (nonatomic) long long width;

+ (void)_copyResourceFileFrom:(id)arg1 to:(id)arg2;
+ (bool)_countOfLocalCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 forMediumSized:(bool)arg3 localCount:(unsigned long long*)arg4 unavailableCount:(unsigned long long*)arg5 error:(id*)arg6;
+ (id)assetUUIDToCloudResourcesForCloudMaster:(id)arg1;
+ (unsigned long long)bytesForAllResourcesInLibrary:(id)arg1;
+ (id)cloudResourceForResourceType:(unsigned long long)arg1 forAssetUuid:(id)arg2 forCloudMaster:(id)arg3;
+ (id)cloudResourcesForResourceType:(unsigned long long)arg1 forCloudMaster:(id)arg2;
+ (bool)countOfLocalCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 localCount:(unsigned long long*)arg3 unavailableCount:(unsigned long long*)arg4 error:(id*)arg5;
+ (bool)countOfMediumOriginalLocalCloudResourcesInManagedObjectContext:(id)arg1 localCount:(unsigned long long*)arg2 unavailableCount:(unsigned long long*)arg3 error:(id*)arg4;
+ (id)duplicateCloudResource:(id)arg1 forAsset:(id)arg2 withFilePath:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 forAsset:(id)arg2 withCPLResource:(id)arg3 adjusted:(bool)arg4 withCreationDate:(id)arg5;
+ (id)legacyCloudResourceForResourceType:(unsigned long long)arg1 forAsset:(id)arg2;
+ (bool)legacyCreateNewResourcesIn:(id)arg1 inManagedObjectContext:(id)arg2 forAsset:(id)arg3;
+ (id)nonLocalResourcesInManagedObjectContext:(id)arg1 forAssetUUIDs:(id)arg2 cplResourceTypes:(id)arg3;
+ (void)resetPrefetchStateForResourcesWithResourceType:(long long)arg1 itemIdentifiers:(id)arg2 inLibrary:(id)arg3;
+ (id)validatedExternalResourceFromCloudResource:(id)arg1 asset:(id)arg2;
+ (id)validatedExternalResourcesUsingLegacyCloudResourcesFromAssetWithCloudMaster:(id)arg1;

- (void)_duplicatePropertiesFromCloudResource:(id)arg1 withFilePath:(id)arg2 forAssetUuid:(id)arg3;
- (void)applyPropertiesFromCloudResource:(id)arg1;
- (id)cplResourceIncludeFile:(bool)arg1;
- (id)description;
- (void)prepareForDeletion;
- (void)repairCloudPlaceholderKindForVideoAsset:(id)arg1;
- (id)scopedIdentifier;
- (void)setIsLocallyAvailable:(bool)arg1;
- (void)setLastPrefetchDate:(id)arg1;
- (void)setPrefetchCount:(short)arg1;
- (void)setPrunedAt:(id)arg1;

@end
