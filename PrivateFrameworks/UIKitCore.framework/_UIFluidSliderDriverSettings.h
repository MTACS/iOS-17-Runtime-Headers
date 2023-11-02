
@interface _UIFluidSliderDriverSettings : PTSettings {
    _UISpringAnimationPrototypeSettings * _acceleratedUpdate;
    _UISpringAnimationPrototypeSettings * _update;
}

@property (nonatomic, retain) _UISpringAnimationPrototypeSettings *acceleratedUpdate;
@property (nonatomic, retain) _UISpringAnimationPrototypeSettings *update;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)acceleratedUpdate;
- (void)setAcceleratedUpdate:(id)arg1;
- (void)setDefaultValues;
- (void)setUpdate:(id)arg1;
- (id)update;

@end
