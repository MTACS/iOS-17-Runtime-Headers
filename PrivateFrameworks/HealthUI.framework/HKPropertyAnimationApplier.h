
@interface HKPropertyAnimationApplier : NSObject {
    NSMutableDictionary * _animations;
    CADisplayLink * _displayLink;
}

- (void).cxx_destruct;
- (void)_applyAnimations;
- (void)_cleanupCompletedAnimations;
- (void)_displayLinkFired:(id)arg1;
- (void)_startDisplayLinkIfNecessary;
- (void)_stopDisplayLinkIfNecessary;
- (void)applyAnimation:(id)arg1;
- (void)cancelAnimationsForProperty:(id)arg1;
- (id)init;

@end
