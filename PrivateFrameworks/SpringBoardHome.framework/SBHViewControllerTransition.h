
@interface SBHViewControllerTransition : NSObject <BSDescriptionProviding, SBHViewControllerTransitionAnimationContext, SBViewControllerTransitionContextDelegate> {
    <SBHViewControllerTransitionDelegate> * _delegate;
    SBViewControllerTransitionContext * _transitionContext;
    long long  _transitionEndpoint;
    id  _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBHViewControllerTransitionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long targetEndpoint;
@property (nonatomic, retain) SBViewControllerTransitionContext *transitionContext;
@property (nonatomic) long long transitionEndpoint;
@property (getter=isTransitioning, nonatomic, readonly) bool transitioning;
@property (nonatomic, retain) id userInfo;
@property (nonatomic, readonly) bool wantsAnimation;

- (void).cxx_destruct;
- (void)_handleDidProgressToEndState;
- (void)_handleDidReturnToBeginningState;
- (id)_newTransitionAnimator;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)isTransitioning;
- (void)progressToEndStateWithAnimation:(bool)arg1;
- (void)returnToBeginningStateWithAnimation:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTransitionContext:(id)arg1;
- (void)setTransitionEndpoint:(long long)arg1;
- (void)setUserInfo:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)targetEndpoint;
- (id)transitionContext;
- (void)transitionDidFinish:(id)arg1;
- (long long)transitionEndpoint;
- (void)transitionToEndpoint:(long long)arg1 withAnimation:(bool)arg2;
- (id)userInfo;
- (bool)wantsAnimation;

@end
