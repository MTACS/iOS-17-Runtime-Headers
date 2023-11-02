
@interface ISAnimatedImageTimer : ISObservable {
    CADisplayLink * _displayLink;
    _ISAnimatedImageTimerForwardingProxy * _displayLinkProxy;
    double  _timestamp;
}

@property (setter=_setTimestamp:, nonatomic) double timestamp;

+ (id)sharedTimer;

- (void).cxx_destruct;
- (void)_fireTimerWithInterval:(double)arg1;
- (void)_iosAnimationTimerFired:(id)arg1;
- (void)_iosDealloc;
- (void)_iosInitialization;
- (void)_iosUpdateDisplayLink;
- (void)_setTimestamp:(double)arg1;
- (void)_updateDisplayLink;
- (void)dealloc;
- (void)hasObserversDidChange;
- (id)init;
- (id)mutableChangeObject;
- (double)timestamp;

@end
