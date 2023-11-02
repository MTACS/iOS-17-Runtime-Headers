
@interface SBPIPFluidTransitionsSettings : PTSettings {
    SBFFluidBehaviorSettings * _sourceClippingFluidBehavior;
    SBFFluidBehaviorSettings * _targetClippingFluidBehavior;
}

@property (nonatomic, retain) SBFFluidBehaviorSettings *sourceClippingFluidBehavior;
@property (nonatomic, retain) SBFFluidBehaviorSettings *targetClippingFluidBehavior;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (void)setDefaultValues;
- (void)setSourceClippingFluidBehavior:(id)arg1;
- (void)setTargetClippingFluidBehavior:(id)arg1;
- (id)sourceClippingFluidBehavior;
- (id)targetClippingFluidBehavior;

@end
