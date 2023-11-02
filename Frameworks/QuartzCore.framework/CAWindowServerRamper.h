
@interface CAWindowServerRamper : NSObject {
    double  _beginTime;
    CADisplay * _cadisplay;
    CAWindowServerDisplay * _display;
    double  _duration;
    int  _id;
    CADisplayLink * _link;
}

@property double beginTime;
@property (retain) CADisplay *cadisplay;
@property (retain) CAWindowServerDisplay *display;
@property double duration;
@property int id;
@property (retain) CADisplayLink *link;

- (double)beginTime;
- (id)cadisplay;
- (id)display;
- (double)duration;
- (int)id;
- (id)initWithDisplay:(id)arg1;
- (id)link;
- (void)rampCallback:(id)arg1;
- (void)runRamp;
- (void)setBeginTime:(double)arg1;
- (void)setCadisplay:(id)arg1;
- (void)setDisplay:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setId:(int)arg1;
- (void)setLink:(id)arg1;

@end
