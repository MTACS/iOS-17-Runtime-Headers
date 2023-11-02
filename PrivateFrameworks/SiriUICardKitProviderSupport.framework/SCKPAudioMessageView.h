
@interface SCKPAudioMessageView : UIView {
    <SCKPAudioMessageViewDelegate> * _delegate;
    UIImage * _pauseImage;
    UIButton * _playButton;
    long long  _playButtonState;
    UIImage * _playImage;
    UIImageView * _waveformImageView;
}

@property (nonatomic) long long playButtonState;

- (void).cxx_destruct;
- (void)_playButtonPressed:(id)arg1;
- (id)initWithAudioMessageURL:(id)arg1 delegate:(id)arg2;
- (void)layoutSubviews;
- (long long)playButtonState;
- (void)setPlayButtonState:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
