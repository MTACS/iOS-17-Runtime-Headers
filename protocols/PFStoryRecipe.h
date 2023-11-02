
@protocol PFStoryRecipe <NSCopying, NSMutableCopying>

@required

- (<PFStoryRecipeAsset> *)assetAtIndex:(long long)arg1;
- (<PFStoryRecipeAsset> *)assetWithKind:(long long)arg1 identifier:(NSString *)arg2;
- (NSDictionary *)autoEditDecisionLists;
- (NSString *)contentIdentifier;
- (<PFStoryRecipeStyle> *)currentStyle;
- (<PFStoryRecipeSongAsset> *)currentStyleSongAsset;
- (NSString *)diagnosticDescription;
- (void)enumerateAssetsWithKind:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PFStoryRecipeAsset> *, bool*, void*
- (bool)isEqualToRecipe:(id <PFStoryRecipe>)arg1;
- (<PFStoryRecipeLibrary> *)libraryWithKind:(long long)arg1;
- (long long)majorVersion;
- (long long)minorVersion;
- (long long)numberOfAssets;
- (long long)numberOfPresentations;
- (struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; })overallDurationInfo;
- (<PFStoryRecipePresentation> *)presentationAtIndex:(long long)arg1;
- (<PFStoryRecipeSongAsset> *)seedSongAssetForCatalog:(NSString *)arg1;
- (NSDictionary *)seedSongIdentifiersByCatalog;

@end
