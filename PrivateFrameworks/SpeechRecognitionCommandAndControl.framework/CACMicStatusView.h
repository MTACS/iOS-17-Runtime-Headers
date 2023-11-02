
@interface CACMicStatusView : UIView {
    double  _micPowerLevel;
    long long  _micStatus;
    NSTimer * _statusIndicatorAnimationTimer;
    UIImageView * _statusIndicatorImageView;
    bool  _swapPalette;
}

@property (nonatomic) double micPowerLevel;
@property (nonatomic) long long micStatus;
@property (nonatomic, retain) NSTimer *statusIndicatorAnimationTimer;
@property (nonatomic, retain) UIImageView *statusIndicatorImageView;
@property (nonatomic) bool swapPalette;

- (void).cxx_destruct;
- (void)drawBase;
- (id)imageBundle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)micPowerLevel;
- (long long)micStatus;
- (void)setMicPowerLevel:(double)arg1;
- (void)setMicStatus:(long long)arg1;
- (void)setStatusIndicatorAnimationTimer:(id)arg1;
- (void)setStatusIndicatorImageView:(id)arg1;
- (void)setSwapPalette:(bool)arg1;
- (id)statusIndicatorAnimationTimer;
- (id)statusIndicatorImageView;
- (void)stopRecordingAnimation;
- (bool)swapPalette;
- (void)transitionToIdle;
- (void)transitionToListening;
- (void)transitionToRecording;

@end
