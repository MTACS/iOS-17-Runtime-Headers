
@interface CEKAdditiveAnimator : NSObject {
    NSMutableDictionary * __animations;
    CADisplayLink * __displayLink;
    NSMutableDictionary * __values;
    <CEKAdditiveAnimatorDelegate> * _delegate;
}

@property (nonatomic, readonly) NSMutableDictionary *_animations;
@property (nonatomic, retain) CADisplayLink *_displayLink;
@property (nonatomic, readonly) NSMutableDictionary *_values;
@property (getter=isAnimating, nonatomic, readonly) bool animating;
@property (nonatomic) <CEKAdditiveAnimatorDelegate> *delegate;

- (void).cxx_destruct;
- (id)_animations;
- (id)_displayLink;
- (void)_handleDisplayLinkFired:(id)arg1;
- (void)_updateDisplayLink;
- (id)_values;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isAnimating;
- (bool)isAnimatingForKey:(id)arg1;
- (void)removeAnimationsForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setValue:(double)arg1 forKey:(id)arg2;
- (void)setValue:(double)arg1 forKey:(id)arg2 duration:(double)arg3 timingCurve:(id)arg4;
- (void)set_displayLink:(id)arg1;
- (double)valueForKey:(id)arg1;

@end
