
@interface PHAssetLibraryScopeProperties : PHAssetPropertySet {
    long long  _pl_shareState;
}

@property (nonatomic, readonly) bool assetIsInOnboardingPreviewState;
@property (nonatomic, readonly) bool assetIsInPhotosSuggestedPreviewState;
@property (nonatomic, readonly) bool assetIsPublishedToLibraryScope;
@property (nonatomic, readonly) bool assetManuallyAddedByUser;
@property (nonatomic, readonly) bool assetManuallyRejectedByUser;
@property (nonatomic, readonly) bool assetRejectedByCamera;
@property (nonatomic, readonly) bool assetRejectedByPhotosSuggester;
@property long long pl_shareState;
@property (nonatomic, readonly) short suggestedByClientType;

+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;

- (bool)assetIsInOnboardingPreviewState;
- (bool)assetIsInPhotosSuggestedPreviewState;
- (bool)assetIsPublishedToLibraryScope;
- (bool)assetManuallyAddedByUser;
- (bool)assetManuallyRejectedByUser;
- (bool)assetRejectedByCamera;
- (bool)assetRejectedByPhotosSuggester;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (long long)pl_shareState;
- (void)setPl_shareState:(long long)arg1;
- (short)suggestedByClientType;

@end
