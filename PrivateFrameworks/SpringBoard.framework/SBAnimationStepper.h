
@interface SBAnimationStepper : NSObject <CAAnimationDelegate, SBUIAnimationStepping> {
    bool  _adjustsDurationForLongestAnimation;
    double  _animatedSteppingStartPercent;
    double  _animatedSteppingTargetPercent;
    double  _animatedSteppingTimestamp;
    bool  _animatingToStepPercent;
    BSAnimationSettings * _animationSettings;
    bool  _completed;
    id /* block */  _completion;
    CADisplayLink * _displayLink;
    double  _duration;
    double  _finishBackwardDuration;
    double  _finishBackwardPercentage;
    double  _finishBackwardTimestamp;
    double  _finishSpeed;
    NSMutableSet * _finishedAnimatingViews;
    bool  _finishingBackward;
    bool  _finishingForward;
    bool  _invalidated;
    double  _percentage;
    NSMutableSet * _views;
}

@property (nonatomic) bool adjustsDurationForLongestAnimation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic) double finishSpeed;
@property (readonly) unsigned long long hash;
@property (nonatomic) double stepPercentage;
@property (getter=isStepped, nonatomic, readonly) bool stepped;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *views;

- (void).cxx_destruct;
- (void)_adjustDurationForLongestAnimation;
- (void)_checkForCompletion;
- (void)_displayLinkFired:(id)arg1;
- (void)_displayLinkFiredForBackwardToStart:(id)arg1;
- (void)_makeSubviewTree:(id)arg1 fromView:(id)arg2;
- (double)_nextCommitTime;
- (void)_setStepPercentage:(double)arg1;
- (void)_updateAnimationSteppingTarget:(double)arg1;
- (bool)adjustsDurationForLongestAnimation;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (double)duration;
- (double)finishSpeed;
- (void)finishSteppingBackwardToStart;
- (void)finishSteppingBackwardToStartWithCompletion:(id /* block */)arg1;
- (void)finishSteppingForwardToEnd;
- (void)finishSteppingForwardToEndWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithAnimationSettings:(id)arg1;
- (void)invalidate;
- (bool)isStepped;
- (void)setAdjustsDurationForLongestAnimation:(bool)arg1;
- (void)setFinishSpeed:(double)arg1;
- (void)setStepPercentage:(double)arg1;
- (void)startSteppingAnimationsInView:(id)arg1;
- (double)stepPercentage;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)views;

@end
