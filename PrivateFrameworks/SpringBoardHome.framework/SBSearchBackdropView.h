
@interface SBSearchBackdropView : UIView <SBHProgressiveBlur, SBSpotlightBackgroundWeighting> {
    MTMaterialView * _materialView;
    double  _transitionProgress;
    bool  _transitioningToBlurred;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double spotlightBackgroundWeighting;
@property (readonly) Class superclass;
@property (nonatomic) double transitionProgress;
@property (getter=isTransitioningToBlurred, nonatomic, readonly) bool transitioningToBlurred;

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

+ (long long)_builtInMaterialRecipeForStyle:(long long)arg1;

- (void).cxx_destruct;
- (id)_materialViewForStyle:(long long)arg1;
- (void)completeIncrementalTransitionSuccessfully:(bool)arg1;
- (void)completeTransitionSuccessfully:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (bool)isTransitioningToBlurred;
- (void)prepareForTransitionToBlurred:(bool)arg1;
- (void)setTransitionProgress:(double)arg1;
- (double)transitionProgress;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (void)setSpotlightBackgroundWeighting:(double)arg1;
- (double)spotlightBackgroundWeighting;

@end
