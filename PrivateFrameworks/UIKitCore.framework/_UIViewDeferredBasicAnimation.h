
@interface _UIViewDeferredBasicAnimation : _UIViewDeferredAnimation {
    _UIViewAnimationFrame * _finalValue;
}

- (void).cxx_destruct;
- (id)_animationFrames;
- (void)_enumerateAnimationFramesForKeyframes:(id /* block */)arg1;
- (void)addAnimationFrameForValue:(id)arg1;
- (void)animateFrameAtIndex:(long long)arg1 animations:(id /* block */)arg2;
- (bool)isEmpty;

@end
