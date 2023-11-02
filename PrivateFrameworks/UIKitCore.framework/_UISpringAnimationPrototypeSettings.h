
@interface _UISpringAnimationPrototypeSettings : PTSettings {
    double  _dampingRatio;
    double  _response;
    UIViewSpringAnimationBehavior * _springAnimationBehavior;
}

@property (nonatomic) double dampingRatio;
@property (nonatomic) double response;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (double)dampingRatio;
- (double)response;
- (void)setDampingRatio:(double)arg1;
- (void)setDefaultValues;
- (void)setResponse:(double)arg1;
- (id)springAnimationBehavior;

@end
