
@interface UIViewKeyframeAnimationState : UIViewAnimationState {
    long long  _calculationMode;
    double  _frameDuration;
    double  _frameStartTime;
    bool  _inFrame;
    NSMutableSet * _keyframeLayers;
    NSMutableDictionary * _keyframeLayersForCurrentKeyFrameDict;
}

- (void).cxx_destruct;
- (id)_createDeferredAnimationForKey:(id)arg1;
- (bool)_isKeyframeAnimation;
- (id)_updateAnimationFrameWithAnimationProperties:(id)arg1;
- (void)addKeyframeWithRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 animations:(id /* block */)arg3;
- (id)animationForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (void)cleanupTrackedLayers;
- (id)init;
- (void)pop;
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(id /* block */)arg7 completion:(id /* block */)arg8;

@end
