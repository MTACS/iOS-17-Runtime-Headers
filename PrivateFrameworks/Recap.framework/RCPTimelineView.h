
@interface RCPTimelineView : UIView {
    CALayer * _cropEndHead;
    CALayer * _cropStartHead;
    <RCPTimelineViewDelegate> * _delegate;
    long long  _draggingHandle;
    unsigned long long  _endCropTimestamp;
    CALayer * _playbackHead;
    NSTimer * _playbackTimer;
    RCPMovie * _recapMovie;
    unsigned long long  _startCropTimestamp;
    unsigned long long  _time;
}

@property (nonatomic) <RCPTimelineViewDelegate> *delegate;
@property (nonatomic) unsigned long long endCropTimestamp;
@property (nonatomic, retain) RCPMovie *recapMovie;
@property (nonatomic) unsigned long long startCropTimestamp;

- (void).cxx_destruct;
- (id)cropHead:(bool)arg1;
- (id)delegate;
- (void)dragAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)dragBeganAtLocation:(struct CGPoint { double x1; double x2; })arg1 hitThreshold:(double)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)endCropTimestamp;
- (bool)isFlipped;
- (void)layoutSubviews;
- (id)recapMovie;
- (void)setDelegate:(id)arg1;
- (void)setEndCropTimestamp:(unsigned long long)arg1;
- (void)setNeedsDisplay:(bool)arg1;
- (void)setRecapMovie:(id)arg1;
- (void)setStartCropTimestamp:(unsigned long long)arg1;
- (void)setTime:(unsigned long long)arg1;
- (void)setup;
- (unsigned long long)startCropTimestamp;
- (void)startPlayback;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateCropUI;
- (double)xForTimestamp:(unsigned long long)arg1;

@end
