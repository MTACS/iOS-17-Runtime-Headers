
@interface SBHLibraryIndicatorIconSettings : PTSettings {
    SBFFluidBehaviorSettings * _pod1AnimationSettings;
    double  _pod1Scale;
    SBFFluidBehaviorSettings * _pod2AnimationSettings;
    double  _pod2Scale;
    SBFFluidBehaviorSettings * _pod3AnimationSettings;
    double  _pod3Scale;
}

@property (nonatomic, retain) SBFFluidBehaviorSettings *pod1AnimationSettings;
@property (nonatomic) double pod1Scale;
@property (nonatomic, retain) SBFFluidBehaviorSettings *pod2AnimationSettings;
@property (nonatomic) double pod2Scale;
@property (nonatomic, retain) SBFFluidBehaviorSettings *pod3AnimationSettings;
@property (nonatomic) double pod3Scale;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)pod1AnimationSettings;
- (double)pod1Scale;
- (id)pod2AnimationSettings;
- (double)pod2Scale;
- (id)pod3AnimationSettings;
- (double)pod3Scale;
- (void)setDefaultValues;
- (void)setPod1AnimationSettings:(id)arg1;
- (void)setPod1Scale:(double)arg1;
- (void)setPod2AnimationSettings:(id)arg1;
- (void)setPod2Scale:(double)arg1;
- (void)setPod3AnimationSettings:(id)arg1;
- (void)setPod3Scale:(double)arg1;

@end
