
@interface ICAudioPlaybackScrubberView : UISlider {
    ICAttachment * _audioAttachment;
    bool  _wasPlaying;
}

@property (nonatomic, retain) ICAttachment *audioAttachment;
@property (nonatomic) bool wasPlaying;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)audioAttachment;
- (void)audioPlaybackTimeChangedNotification:(id)arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAudioAttachment:(id)arg1;
- (void)setWasPlaying:(bool)arg1;
- (void)updateTime:(double)arg1 duration:(double)arg2;
- (bool)wasPlaying;

@end
