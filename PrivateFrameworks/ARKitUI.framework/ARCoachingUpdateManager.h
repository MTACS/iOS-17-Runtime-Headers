
@interface ARCoachingUpdateManager : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <ARCoachingUpdateManagerDelegate> * _delegate;
    CADisplayLink * _displayLink;
    double  _lastUpdateTime;
    CAMetalLayer * _metalLayer;
}

@property (nonatomic) <ARCoachingUpdateManagerDelegate> *delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)drawWithTimeDelta:(double)arg1;
- (id)init:(id)arg1 metalLayer:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;
- (void)update;

@end
