
@interface PFStoryConcreteMutableRecipe : PFStoryConcreteRecipe <PFStoryMutableRecipe>

@property (nonatomic, copy) NSArray *assets;
@property (nonatomic, retain) NSDictionary *autoEditDecisionLists;
@property (nonatomic, copy) NSString *contentIdentifier;
@property (nonatomic, copy) <PFStoryRecipeStyle> *currentStyle;
@property (nonatomic, readonly, copy) <PFStoryRecipeSongAsset> *currentStyleSongAsset;
@property (nonatomic, readonly) NSString *diagnosticDescription;
@property (nonatomic, copy) NSArray *libraries;
@property (nonatomic) long long majorVersion;
@property (nonatomic) long long minorVersion;
@property (nonatomic, readonly) long long numberOfAssets;
@property (nonatomic, readonly) long long numberOfPresentations;
@property (nonatomic) struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; } overallDurationInfo;
@property (nonatomic, copy) NSArray *presentations;
@property (nonatomic, copy) NSDictionary *seedSongIdentifiersByCatalog;

- (void)addAsset:(id)arg1;
- (void)addLibrary:(id)arg1;
- (void)addPresentation:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)removeAssetWithIdentifier:(id)arg1;
- (void)removeLibraryWithKind:(long long)arg1;
- (void)removePresentationWithIdentifier:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setAutoEditDecisionLists:(id)arg1;
- (void)setContentIdentifier:(id)arg1;
- (void)setCurrentStyle:(id)arg1;
- (void)setLibraries:(id)arg1;
- (void)setMajorVersion:(long long)arg1;
- (void)setMinorVersion:(long long)arg1;
- (void)setOverallDurationInfo:(struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; })arg1;
- (void)setPresentations:(id)arg1;
- (void)setSeedSongIdentifiersByCatalog:(id)arg1;

@end
