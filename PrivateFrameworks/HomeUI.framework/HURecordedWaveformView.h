
@interface HURecordedWaveformView : UIView <HFAudioPlayerDelegate> {
    NSURL * _audioFileURL;
    HFAudioPlayer * _audioPlayer;
    NSArray * _audioPowerLevels;
    UIColor * _backgroundColor;
    UIVisualEffectView * _blurView;
    double  _duration;
    double  _minTimeLabelWidth;
    UIButton * _playRecordingButton;
    UILabel * _timeLabel;
    UIColor * _waveformColor;
    UIImage * _waveformImage;
    UIImageView * _waveformImageView;
}

@property (nonatomic, retain) NSURL *audioFileURL;
@property (nonatomic, retain) HFAudioPlayer *audioPlayer;
@property (nonatomic, retain) NSArray *audioPowerLevels;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIVisualEffectView *blurView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic) double minTimeLabelWidth;
@property (nonatomic, retain) UIButton *playRecordingButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *timeLabel;
@property (nonatomic, retain) UIColor *waveformColor;
@property (nonatomic, retain) UIImage *waveformImage;
@property (nonatomic, retain) UIImageView *waveformImageView;

- (void).cxx_destruct;
- (void)_playRecording:(id)arg1;
- (void)_updateProgressForPlaybackTime:(double)arg1;
- (id)_waveFormImageForWidth:(double)arg1 havingColor:(id)arg2;
- (id)audioFileURL;
- (id)audioPlayer;
- (void)audioPlayer:(id)arg1 didPausePlaybackWithReason:(id)arg2;
- (void)audioPlayer:(id)arg1 didUpdatePlaybackTime:(double)arg2;
- (void)audioPlayerDidFinishPlayback:(id)arg1 withError:(id)arg2;
- (void)audioPlayerDidResumePlayback:(id)arg1;
- (void)audioPlayerDidStopPlayback:(id)arg1;
- (id)audioPowerLevels;
- (id)backgroundColor;
- (id)blurView;
- (double)duration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 waveformColor:(id)arg2 backgroundColor:(id)arg3 tintColor:(id)arg4;
- (void)layoutSubviews;
- (double)minTimeLabelWidth;
- (id)playRecordingButton;
- (void)setAlpha:(double)arg1;
- (void)setAudioFileURL:(id)arg1;
- (void)setAudioPlayer:(id)arg1;
- (void)setAudioPowerLevels:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBlurView:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setMinTimeLabelWidth:(double)arg1;
- (void)setPlayRecordingButton:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setWaveformColor:(id)arg1;
- (void)setWaveformImage:(id)arg1;
- (void)setWaveformImageView:(id)arg1;
- (id)timeLabel;
- (id)waveformColor;
- (id)waveformImage;
- (id)waveformImageView;

@end
