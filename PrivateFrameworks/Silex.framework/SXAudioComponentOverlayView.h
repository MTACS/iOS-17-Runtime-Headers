
@interface SXAudioComponentOverlayView : UIImageView {
    UIActivityIndicatorView * _activityIndicator;
    UIImage * _audioIndicatorImage;
    UIButton * _playButton;
}

@property (nonatomic, readonly) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, readonly) UIImage *audioIndicatorImage;
@property (nonatomic, readonly) UIButton *playButton;

- (void).cxx_destruct;
- (id)activityIndicator;
- (id)audioIndicatorImage;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)playButton;
- (void)setImage:(id)arg1;
- (void)startActivityIndicator;
- (void)stopActivityIndicator;

@end
