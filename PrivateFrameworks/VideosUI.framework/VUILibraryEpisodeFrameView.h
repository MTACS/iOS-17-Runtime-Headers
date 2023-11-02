
@interface VUILibraryEpisodeFrameView : UIView {
    <VUILibraryEpisodeFrameViewDelegate> * _delegate;
    VUIImageView * _fullyPlayedImageView;
    VUIImageView * _imageView;
    long long  _layout;
    VUIButton * _playButton;
    _TVProgressView * _progressView;
}

@property (nonatomic) <VUILibraryEpisodeFrameViewDelegate> *delegate;
@property (nonatomic, retain) VUIImageView *fullyPlayedImageView;
@property (nonatomic, retain) VUIImageView *imageView;
@property (nonatomic) long long layout;
@property (nonatomic, retain) VUIButton *playButton;
@property (nonatomic, retain) _TVProgressView *progressView;

+ (void)configureEpisodeFrameView:(id)arg1 withMedia:(id)arg2 layout:(long long)arg3 imageSize:(struct CGSize { double x1; double x2; })arg4;

- (void).cxx_destruct;
- (void)_playButtonPressed;
- (id)delegate;
- (id)fullyPlayedImageView;
- (id)imageView;
- (long long)layout;
- (void)layoutSubviews;
- (id)playButton;
- (id)progressView;
- (void)setDelegate:(id)arg1;
- (void)setFullyPlayedImageView:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLayout:(long long)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setProgressView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateProgress:(id)arg1;

@end
