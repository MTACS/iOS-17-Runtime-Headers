
@interface SBFFluidBehaviorSettings : PTSettings <BSDescriptionProviding, UIViewSpringAnimationBehaviorDescribing> {
    long long  _behaviorType;
    double  _dampingRatio;
    double  _dampingRatioSmoothing;
    double  _deceleration;
    double  _inertialProjectionDeceleration;
    double  _inertialTargetSmoothingRatio;
    NSString * _name;
    PTFrameRateRangeSettings * _preferredFrameRateRange;
    double  _response;
    double  _responseSmoothing;
    double  _retargetImpulse;
    bool  _smoothingAndProjectionEnabled;
    double  _trackingDampingRatio;
    double  _trackingDampingRatioSmoothing;
    double  _trackingResponse;
    double  _trackingResponseSmoothing;
    double  _trackingRetargetImpulse;
}

@property (nonatomic) long long behaviorType;
@property (nonatomic) double dampingRatio;
@property (nonatomic) double dampingRatioSmoothing;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double deceleration;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double inertialProjectionDeceleration;
@property (nonatomic) double inertialTargetSmoothingRatio;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) PTFrameRateRangeSettings *preferredFrameRateRange;
@property (nonatomic) double response;
@property (nonatomic) double responseSmoothing;
@property (nonatomic) double retargetImpulse;
@property (nonatomic) bool smoothingAndProjectionEnabled;
@property (readonly) Class superclass;
@property (nonatomic) double trackingDampingRatio;
@property (nonatomic) double trackingDampingRatioSmoothing;
@property (nonatomic) double trackingResponse;
@property (nonatomic) double trackingResponseSmoothing;
@property (nonatomic) double trackingRetargetImpulse;
@property (getter=isUnanimated, nonatomic, readonly) bool unanimated;

// Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation

+ (id)_moduleWithSectionTitle:(id)arg1;
+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)BSAnimationSettings;
- (double)_effectiveTrackingDampingRatio;
- (double)_effectiveTrackingResponse;
- (double)_effectiveTrackingRetargetImpulse;
- (long long)behaviorType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dampingRatio;
- (double)dampingRatioSmoothing;
- (double)deceleration;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (struct CAFrameRateRange { float x1; float x2; float x3; })frameRateRange;
- (unsigned long long)hash;
- (double)inertialProjectionDeceleration;
- (double)inertialTargetSmoothingRatio;
- (bool)isEqual:(id)arg1;
- (id)name;
- (struct { double x1; double x2; bool x3; bool x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; })parametersForTransitionFromState:(int)arg1 toState:(int)arg2;
- (id)preferredFrameRateRange;
- (double)response;
- (double)responseSmoothing;
- (double)retargetImpulse;
- (void)setBehaviorType:(long long)arg1;
- (void)setDampingRatio:(double)arg1;
- (void)setDampingRatioSmoothing:(double)arg1;
- (void)setDeceleration:(double)arg1;
- (void)setDefaultCriticallyDampedValues;
- (void)setDefaultValues;
- (void)setFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1 highFrameRateReason:(unsigned int)arg2;
- (void)setInertialProjectionDeceleration:(double)arg1;
- (void)setInertialTargetSmoothingRatio:(double)arg1;
- (void)setName:(id)arg1;
- (void)setPreferredFrameRateRange:(id)arg1;
- (void)setResponse:(double)arg1;
- (void)setResponseSmoothing:(double)arg1;
- (void)setRetargetImpulse:(double)arg1;
- (void)setSmoothingAndProjectionEnabled:(bool)arg1;
- (void)setTrackingDampingRatio:(double)arg1;
- (void)setTrackingDampingRatioSmoothing:(double)arg1;
- (void)setTrackingResponse:(double)arg1;
- (void)setTrackingResponseSmoothing:(double)arg1;
- (void)setTrackingRetargetImpulse:(double)arg1;
- (double)settlingDuration;
- (bool)smoothingAndProjectionEnabled;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (double)trackingDampingRatio;
- (double)trackingDampingRatioSmoothing;
- (double)trackingResponse;
- (double)trackingResponseSmoothing;
- (double)trackingRetargetImpulse;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

+ (id)unanimatedBehaviorSettings;

- (bool)isUnanimated;
- (id)sb_switcherModifierDebugTimelineDescription;
- (void)setUnanimated:(bool)arg1;

@end
