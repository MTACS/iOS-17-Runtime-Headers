
@interface CKAudioMessageRecordingView : UIView <UIGestureRecognizerDelegate> {
    void backgroundView;
    void closeButton;
    void cornerRadius;
    void delegate;
    void displayLink;
    void durationAppendButton;
    void isScrubbing;
    void isStopButtonHighlighted;
    void lastIntensityTime;
    void minimumWaveformWidth;
    void playButton;
    void playbackCurrentTime;
    void playbackDuration;
    void recordingStartTime;
    void scrubOffset;
    void scrubScale;
    void scrubStartLocation;
    void scrubStartTime;
    void sendButton;
    void service;
    void state;
    void stateChangeAnimationDuration;
    void stateChangeSpringDamping;
    void stopButton;
    void waveformView;
}

@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) <CKAudioMessageRecordingViewDelegate> *delegate;
@property (nonatomic, readonly) NSArray *intensities;
@property (nonatomic) bool isStopButtonHighlighted;
@property (nonatomic) double playbackCurrentTime;
@property (nonatomic) double playbackDuration;
@property (nonatomic, retain) UIButton *sendButton;
@property (nonatomic, retain) IMService *service;
@property (nonatomic) long long state;
@property (nonatomic, readonly) UIButton *stopButton;

+ (id)buttonFor:(long long)arg1 with:(id)arg2;

- (void).cxx_destruct;
- (void)addToWaveformWithIntensity:(double)arg1;
- (id)backgroundView;
- (void)closeFrom:(id)arg1;
- (double)cornerRadius;
- (id)delegate;
- (void)displayLinkFiredFrom:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 service:(id)arg2;
- (id)intensities;
- (void)invalidateDisplayLink;
- (bool)isStopButtonHighlighted;
- (void)layoutSubviews;
- (void)playFrom:(id)arg1;
- (double)playbackCurrentTime;
- (double)playbackDuration;
- (void)resumeFrom:(id)arg1;
- (void)scrubFrom:(id)arg1;
- (id)sendButton;
- (void)sendFrom:(id)arg1;
- (id)service;
- (void)setCornerRadius:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsStopButtonHighlighted:(bool)arg1;
- (void)setPlaybackCurrentTime:(double)arg1;
- (void)setPlaybackDuration:(double)arg1;
- (void)setSendButton:(id)arg1;
- (void)setService:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setWithIntensities:(id)arg1;
- (void)setupDisplayLink;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)state;
- (id)stopButton;
- (void)stopFrom:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
