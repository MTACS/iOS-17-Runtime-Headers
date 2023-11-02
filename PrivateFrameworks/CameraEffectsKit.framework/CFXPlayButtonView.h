
@interface CFXPlayButtonView : UIView {
    UIView * _contentView;
    <CFXPlayButtonViewDelegate> * _delegate;
    UIImage * _pauseImage;
    UIButton * _playButton;
    CAShapeLayer * _playControlMaskLayer;
    UIImage * _playImage;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) <CFXPlayButtonViewDelegate> *delegate;
@property (nonatomic, retain) UIImage *pauseImage;
@property (nonatomic) UIButton *playButton;
@property (nonatomic, retain) CAShapeLayer *playControlMaskLayer;
@property (nonatomic, retain) UIImage *playImage;

- (void).cxx_destruct;
- (id)contentView;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)notifyPlaybackDidStart;
- (void)notifyPlaybackDidStop;
- (void)notifyWasTapped;
- (id)pauseImage;
- (id)playButton;
- (void)playButtonTapped:(id)arg1;
- (id)playControlMaskLayer;
- (id)playImage;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPauseImage:(id)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setPlayControlMaskLayer:(id)arg1;
- (void)setPlayImage:(id)arg1;
- (void)sharedInit;

@end
