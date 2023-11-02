
@interface PXAudioPlayerHUDUIView : UIView {
    PXAudioPlayer * _audioPlayer;
    CADisplayLink * _displayLink;
    UILabel * _trackLabel;
}

@property (nonatomic, retain) PXAudioPlayer *audioPlayer;

- (void).cxx_destruct;
- (void)_handleDisplayLink:(id)arg1;
- (void)_updateDisplayLink;
- (void)_updateInfoText;
- (id)audioPlayer;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 audioPlayer:(id)arg2;
- (void)layoutSubviews;
- (void)setAudioPlayer:(id)arg1;

@end
