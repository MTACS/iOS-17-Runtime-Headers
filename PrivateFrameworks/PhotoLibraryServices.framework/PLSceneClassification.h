
@interface PLSceneClassification : PLManagedObject

@property (nonatomic, retain) PLAdditionalAssetAttributes *assetAttributes;
@property (nonatomic, retain) PLAdditionalAssetAttributes *assetAttributesForTemporalSceneClassifications;
@property (nonatomic) short classificationType;
@property (nonatomic) double confidence;
@property (nonatomic) double duration;
@property (nonatomic) long long packedBoundingBoxRect;
@property (nonatomic) unsigned int sceneIdentifier;
@property (nonatomic) double startTime;

+ (id)PLJunkSceneClassificationIDForLabel:(id)arg1;
+ (unsigned long long)_pool_countOfOrphanedSceneClassificationsWithLimit:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (void)batchFetchScenesByAssetObjectIDWithAssetObjectIDs:(id)arg1 library:(id)arg2 includeTemporalClassifications:(bool)arg3 completion:(id /* block */)arg4;
+ (unsigned long long)countOfOrphanedSceneClassificationsWithLimit:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 asset:(id)arg2 sceneIdentifier:(int)arg3 confidence:(double)arg4 packedBoundingBoxRect:(long long)arg5 startTime:(double)arg6 duration:(double)arg7 classificationType:(long long)arg8;
+ (bool)isUtilityAssetForSharedLibrary:(id)arg1;

- (void)_checkForOrphanedSceneClassification;
- (bool)_validateInterpropertyValues:(id*)arg1;
- (id)debugLogDescription;
- (bool)isDocumentClassification;
- (bool)isScreenshotClassification;
- (bool)validateForInsert:(id*)arg1;
- (bool)validateForUpdate:(id*)arg1;
- (void)willSave;

@end
