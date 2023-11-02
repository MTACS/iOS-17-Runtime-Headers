
@interface PXStoryMomentRecipeProvider : NSObject {
    NSMutableDictionary * _clipDebugInfos;
    NSString * _colorGradeCategory;
    PFStoryAutoEditConfiguration * _configuration;
    long long  _songPace;
    PXStoryMomentRecipeState * _state;
}

- (void).cxx_destruct;
- (long long)_incomingTransitionKindForRecipe:(unsigned long long)arg1;
- (long long)_innerTransitionKindForRecipe:(unsigned long long)arg1;
- (bool)_isSongEnergetic;
- (long long)_motionStyleForRecipe:(unsigned long long)arg1;
- (id)_nextBaseMomentRecipeWithPreviousClip:(id)arg1;
- (struct { long long x1; double x2; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_3_1_1; struct { unsigned long long x_2_2_1; } x_3_1_2; struct { unsigned long long x_3_2_1; } x_3_1_3; struct { BOOL x_4_2_1; BOOL x_4_2_2; } x_3_1_4; } x3; })_nextEmptySpaceBreakTransitionForMotion:(struct { long long x1; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_2_1_1; struct { unsigned long long x_2_2_1; } x_2_1_2; struct { unsigned long long x_3_2_1; } x_2_1_3; } x2; })arg1;
- (id)_nextModuleRecipeWithModuleClipRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 clipCatalog:(id)arg2;
- (id)_nextNUpRevealRecipeWithPreviousClip:(id)arg1;
- (id)_nextSingleAssetRecipeWithPreviousClip:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfLength:(long long)arg1 centeredOnIndex:(long long)arg2 withinRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)_recipeFromRecipeType:(unsigned long long)arg1 previousClip:(id)arg2;
- (id)init;
- (id)initWithConfiguration:(id)arg1 colorGradeCategory:(id)arg2 songPace:(long long)arg3 randomNumberGenerator:(id)arg4;
- (void)provideDebugInfoForClip:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)provideRecipeForMomentClipRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withClipCatalog:(id)arg2 usingBlock:(id /* block */)arg3;

@end
