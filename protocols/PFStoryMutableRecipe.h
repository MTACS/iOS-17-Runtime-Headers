
@protocol PFStoryMutableRecipe <PFStoryRecipe>

@required

- (void)addAsset:(id <PFStoryRecipeAsset>)arg1;
- (void)addLibrary:(id <PFStoryRecipeLibrary>)arg1;
- (void)addPresentation:(id <PFStoryRecipePresentation>)arg1;
- (NSDictionary *)autoEditDecisionLists;
- (NSString *)contentIdentifier;
- (<PFStoryRecipeStyle> *)currentStyle;
- (long long)majorVersion;
- (long long)minorVersion;
- (struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; })overallDurationInfo;
- (void)removeAssetWithIdentifier:(NSString *)arg1;
- (void)removeLibraryWithKind:(long long)arg1;
- (void)removePresentationWithIdentifier:(NSString *)arg1;
- (NSDictionary *)seedSongIdentifiersByCatalog;
- (void)setAutoEditDecisionLists:(NSDictionary *)arg1;
- (void)setContentIdentifier:(NSString *)arg1;
- (void)setCurrentStyle:(id <PFStoryRecipeStyle>)arg1;
- (void)setMajorVersion:(long long)arg1;
- (void)setMinorVersion:(long long)arg1;
- (void)setOverallDurationInfo:(struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; })arg1;
- (void)setSeedSongIdentifiersByCatalog:(NSDictionary *)arg1;

@end
