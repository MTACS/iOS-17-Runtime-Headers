
@interface QLImageAnimationTimer : NSObject {
    CADisplayLink * _displayLink;
    NSMutableSet * _observers;
}

@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic, retain) NSMutableSet *observers;

+ (id)sharedTimer;

- (void).cxx_destruct;
- (void)addAnimationTimerObserver:(id)arg1;
- (void)animationTimerFired:(id)arg1;
- (id)displayLink;
- (id)init;
- (id)observers;
- (void)removeAnimationTimerObserver:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setObservers:(id)arg1;

@end
