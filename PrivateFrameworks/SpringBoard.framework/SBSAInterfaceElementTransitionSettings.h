
@interface SBSAInterfaceElementTransitionSettings : SBSystemApertureTransitionSettings {
    SBFFluidBehaviorSettings * _alphaBehaviorSettings;
    SBFFluidBehaviorSettings * _backgroundColorBehaviorSettings;
    SBFFluidBehaviorSettings * _boundsBehaviorSettings;
    SBFFluidBehaviorSettings * _centerBehaviorSettings;
    SBFFluidBehaviorSettings * _cornerRadiusBehaviorSettings;
}

@property (nonatomic, retain) SBFFluidBehaviorSettings *alphaBehaviorSettings;
@property (nonatomic, retain) SBFFluidBehaviorSettings *backgroundColorBehaviorSettings;
@property (nonatomic, retain) SBFFluidBehaviorSettings *boundsBehaviorSettings;
@property (nonatomic, retain) SBFFluidBehaviorSettings *centerBehaviorSettings;
@property (nonatomic, retain) SBFFluidBehaviorSettings *cornerRadiusBehaviorSettings;

+ (id)_childSettingsKeyPathsToTitles;

- (void).cxx_destruct;
- (id)alphaBehaviorSettings;
- (id)backgroundColorBehaviorSettings;
- (id)boundsBehaviorSettings;
- (id)centerBehaviorSettings;
- (id)cornerRadiusBehaviorSettings;
- (void)setAlphaBehaviorSettings:(id)arg1;
- (void)setBackgroundColorBehaviorSettings:(id)arg1;
- (void)setBoundsBehaviorSettings:(id)arg1;
- (void)setCenterBehaviorSettings:(id)arg1;
- (void)setCornerRadiusBehaviorSettings:(id)arg1;

@end
