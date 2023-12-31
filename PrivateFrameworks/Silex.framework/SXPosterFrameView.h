
@interface SXPosterFrameView : UIImageView {
    SVVideoPlayButton * _playButton;
}

@property (nonatomic, retain) SVVideoPlayButton *playButton;

- (void).cxx_destruct;
- (bool)accessibilityIgnoresInvertColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)playButton;
- (void)setImage:(id)arg1 animated:(bool)arg2;
- (void)setPlayButton:(id)arg1;

@end
