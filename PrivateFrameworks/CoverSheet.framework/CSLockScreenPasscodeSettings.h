
@interface CSLockScreenPasscodeSettings : PTSettings {
    double  _lightenSourceOverColorAlpha;
    double  _lightenSourceOverColorWhite;
    double  _plusDColorAlpha;
    double  _plusDColorWhite;
}

@property (nonatomic) double lightenSourceOverColorAlpha;
@property (nonatomic) double lightenSourceOverColorWhite;
@property (nonatomic) double plusDColorAlpha;
@property (nonatomic) double plusDColorWhite;

+ (id)settingsControllerModule;

- (double)lightenSourceOverColorAlpha;
- (double)lightenSourceOverColorWhite;
- (double)plusDColorAlpha;
- (double)plusDColorWhite;
- (void)setDefaultValues;
- (void)setLightenSourceOverColorAlpha:(double)arg1;
- (void)setLightenSourceOverColorWhite:(double)arg1;
- (void)setPlusDColorAlpha:(double)arg1;
- (void)setPlusDColorWhite:(double)arg1;

@end
