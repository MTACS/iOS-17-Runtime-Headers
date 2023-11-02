
@interface SBPerformTransitionSwitcherEventResponse : SBSwitcherModifierEventResponse {
    bool  _gestureInitiated;
    SBSwitcherTransitionRequest * _transitionRequest;
}

@property (getter=isGestureInitiated, nonatomic, readonly) bool gestureInitiated;
@property (nonatomic, readonly) SBSwitcherTransitionRequest *transitionRequest;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithTransitionRequest:(id)arg1 gestureInitiated:(bool)arg2;
- (bool)isGestureInitiated;
- (id)transitionRequest;
- (long long)type;

@end
