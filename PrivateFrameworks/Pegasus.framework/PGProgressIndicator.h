
@interface PGProgressIndicator : PGMaterialView {
    PGVibrantFillView * _completeTrack;
    UIColor * _customElapsedTrackTintColor;
    PGVibrantFillView * _elapsedTrack;
    bool  _includesWaitingToPlayIndicator;
    double  _progress;
    UIViewPropertyAnimator * _pulseAnimator;
    long long  _pulseState;
}

@property (nonatomic, retain) UIColor *customElapsedTrackTintColor;
@property (nonatomic) bool includesWaitingToPlayIndicator;
@property (nonatomic) double progress;

- (void).cxx_destruct;
- (void)_applyPulseState;
- (void)_performLayout;
- (void)_setCornerRadius:(double)arg1;
- (void)_transitionToPulseStateIfNeeded:(long long)arg1;
- (void)_updateElapsedTrackTintColor;
- (void)_updatePulseAnimatorIfNeeded;
- (id)customElapsedTrackTintColor;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)includesWaitingToPlayIndicator;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)progress;
- (void)setCustomElapsedTrackTintColor:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIncludesWaitingToPlayIndicator:(bool)arg1;
- (void)setProgress:(double)arg1;

@end
