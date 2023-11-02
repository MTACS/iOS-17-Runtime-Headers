
@interface _SFFluidProgressView : UIView <WBSFluidProgressControllerDelegate> {
    bool  _alignsToTop;
    UIView * _clippingView;
    double  _cornerRadius;
    <_SFFluidProgressViewDelegate> * _delegate;
    bool  _progressAnimationSuppressed;
    UIView * _progressBar;
    UIColor * _progressBarFillColor;
    WBSFluidProgressState * _state;
}

@property (nonatomic) bool alignsToTop;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFFluidProgressViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool progressAnimationSuppressed;
@property (nonatomic, retain) UIColor *progressBarFillColor;
@property (getter=isShowingProgress, nonatomic, readonly) bool showingProgress;
@property (readonly) Class superclass;

+ (double)defaultHeight;

- (void).cxx_destruct;
- (void)_animateUsingDefaultTiming:(bool)arg1 stepAnimationTime:(double)arg2 options:(unsigned long long)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)_finishProgressBarWithDuration:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_progressBarBoundsForValue:(double)arg1;
- (bool)alignsToTop;
- (double)cornerRadius;
- (id)delegate;
- (void)fluidProgressController:(id)arg1 setProgressToCurrentPosition:(id)arg2;
- (void)fluidProgressController:(id)arg1 startFluidProgressBar:(id)arg2 animateFillFade:(bool)arg3;
- (void)fluidProgressController:(id)arg1 suppressProgressAnimation:(bool)arg2 duringFluidProgressState:(id)arg3 animated:(bool)arg4;
- (void)fluidProgressController:(id)arg1 updateFluidProgressBar:(id)arg2 completion:(id /* block */)arg3;
- (void)fluidProgressControllerFinishProgressBar:(id)arg1 animateFillFade:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isShowingProgress;
- (void)layoutSubviews;
- (bool)progressAnimationSuppressed;
- (id)progressBarFillColor;
- (void)setAlignToTop:(bool)arg1;
- (void)setAlignsToTop:(bool)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProgressAnimationSuppressed:(bool)arg1;
- (void)setProgressAnimationSuppressed:(bool)arg1 duringFluidProgressState:(id)arg2 animated:(bool)arg3;
- (void)setProgressBarFillColor:(id)arg1;
- (void)setProgressToCurrentPositionForState:(id)arg1;

@end
