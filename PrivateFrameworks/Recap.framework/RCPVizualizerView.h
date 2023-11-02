
@interface RCPVizualizerView : UIView <CALayerDelegate, RCPTimelineViewDelegate> {
    AVPlayer * _player;
    AVPlayerLayer * _playerLayer;
    RCPMovie * _recapMovie;
    CALayer * _screenshotLayer;
    unsigned long long  _time;
    RCPTraceLayer * _traceLayer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AVPlayer *player;
@property (nonatomic, retain) AVPlayerLayer *playerLayer;
@property (nonatomic, retain) RCPMovie *recapMovie;
@property (nonatomic, retain) CALayer *screenshotLayer;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long time;
@property (nonatomic, retain) RCPTraceLayer *traceLayer;

- (void).cxx_destruct;
- (bool)isFlipped;
- (void)layout;
- (id)player;
- (id)playerLayer;
- (id)recapMovie;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenRect;
- (id)screenshotLayer;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerLayer:(id)arg1;
- (void)setRecapMovie:(id)arg1;
- (void)setScreenshotLayer:(id)arg1;
- (void)setTime:(unsigned long long)arg1;
- (void)setTraceLayer:(id)arg1;
- (unsigned long long)time;
- (void)timelineView:(id)arg1 didSetTime:(unsigned long long)arg2;
- (id)traceLayer;

@end
