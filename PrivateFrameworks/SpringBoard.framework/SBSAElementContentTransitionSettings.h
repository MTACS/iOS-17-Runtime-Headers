
@interface SBSAElementContentTransitionSettings : SBSystemApertureTransitionSettings {
    SBFFluidBehaviorSettings * _customContentBehaviorSettings;
    SBFFluidBehaviorSettings * _sensorObscuringShadowBehaviorSettings;
    SBFFluidBehaviorSettings * _snapshotBehaviorSettings;
    SBFFluidBehaviorSettings * _subcomponentBehaviorSettings;
}

@property (nonatomic, retain) SBFFluidBehaviorSettings *customContentBehaviorSettings;
@property (nonatomic, retain) SBFFluidBehaviorSettings *sensorObscuringShadowBehaviorSettings;
@property (nonatomic, retain) SBFFluidBehaviorSettings *snapshotBehaviorSettings;
@property (nonatomic, retain) SBFFluidBehaviorSettings *subcomponentBehaviorSettings;

+ (id)_childSettingsKeyPathsToTitles;

- (void).cxx_destruct;
- (id)customContentBehaviorSettings;
- (id)sensorObscuringShadowBehaviorSettings;
- (void)setCustomContentBehaviorSettings:(id)arg1;
- (void)setSensorObscuringShadowBehaviorSettings:(id)arg1;
- (void)setSnapshotBehaviorSettings:(id)arg1;
- (void)setSubcomponentBehaviorSettings:(id)arg1;
- (id)snapshotBehaviorSettings;
- (id)subcomponentBehaviorSettings;

@end
