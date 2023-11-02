
@interface SBApplicationBlurContentView : UIView {
    double  _blurDelay;
    UIView * _blurView;
    UIView * _blurredSnapshotView;
    NSString * _bundleIdentifier;
    SBSceneViewAppIconView * _iconView;
    double  _iconViewScale;
    UIView * _liveBlurView;
    NSMutableDictionary * _mapStateToCompletionBlocks;
    SBApplicationBlurSnapshotGenerationContainerView * _snapshotGenerationContainerView;
    unsigned long long  _state;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetViewOriginalSize;
    UIView * _targetViewToBlur;
    UIView * _unblurredCopySnapshotView;
    UIView * _unblurredRealSnapshotView;
}

@property (nonatomic) double blurDelay;
@property (nonatomic, readonly) SBSceneViewAppIconView *iconView;
@property (nonatomic) double iconViewScale;

- (void).cxx_destruct;
- (void)_addCompletionBlock:(id /* block */)arg1 forState:(unsigned long long)arg2;
- (void)_doAnimationToBlurredSnapshotWithFactory:(id)arg1 completion:(id /* block */)arg2;
- (void)_doBlurGenerationWithCompletion:(id /* block */)arg1;
- (void)_fireCompletionBlocksForState:(unsigned long long)arg1;
- (void)_setState:(unsigned long long)arg1;
- (void)animateToBlurredSnapshotWithFactory:(id)arg1 completion:(id /* block */)arg2;
- (double)blurDelay;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)generateAndAnimateToBlurredSnapshotWithAnimationFactory:(id)arg1 completion:(id /* block */)arg2;
- (void)generateBlurredSnapshotWithCompletion:(id /* block */)arg1;
- (id)iconView;
- (double)iconViewScale;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 bundleIdentifier:(id)arg2 icon:(id)arg3 targetViewToBlur:(id)arg4 initialIconScale:(double)arg5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 bundleIdentifier:(id)arg2 targetViewToBlur:(id)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 bundleIdentifier:(id)arg2 targetViewToBlur:(id)arg3 initialIconScale:(double)arg4;
- (void)layoutSubviews;
- (void)setBlurDelay:(double)arg1;
- (void)setIconViewScale:(double)arg1;

@end
