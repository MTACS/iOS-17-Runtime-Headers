
@interface PXStoryRecipeClipUtilities : NSObject

+ (bool)asset:(id)arg1 isClassifiedAs:(id)arg2;
+ (bool)assetHasHighCurationScore:(id)arg1;
+ (bool)assetHasSignificantFaceArea:(id)arg1;
+ (bool)assetIsPet:(id)arg1;
+ (bool)assetIsPortrait:(id)arg1;
+ (bool)assetIsPortraitAspectWithLargeVerticalFaceArea:(id)arg1;
+ (bool)canRotate1UpClipsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 clipCatalog:(id)arg2 maxAdjacent1Ups:(long long)arg3;
+ (bool)canRotateAsset:(id)arg1;
+ (id)doNotRotateSceneIdentifiers;
+ (id)doNotRotateWithSkySceneIdentifiers;
+ (id)peopleSceneIdentifiers;
+ (id)petSceneIdentifiers;
+ (id)skySceneIdentifiers;

@end
