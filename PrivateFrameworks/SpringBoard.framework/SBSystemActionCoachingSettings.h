
@interface SBSystemActionCoachingSettings : PTSettings {
    double  _coachingButtonShadowOpacity;
    double  _coachingButtonShadowRadius;
    double  _coachingLabelShadowOpacity;
    double  _coachingLabelShadowRadius;
    SBFFluidBehaviorSettings * _contractionSettings;
    double  _dimmingAlpha;
    SBFFluidBehaviorSettings * _dismissalSettings;
    SBFFluidBehaviorSettings * _expansionSettings;
    NSString * _policyClassName;
    SBFFluidBehaviorSettings * _presentationSettings;
    SBSystemActionPressWithinTimeIntervalCoachingPolicySettings * _pressWithinTimeIntervalPolicySettings;
    SBSystemActionTrackPreviewsCoachingPolicySettings * _trackPreviewsPolicySettings;
}

@property (nonatomic) double coachingButtonShadowOpacity;
@property (nonatomic) double coachingButtonShadowRadius;
@property (nonatomic) double coachingLabelShadowOpacity;
@property (nonatomic) double coachingLabelShadowRadius;
@property (nonatomic, retain) SBFFluidBehaviorSettings *contractionSettings;
@property (nonatomic) double dimmingAlpha;
@property (nonatomic, retain) SBFFluidBehaviorSettings *dismissalSettings;
@property (nonatomic, retain) SBFFluidBehaviorSettings *expansionSettings;
@property (nonatomic, retain) NSString *policyClassName;
@property (nonatomic, retain) SBFFluidBehaviorSettings *presentationSettings;
@property (nonatomic, retain) SBSystemActionPressWithinTimeIntervalCoachingPolicySettings *pressWithinTimeIntervalPolicySettings;
@property (nonatomic, retain) SBSystemActionTrackPreviewsCoachingPolicySettings *trackPreviewsPolicySettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (double)coachingButtonShadowOpacity;
- (double)coachingButtonShadowRadius;
- (double)coachingLabelShadowOpacity;
- (double)coachingLabelShadowRadius;
- (id)contractionSettings;
- (double)dimmingAlpha;
- (id)dismissalSettings;
- (id)expansionSettings;
- (id)policyClassName;
- (id)presentationSettings;
- (id)pressWithinTimeIntervalPolicySettings;
- (void)setCoachingButtonShadowOpacity:(double)arg1;
- (void)setCoachingButtonShadowRadius:(double)arg1;
- (void)setCoachingLabelShadowOpacity:(double)arg1;
- (void)setCoachingLabelShadowRadius:(double)arg1;
- (void)setContractionSettings:(id)arg1;
- (void)setDefaultValues;
- (void)setDimmingAlpha:(double)arg1;
- (void)setDismissalSettings:(id)arg1;
- (void)setExpansionSettings:(id)arg1;
- (void)setPolicyClassName:(id)arg1;
- (void)setPresentationSettings:(id)arg1;
- (void)setPressWithinTimeIntervalPolicySettings:(id)arg1;
- (void)setTrackPreviewsPolicySettings:(id)arg1;
- (id)trackPreviewsPolicySettings;

@end
