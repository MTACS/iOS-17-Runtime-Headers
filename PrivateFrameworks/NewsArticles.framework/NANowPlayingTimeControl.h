
@interface NANowPlayingTimeControl : UIControl {
    void $__lazy_storage_$_elapsedTimeLabelBaselineConstraint;
    void $__lazy_storage_$_remainingTimeLabelBaselineConstraint;
    void _tracking;
    void accessibilityTimeFormatter;
    void backgroundObserver;
    void displayLink;
    void durationSnapshot;
    void elapsedTimeLabel;
    void elapsedTrackColor;
    void foregroundObserver;
    void isBackgrounded;
    void remainingTimeLabel;
    void remainingTrackColor;
    void scrubbingDidChangeHandler;
    void slider;
    void timeDidChangeHandler;
    void timeFormatter;
    void timeLabelTextColor;
    void timeLabelTrackingTextColor;
    void trackingTrackColor;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } accessibilityActivationPoint;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic) double alpha;
@property (nonatomic, retain) UIColor *elapsedTrackColor;
@property (nonatomic) bool enabled;
@property (nonatomic) bool hidden;
@property (nonatomic, retain) UIColor *remainingTrackColor;
@property (nonatomic, copy) id /* block */ timeDidChangeHandler;
@property (nonatomic, retain) UIColor *timeLabelTextColor;
@property (nonatomic, retain) UIColor *timeLabelTrackingTextColor;
@property (nonatomic, retain) UIColor *trackingTrackColor;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityValue;
- (double)alpha;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)displayLinkFired:(id)arg1;
- (id)elapsedTrackColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (bool)isHidden;
- (id)remainingTrackColor;
- (void)setAccessibilityActivationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)setCurrentTime:(double)arg1 duration:(double)arg2 rate:(double)arg3 isWaiting:(bool)arg4 animated:(bool)arg5;
- (void)setElapsedTrackColor:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setRemainingTrackColor:(id)arg1;
- (void)setTimeDidChangeHandler:(id /* block */)arg1;
- (void)setTimeLabelTextColor:(id)arg1;
- (void)setTimeLabelTrackingTextColor:(id)arg1;
- (void)setTrackingTrackColor:(id)arg1;
- (id /* block */)timeDidChangeHandler;
- (id)timeLabelTextColor;
- (id)timeLabelTrackingTextColor;
- (void)tintColorDidChange;
- (id)trackingTrackColor;
- (void)updateFonts;

@end
