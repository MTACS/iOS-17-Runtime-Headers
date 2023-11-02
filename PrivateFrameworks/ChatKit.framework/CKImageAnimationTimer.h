
@interface CKImageAnimationTimer : NSObject {
    double  _animationStartTime;
    double  _animationTime;
    CADisplayLink * _displayLink;
    bool  _hasValidStartTimeForCurrentDisplayLink;
    NSMutableSet * _observers;
    bool  _shouldStopWhenBackgrounded;
}

@property (nonatomic) double animationStartTime;
@property (nonatomic, readonly) double animationTime;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic) bool hasValidStartTimeForCurrentDisplayLink;
@property (nonatomic, retain) NSMutableSet *observers;
@property (nonatomic) bool shouldStopWhenBackgrounded;

+ (bool)accessibilityAnimatedImagesDisabled;
+ (id)sharedTimer;

- (void).cxx_destruct;
- (void)addAnimationTimerObserver:(id)arg1;
- (double)animationStartTime;
- (double)animationTime;
- (void)animationTimerFired;
- (void)dealloc;
- (id)displayLink;
- (bool)hasValidStartTimeForCurrentDisplayLink;
- (id)init;
- (id)observers;
- (void)removeAnimationTimerObserver:(id)arg1;
- (void)setAnimationStartTime:(double)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setHasValidStartTimeForCurrentDisplayLink:(bool)arg1;
- (void)setObservers:(id)arg1;
- (void)setShouldStopWhenBackgrounded:(bool)arg1;
- (bool)shouldStopWhenBackgrounded;
- (void)updateDisplayLink;

@end
