
@interface SBFBarSwipeBehavior : NSObject {
    <SBFBarSwipeBehaviorDelegate> * _delegate;
    bool  _didFireAction;
    UINotificationFeedbackGenerator * _dismissalFeedbackGenerator;
    long long  _feedbackType;
    UIView * _grabberView;
    double  _grabberViewAdditionalEdgeSpacing;
    <UIViewSpringAnimationBehaviorDescribing> * _settleAffordanceAnimationBehaviorDescription;
}

@property (nonatomic) <SBFBarSwipeBehaviorDelegate> *delegate;
@property (nonatomic) long long feedbackType;
@property (nonatomic, readonly) UIView *grabberView;
@property (nonatomic, readonly) double grabberViewAdditionalEdgeSpacing;
@property (nonatomic, readonly) <UIViewSpringAnimationBehaviorDescribing> *settleAffordanceAnimationBehaviorDescription;

- (void).cxx_destruct;
- (void)_createFeedbackGenerator;
- (void)_fireAction;
- (id)_grabberViewContainerView;
- (void)_offsetGrabberForProgress:(double)arg1;
- (double)_progressWithTranslation:(struct CGPoint { double x1; double x2; })arg1 liftoffVelocity:(struct CGPoint { double x1; double x2; })arg2;
- (void)_setGrabberAdditionalEdgeSpacing:(double)arg1;
- (id)_settleAffordanceAnimationBehaviorDescription;
- (void)_settleGrabber;
- (void)barSwipeInteractionBegan:(id)arg1;
- (void)barSwipeInteractionCancelled:(id)arg1;
- (void)barSwipeInteractionChanged:(id)arg1;
- (void)barSwipeInteractionEnded:(id)arg1;
- (id)delegate;
- (long long)feedbackType;
- (id)grabberView;
- (double)grabberViewAdditionalEdgeSpacing;
- (id)initWithGrabberView:(id)arg1 settleAffordanceAnimationBehaviorDescription:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setFeedbackType:(long long)arg1;
- (id)settleAffordanceAnimationBehaviorDescription;

@end
