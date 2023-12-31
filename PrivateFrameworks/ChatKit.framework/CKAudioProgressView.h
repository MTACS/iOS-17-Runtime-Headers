
@interface CKAudioProgressView : CKBalloonImageView {
    BOOL  _color;
    IMManualUpdater * _displayUpdater;
    bool  _played;
    bool  _playing;
    float  _progress;
}

@property (nonatomic) BOOL color;
@property (nonatomic, retain) IMManualUpdater *displayUpdater;
@property (getter=isPlayed, nonatomic) bool played;
@property (getter=isPlaying, nonatomic) bool playing;
@property (nonatomic) float progress;

+ (id)imageWithType:(unsigned char)arg1 color:(BOOL)arg2;
+ (float)progressForTime:(double)arg1 duration:(double)arg2;
+ (id)templateImageWithControlImage:(id)arg1;
+ (id)templateImageWithType:(unsigned char)arg1;

- (void).cxx_destruct;
- (BOOL)color;
- (id)displayUpdater;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPlayed;
- (bool)isPlaying;
- (void)prepareForDisplay;
- (void)prepareForDisplayIfNeeded;
- (float)progress;
- (void)setColor:(BOOL)arg1;
- (void)setDisplayUpdater:(id)arg1;
- (void)setNeedsPrepareForDisplay;
- (void)setPlayed:(bool)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setProgress:(float)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
