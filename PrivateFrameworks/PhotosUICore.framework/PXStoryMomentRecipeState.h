
@interface PXStoryMomentRecipeState : NSObject {
    PFStoryAutoEditFrequencyTable * _basicRecipeFrequencyTable;
    unsigned long long  _previous2UpPanRelativeMotion;
    unsigned long long  _previous3UpPanRelativeMotion;
    unsigned long long  _previousBaseMomentRecipe;
    long long  _previousEmptySpaceStrategy;
    unsigned long long  _previousPanDirection;
    unsigned long long  _previousPortraitMomentRecipe;
    unsigned long long  _previousRotateDirection;
    unsigned long long  _previousScaleDirection;
    unsigned long long  _previousSingleAssetMomentRecipe;
}

- (void).cxx_destruct;
- (unsigned long long)_nextModuleRecipeWithModuleClipRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 clipCatalog:(id)arg2;
- (id)init;
- (id)initWithRandomNumberGenerator:(id)arg1;
- (unsigned long long)next2UpPanRelativeMotion;
- (unsigned long long)next3UpPanRelativeMotion;
- (unsigned long long)nextBaseMomentRecipe;
- (long long)nextEmptySpaceStrategy;
- (unsigned long long)nextNUpPanRelativeMotionWithN:(long long)arg1;
- (unsigned long long)nextPanDirection;
- (unsigned long long)nextRotateDirection;
- (unsigned long long)nextScaleDirection;
- (unsigned long long)nextSingleAssetMomentRecipe;

@end
