
@interface PXStoryRecipeClipTransitionProvider : NSObject {
    PFStoryAutoEditFrequencyTable * _baseTransitionTable;
    PFStoryAutoEditConfiguration * _configuration;
    PFStoryAutoEditFrequencyTable * _interModuleTransitionTable;
    PFStoryAutoEditFrequencyTable * _interMomentTransitionTable;
    PFStoryAutoEditFrequencyTable * _nUpTransitionTable;
    PFStoryAutoEditFrequencyTable * _portraitTransitionTable;
    <PFRandomNumberGenerator> * _randomNumberGenerator;
    long long  _songPace;
}

@property (nonatomic, readonly) PFStoryAutoEditConfiguration *configuration;
@property (nonatomic, readonly) long long songPace;

- (void).cxx_destruct;
- (bool)_cameraMovement:(long long)arg1 allowsTransition:(long long)arg2;
- (struct { long long x1; double x2; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_3_1_1; struct { unsigned long long x_2_2_1; } x_3_1_2; struct { unsigned long long x_3_2_1; } x_3_1_3; struct { BOOL x_4_2_1; BOOL x_4_2_2; } x_3_1_4; } x3; })_nextTransitionFromTable:(id)arg1 currentMotion:(struct { long long x1; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_2_1_1; struct { unsigned long long x_2_2_1; } x_2_1_2; struct { unsigned long long x_3_2_1; } x_2_1_3; } x2; })arg2 nextMotion:(struct { long long x1; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_2_1_1; struct { unsigned long long x_2_2_1; } x_2_1_2; struct { unsigned long long x_3_2_1; } x_2_1_3; } x2; })arg3;
- (id)configuration;
- (id)init;
- (id)initWithConfiguration:(id)arg1 colorGradeCategory:(id)arg2 songPace:(long long)arg3 randomNumberGenerator:(id)arg4;
- (struct { long long x1; double x2; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_3_1_1; struct { unsigned long long x_2_2_1; } x_3_1_2; struct { unsigned long long x_3_2_1; } x_3_1_3; struct { BOOL x_4_2_1; BOOL x_4_2_2; } x_3_1_4; } x3; })nextIntraMomentTransition;
- (void)provideTransitionsForMomentClipRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withClipCatalog:(id)arg2 usingBlock:(id /* block */)arg3;
- (long long)songPace;

@end
