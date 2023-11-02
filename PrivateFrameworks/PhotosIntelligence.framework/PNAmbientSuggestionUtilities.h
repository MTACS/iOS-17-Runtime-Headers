
@interface PNAmbientSuggestionUtilities : NSObject

+ (double)_cropScoreWithAsset:(id)arg1;
+ (struct CGSize { double x1; double x2; })_deviceScreenSize;
+ (bool)_hasAcceptableCropScoreWithAsset:(id)arg1;
+ (long long)assetIsEligibleForDisplay:(id)arg1 modelSet:(id)arg2;
+ (id)fetchHighlightAssetsInPhotoLibrary:(id)arg1 limit:(unsigned long long)arg2 randomSeed:(unsigned long long)arg3;
+ (id)fetchMemoryKeyAssetsInPhotoLibrary:(id)arg1 limit:(unsigned long long)arg2 randomSeed:(unsigned long long)arg3;
+ (long long)suggestionIsEligibleForDisplay:(id)arg1 asset:(id)arg2 modelSet:(id)arg3;

@end
