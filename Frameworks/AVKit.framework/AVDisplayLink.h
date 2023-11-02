
@interface AVDisplayLink : NSObject {
    CADisplayLink * _displayLink;
    id /* block */  _linkFired;
    id  _observer;
    double  _startTime;
}

@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic, copy) id /* block */ linkFired;
@property (nonatomic) id observer;
@property (nonatomic, readonly) double runningTime;
@property (nonatomic) double startTime;

- (void).cxx_destruct;
- (id)displayLink;
- (void)invalidate;
- (id /* block */)linkFired;
- (void)linkFired:(id)arg1;
- (id)observer;
- (double)runningTime;
- (void)setDisplayLink:(id)arg1;
- (void)setLinkFired:(id /* block */)arg1;
- (void)setObserver:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)startDisplayLinkUpdatesForObserver:(id)arg1 framesPerSecond:(long long)arg2 usingBlock:(id /* block */)arg3;
- (double)startTime;

@end
