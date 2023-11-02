
@interface SBHomeScreenBackdropView : SBHomeScreenBackdropViewBase {
    UIViewFloatAnimatableProperty * _backdropFloatAnimatableProperty;
    UIImage * _blurredContentSnapshotImage;
    UIImageView * _blurredContentSnapshotImageView;
    NSString * _materialRecipeName;
    MTMaterialView * _materialView;
    unsigned long long  _materialViewAnimationCount;
    bool  _waitingForBackdropViewToRender;
}

@property (nonatomic, copy) NSString *materialRecipeName;

- (void).cxx_destruct;
- (void)_configureBackdropAnimatableProperty;
- (void)_invalidateBackdropSnapshot;
- (void)_resetHomeScreenBlurredContentSnapshotImage;
- (void)_setupBackdropViewWithRecipe:(long long)arg1 scaleAdjustment:(id /* block */)arg2;
- (void)_updateBackdropViewIfNeeded;
- (void)_updateBackdropViewIfNeededInvalidatingSnapshot:(bool)arg1;
- (void)beginRequiringBackdropViewForReason:(id)arg1;
- (void)beginRequiringLiveBackdropViewForReason:(id)arg1;
- (void)cancelInProcessAnimations;
- (void)endRequiringBackdropViewForReason:(id)arg1;
- (void)endRequiringLiveBackdropViewForReason:(id)arg1;
- (id)homeScreenBlurredContentSnapshotImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 materialRecipe:(long long)arg2 scaleAdjustment:(id /* block */)arg3;
- (bool)isOpaque;
- (id)materialRecipeName;
- (void)setBlurProgress:(double)arg1 behaviorMode:(long long)arg2 completion:(id /* block */)arg3;
- (void)setMaterialRecipeName:(id)arg1;

@end
