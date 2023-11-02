
@interface SBUISystemApertureAnimationParameters : NSObject {
    BSSettings * _BSSettingsRepresentation;
    SBFFluidBehaviorSettings * _fluidBehaviorSettings;
    NSNumber * _retargeted;
    NSNumber * _tracking;
}

@property (nonatomic, readonly) BSSettings *BSSettingsRepresentation;
@property (getter=isAnimated, nonatomic, readonly) bool animated;
@property (nonatomic, readonly) SBFFluidBehaviorSettings *fluidBehaviorSettings;
@property (getter=isRetargeted, nonatomic, readonly) bool retargeted;
@property (nonatomic, readonly) bool tracking;

+ (bool)areParams:(id)arg1 equivalentTo:(id)arg2;

- (void).cxx_destruct;
- (id)BSSettingsRepresentation;
- (long long)_animationBehavior;
- (bool)_hasSpringParameters;
- (id)fluidBehaviorSettings;
- (id)initWithBSSettingsRepresentation:(id)arg1;
- (id)initWithFluidBehaviorSettings:(id)arg1 tracking:(bool)arg2 retargeted:(bool)arg3;
- (bool)isAnimated;
- (bool)isEqual:(id)arg1;
- (bool)isRetargeted;
- (bool)tracking;

@end
