
@interface CSLockScreenChargingSettings : PTSettings {
    double  _accessoryAnimationBlockingDurationAfterBootInSeconds;
    double  _accessoryAnimationDelayInMilliseconds;
    double  _auxiliaryBoltHeight;
    double  _auxiliaryBoltMaskHeightDifference;
    double  _brightnessFloor;
    double  _omniAccessoryAnimationDelayInMilliseconds;
    bool  _shouldFakeA149Attach;
    bool  _shouldShowMaskForAuxiliaryBattery;
    bool  _shouldUseBrightnessFloor;
    bool  _showWirelessAndAccessoryAnimations;
    bool  _useWhimsicalDesign;
    bool  _warnForIdleDim;
    long long  _wiredChargingAnimationType;
    long long  _wirelessChargingAnimationType;
    double  _wirelessChargingDebounceDurationInSeconds;
    double  _wirelessChargingFirmwareUpdateDebounceDurationInSeconds;
}

@property (nonatomic) double accessoryAnimationBlockingDurationAfterBootInSeconds;
@property (nonatomic) double accessoryAnimationDelayInMilliseconds;
@property (nonatomic) double auxiliaryBoltHeight;
@property (nonatomic) double auxiliaryBoltMaskHeightDifference;
@property (nonatomic) double brightnessFloor;
@property (nonatomic) double omniAccessoryAnimationDelayInMilliseconds;
@property (nonatomic) bool shouldFakeA149Attach;
@property (nonatomic) bool shouldShowMaskForAuxiliaryBattery;
@property (nonatomic) bool shouldUseBrightnessFloor;
@property (nonatomic) bool showWirelessAndAccessoryAnimations;
@property (nonatomic) bool useWhimsicalDesign;
@property (nonatomic) bool warnForIdleDim;
@property (nonatomic) long long wiredChargingAnimationType;
@property (nonatomic) long long wirelessChargingAnimationType;
@property (nonatomic) double wirelessChargingDebounceDurationInSeconds;
@property (nonatomic) double wirelessChargingFirmwareUpdateDebounceDurationInSeconds;

+ (id)settingsControllerModule;

- (double)accessoryAnimationBlockingDurationAfterBootInSeconds;
- (double)accessoryAnimationDelayInMilliseconds;
- (long long)accessoryTypeForAnimationType:(long long)arg1;
- (double)auxiliaryBoltHeight;
- (double)auxiliaryBoltMaskHeightDifference;
- (double)brightnessFloor;
- (double)omniAccessoryAnimationDelayInMilliseconds;
- (void)setAccessoryAnimationBlockingDurationAfterBootInSeconds:(double)arg1;
- (void)setAccessoryAnimationDelayInMilliseconds:(double)arg1;
- (void)setAuxiliaryBoltHeight:(double)arg1;
- (void)setAuxiliaryBoltMaskHeightDifference:(double)arg1;
- (void)setBrightnessFloor:(double)arg1;
- (void)setDefaultValues;
- (void)setOmniAccessoryAnimationDelayInMilliseconds:(double)arg1;
- (void)setShouldFakeA149Attach:(bool)arg1;
- (void)setShouldShowMaskForAuxiliaryBattery:(bool)arg1;
- (void)setShouldUseBrightnessFloor:(bool)arg1;
- (void)setShowWirelessAndAccessoryAnimations:(bool)arg1;
- (void)setUseWhimsicalDesign:(bool)arg1;
- (void)setWarnForIdleDim:(bool)arg1;
- (void)setWiredChargingAnimationType:(long long)arg1;
- (void)setWirelessChargingAnimationType:(long long)arg1;
- (void)setWirelessChargingDebounceDurationInSeconds:(double)arg1;
- (void)setWirelessChargingFirmwareUpdateDebounceDurationInSeconds:(double)arg1;
- (bool)shouldFakeA149Attach;
- (bool)shouldShowMaskForAuxiliaryBattery;
- (bool)shouldUseBrightnessFloor;
- (bool)showWirelessAndAccessoryAnimations;
- (bool)useWhimsicalDesign;
- (bool)warnForIdleDim;
- (long long)wiredChargingAnimationType;
- (long long)wirelessChargingAnimationType;
- (double)wirelessChargingDebounceDurationInSeconds;
- (double)wirelessChargingFirmwareUpdateDebounceDurationInSeconds;

@end
