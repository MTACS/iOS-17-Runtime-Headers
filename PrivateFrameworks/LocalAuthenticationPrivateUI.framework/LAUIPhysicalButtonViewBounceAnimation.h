
@interface LAUIPhysicalButtonViewBounceAnimation : LAUIPhysicalButtonViewAnimation {
    double  _lastLength;
}

- (void)_animateWithLength:(double)arg1 delay:(double)arg2;
- (double)_currentLength;
- (void)beginWithDelay:(double)arg1;
- (double)duration;
- (void)update;

@end
