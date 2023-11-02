
@interface PNSuggestionWallpaperUtilities : NSObject

+ (bool)_assetPassesFRCInstantPlayback:(id)arg1;
+ (id /* block */)_assetSortComparatorForPortraitWallpaper;
+ (id)_blockedImportedByBundleIdentifiers;
+ (bool)_cacheExistsForAsset:(id)arg1;
+ (id)_coldStartPortraitWallpaperInPhotoLibrary:(id)arg1 candidatePersons:(id)arg2 passingFilterBlock:(id /* block */)arg3 maximumNumberOfTries:(unsigned long long)arg4 targetCount:(unsigned long long)arg5;
+ (id)_facePredicateForPortraitWallpaperCandidatesWithPersonLocalIdentifiers:(id)arg1 deviceAspectRatio:(double)arg2;
+ (id)_fetchMeContactIdentifier;
+ (id)_fetchSettlingEffectSuggestionKeyAssetsWithOptions:(id)arg1;
+ (id)_fetchSuggestedMePersonLocalIdentifierInPhotoLibrary:(id)arg1;
+ (id)_filterSuggestions:(id)arg1 withSingleFeature:(unsigned long long)arg2 included:(bool)arg3;
+ (id)_mePersonUUIDInPhotoLibrary:(id)arg1;
+ (id)_mostRecentAssetDateInPhotoLibrary:(id)arg1;
+ (id)_personFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)_settlingEffectAssetFetchPropertySets;
+ (unsigned long long)_settlingEffectVideoDecisionForAsset:(id)arg1;
+ (bool)assetIsEligibleForSettlingEffect:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestWallpaperCropForAsset:(id)arg1 classification:(unsigned long long)arg2 outputCropScore:(double*)arg3 outputLayoutAcceptable:(bool*)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestWallpaperCropForAsset:(id)arg1 classification:(unsigned long long)arg2 outputCropScore:(double*)arg3 outputLayoutAcceptable:(bool*)arg4 layoutConfiguration:(id)arg5;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestWallpaperCropForSuggestion:(id)arg1 outputCropScore:(double*)arg2 outputLayoutAcceptable:(bool*)arg3;
+ (id)coldStartDeviceOwnerWallpaperInPhotoLibrary:(id)arg1;
+ (id)coldStartPortraitWallpaperInPhotoLibrary:(id)arg1;
+ (id)coldStartPortraitWallpaperInPhotoLibrary:(id)arg1 passingFilterBlock:(id /* block */)arg2 maximumNumberOfTries:(unsigned long long)arg3;
+ (double)cropScoreWithAsset:(id)arg1 classification:(unsigned long long)arg2 passesClockOverlap:(bool*)arg3 cropZoomRatio:(double*)arg4 orientation:(long long)arg5;
+ (id)fetchKnownPersonLocalIdentifiersInPhotoLibrary:(id)arg1 fetchLimit:(unsigned long long)arg2;
+ (id)fetchLivePhotoTabAssetsWithOptions:(id)arg1;
+ (id)fetchLivePhotoTabHighlightCandidateAssetsWithOptions:(id)arg1 excludeExistingWallpapers:(bool)arg2;
+ (id)fetchLivePhotoTabHighlightSettlingEffectAssetsWithOptions:(id)arg1 excludeExistingWallpapers:(bool)arg2;
+ (id)fetchPersonLocalIdentifiersForSuggestionSubtype:(unsigned short)arg1 photoLibrary:(id)arg2;
+ (id)fetchPortraitAssetsWithOptions:(id)arg1;
+ (id)fetchSettlingEffectSuggestionsInPhotoLibrary:(id)arg1;
+ (id)fetchSettlingEffectSuggestionsWithOptions:(id)arg1;
+ (id)fetchWallpaperGallerySuggestionsInPhotoLibrary:(id)arg1;
+ (id)filterSuggestions:(id)arg1 excludingSingleFeature:(unsigned long long)arg2;
+ (id)filterSuggestions:(id)arg1 includingSingleFeature:(unsigned long long)arg2;
+ (bool)hasAnyKnownPersonLocalIdentifierInPhotoLibrary:(id)arg1;
+ (id)knownPersonLocalIdentifiersInPhotoLibrary:(id)arg1;
+ (unsigned long long)mediaAnalysisTypeForPosterClassification:(unsigned long long)arg1;
+ (unsigned long long)posterClassificationForMedia:(id)arg1 descriptorType:(long long)arg2;
+ (unsigned long long)posterClassificationForSuggestionMedia:(id)arg1;
+ (unsigned long long)posterClassificationForSuggestionSubtype:(unsigned short)arg1;
+ (id)predicateForPortraitWallpaperCandidatesWithPersonLocalIdentifiers:(id)arg1;
+ (id)predicateForPortraitWallpaperCandidatesWithPersonLocalIdentifiers:(id)arg1 deviceAspectRatio:(double)arg2;
+ (long long)primaryOrientation;
+ (id)randomNumberGeneratorForWallpaperDonation;
+ (id)randomizedSuggestionsFromSuggestions:(id)arg1 limit:(unsigned long long)arg2;
+ (void)rejectWallpaperSuggestions:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)rejectWallpaperSuggestionsUsingAsset:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)rejectWallpaperSuggestionsUsingAssetOfSuggestion:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)settlingEffectAssetInternalSortDescriptors;
+ (id)settlingEffectLivePhotoPredicate;
+ (id)wallpaperCroppingDebugKeyValuePairsForAsset:(id)arg1;
+ (bool)wallpaperDemoModeEnabled;
+ (id)wallpaperGalleryFeaturedPhotoSortedSuggestionsFromSuggestions:(id)arg1;
+ (id)wallpaperGallerySmartAlbumSuggestionsFromSuggestions:(id)arg1;

@end
