
@interface HUWaveformView : UIView <SUICFlamesViewDelegate> {
    NSMutableArray * _audioPowerLevels;
    UIColor * _backgroundColor;
    SUICFlamesView * _flamesView;
    double  _minTimeLabelWidth;
    UILabel * _timeLabel;
    UIColor * _waveformColor;
    NSMutableArray * _waveformSlices;
}

@property (nonatomic, retain) NSMutableArray *audioPowerLevels;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SUICFlamesView *flamesView;
@property (readonly) unsigned long long hash;
@property (nonatomic) double minTimeLabelWidth;
@property (nonatomic, readonly) NSArray *powerLevels;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *timeLabel;
@property (nonatomic, retain) UIColor *waveformColor;
@property (nonatomic, retain) NSMutableArray *waveformSlices;

- (void).cxx_destruct;
- (void)appendPowerLevel:(double)arg1;
- (float)audioLevelForFlamesView:(id)arg1;
- (id)audioPowerLevels;
- (id)backgroundColor;
- (void)clearPowerLevels;
- (id)flamesView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 waveformColor:(id)arg2 backgroundColor:(id)arg3;
- (void)layoutSubviews;
- (double)minTimeLabelWidth;
- (id)powerLevels;
- (void)setAudioPowerLevels:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setFlamesView:(id)arg1;
- (void)setMinTimeLabelWidth:(double)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setWaveformColor:(id)arg1;
- (void)setWaveformSlices:(id)arg1;
- (id)timeLabel;
- (id)waveformColor;
- (id)waveformSlices;

@end
