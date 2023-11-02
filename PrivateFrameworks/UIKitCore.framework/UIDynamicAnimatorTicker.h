
@interface UIDynamicAnimatorTicker : NSObject {
    UIDynamicAnimator * _animator;
}

@property UIDynamicAnimator *animator;

- (void).cxx_destruct;
- (void)_displayLinkTick:(id)arg1;
- (void)_uiUpdateSequenceTick:(double)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;

@end
