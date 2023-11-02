
@interface PRPosterSettings : PTSettings {
    double  _linearWakeDuration;
    double  _wakeDamping;
    double  _wakeDuration;
    double  _wakeMass;
    double  _wakeStiffness;
}

@property (nonatomic) double linearWakeDuration;
@property (nonatomic) double wakeDamping;
@property (nonatomic) double wakeDuration;
@property (nonatomic) double wakeMass;
@property (nonatomic) double wakeStiffness;

+ (id)settingsControllerModule;

- (double)linearWakeDuration;
- (void)setDefaultValues;
- (void)setLinearWakeDuration:(double)arg1;
- (void)setWakeDamping:(double)arg1;
- (void)setWakeDuration:(double)arg1;
- (void)setWakeMass:(double)arg1;
- (void)setWakeStiffness:(double)arg1;
- (double)wakeDamping;
- (double)wakeDuration;
- (double)wakeMass;
- (double)wakeStiffness;

@end
