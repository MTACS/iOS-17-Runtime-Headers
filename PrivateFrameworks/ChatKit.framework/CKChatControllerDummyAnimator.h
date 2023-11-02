
@interface CKChatControllerDummyAnimator : NSObject <CAAnimationDelegate, CKImpactEffectAnimationProvider, CKPopRendererViewDelegate> {
    <CKSendAnimationManager> * _animationDelegate;
    CAEmitterLayer * _dustEmitter;
    id /* block */  _popAnimationCompletionBlock;
    NSObject<OS_dispatch_group> * _throwAnimationGroup;
}

@property (nonatomic) <CKSendAnimationManager> *animationDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CAEmitterLayer *dustEmitter;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ popAnimationCompletionBlock;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *throwAnimationGroup;

- (void).cxx_destruct;
- (id /* block */)_animationCompletionBlockWithSendAnimationContext:(id)arg1;
- (void)_beginFocusAnimationWithContext:(id)arg1;
- (void)_beginGentleAnimationWithContext:(id)arg1;
- (void)_beginImpactAnimationWithContext:(id)arg1;
- (void)_beginLoudAnimationsWithContext:(id)arg1;
- (void)_beginPopAnimationWithContext:(id)arg1;
- (void)_beginThrowAnimationWithContext:(id)arg1;
- (void)_configureForVFD:(id)arg1;
- (void)_configureQuickReplySendAnimationGroup:(id)arg1 withSendAnimationContext:(id)arg2;
- (void)_prepareToAnimateForSendAnimationContext:(id)arg1;
- (double)_throwAnimationDurationScaleFactorForThrownBalloonAttributes:(id)arg1 finalBalloonFrames:(id)arg2;
- (id)animationDelegate;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)balloonViewFadeInAnimationForConvertedCurrentMediaTime:(double)arg1;
- (void)beginAnimationWithSendAnimationContext:(id)arg1;
- (void)beginQuickReplyAnimationWithSendAnimationContext:(id)arg1;
- (id)dustEmitter;
- (id /* block */)popAnimationCompletionBlock;
- (void)popRendererViewDidBegin:(id)arg1;
- (void)popRendererViewDidFinish:(id)arg1;
- (void)popRendererViewPlaySound:(id)arg1;
- (void)setAnimationDelegate:(id)arg1;
- (void)setDustEmitter:(id)arg1;
- (void)setPopAnimationCompletionBlock:(id /* block */)arg1;
- (void)setThrowAnimationGroup:(id)arg1;
- (void)stopAnimationWithSendAnimationContext:(id)arg1;
- (id)throwAnimationGroup;

@end
