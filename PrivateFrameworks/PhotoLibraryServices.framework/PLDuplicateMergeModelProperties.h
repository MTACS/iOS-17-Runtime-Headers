
@interface PLDuplicateMergeModelProperties : NSObject {
    PLLazyObject * _lazyMergePropertyMap;
    PLPhotoLibrary * _library;
    PLDuplicateAsset * _targetAsset;
}

+ (void)_addPropertyToActionMap:(id)arg1 name:(id)arg2 action:(long long)arg3;
+ (id)_additionalAssetAttributesMergePropertyMap;
+ (id)_assetDescriptionMergePropertyMap;
+ (id)_assetMergePropertyMap;
+ (id)_mergePropertyMap;

- (void).cxx_destruct;
- (void)_customActionProcessingWithSourceDuplicateAsset:(id)arg1 entityName:(id)arg2 propertyName:(id)arg3 type:(long long)arg4;
- (bool)_isValidForDateCreatedOverwriteWithSource:(id)arg1;
- (bool)_isValidForOverwriteWithSourceProperty:(id)arg1 targetProperty:(id)arg2;
- (bool)_isValidForTimezoneOverwriteWithSource:(id)arg1;
- (bool)_isValidForTitleOverwriteWithSource:(id)arg1;
- (bool)_isValidManagedObject:(id)arg1 forEntityName:(id)arg2;
- (id)_managedObjectFromDuplicateAsset:(id)arg1 matchingEntityName:(id)arg2;
- (void)_mergeActionProcessingWithSourceDuplicateAsset:(id)arg1 entityName:(id)arg2 propertyName:(id)arg3;
- (void)_mergeAlbumRelationshipsFromSource:(id)arg1;
- (void)_mergeCaptionFromSource:(id)arg1;
- (void)_mergeDateFromSource:(id)arg1;
- (void)_mergeFavoriteFromSource:(id)arg1;
- (void)_mergeKeywordsFromSource:(id)arg1;
- (void)_mergeMemoriesBeingCustomUserAssetsFromSource:(id)arg1;
- (void)_mergeMemoriesBeingKeyAssetFromSource:(id)arg1;
- (void)_mergeMemoriesBeingMovieCuratedAssetsFromSource:(id)arg1;
- (void)_mergeMemoriesBeingUserCuratedAssetsFromSource:(id)arg1;
- (void)_mergeMemoryBeingCuratedAssetsFromSource:(id)arg1;
- (void)_mergeMemoryBeingExtendedCuratedAssetsFromSource:(id)arg1;
- (void)_mergeMemoryBeingRepresentativeAssetsFromSource:(id)arg1;
- (void)_mergeTimezoneFromSource:(id)arg1;
- (void)_mergeTitleFromSource:(id)arg1;
- (void)_postProcessingWithSourceDuplicateAsset:(id)arg1 type:(long long)arg2;
- (void)_resourcePropertyCopyDateCreatedFromSource:(id)arg1;
- (void)_resourcePropertyCopyExtendedAttributesFromSource:(id)arg1;
- (void)_resourcePropertyCopyMediaMetadataFromSource:(id)arg1;
- (void)dealloc;
- (id)initWithTargetAsset:(id)arg1 photoLibrary:(id)arg2;
- (bool)isRecentlyModifiedSourceAsset:(id)arg1;
- (id)mergePropertyMap;
- (bool)transferPropertiesFromSourceAsset:(id)arg1 propertyMergeType:(long long)arg2 error:(id*)arg3;

@end
