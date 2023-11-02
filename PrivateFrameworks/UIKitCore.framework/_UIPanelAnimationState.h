
@interface _UIPanelAnimationState : NSObject {
    long long  _affectedSides;
    _UIPanelCoordinatingAnimator * _animator;
    bool  _animatorShouldCoordinate;
    UISlidingBarStateRequest * _fromRequest;
    bool  _isFinishingAnimation;
    double  _progress;
    bool  _shouldAssignOffscreenWidthsToStateRequest;
    UISlidingBarStateRequest * _toRequest;
}

@property (nonatomic) long long affectedSides;
@property (nonatomic, retain) _UIPanelCoordinatingAnimator *animator;
@property (nonatomic) bool animatorShouldCoordinate;
@property (nonatomic, copy) UISlidingBarStateRequest *fromRequest;
@property (setter=setFinishingAnimation:, nonatomic) bool isFinishingAnimation;
@property (nonatomic) double progress;
@property (nonatomic) bool shouldAssignOffscreenWidthsToStateRequest;
@property (nonatomic, readonly) UISlidingBarStateRequest *stateRequest;
@property (nonatomic, copy) UISlidingBarStateRequest *toRequest;

+ (double)defaultDuration;
+ (id)timingCurveProvider;
+ (id)timingCurveProviderWithVelocity:(double)arg1;

- (void).cxx_destruct;
- (long long)affectedSides;
- (id)animator;
- (bool)animatorShouldCoordinate;
- (id)description;
- (id)fromRequest;
- (bool)isFinishingAnimation;
- (double)progress;
- (void)setAffectedSides:(long long)arg1;
- (void)setAnimator:(id)arg1;
- (void)setAnimatorShouldCoordinate:(bool)arg1;
- (void)setFinishingAnimation:(bool)arg1;
- (void)setFromRequest:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setShouldAssignOffscreenWidthsToStateRequest:(bool)arg1;
- (void)setToRequest:(id)arg1;
- (bool)shouldAssignOffscreenWidthsToStateRequest;
- (id)stateRequest;
- (id)toRequest;

@end
