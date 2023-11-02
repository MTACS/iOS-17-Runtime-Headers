
@interface CSLockScreenBiometricFailureSettings : PTSettings {
    bool  _jiggleLock;
    bool  _showPasscode;
    bool  _vibrate;
    bool  _waitUntilButtonUp;
}

@property (nonatomic) bool jiggleLock;
@property (nonatomic) bool showPasscode;
@property (nonatomic) bool vibrate;
@property (nonatomic) bool waitUntilButtonUp;

+ (id)settingsControllerModule;

- (bool)jiggleLock;
- (void)setDefaultValues;
- (void)setJiggleLock:(bool)arg1;
- (void)setShowPasscode:(bool)arg1;
- (void)setVibrate:(bool)arg1;
- (void)setWaitUntilButtonUp:(bool)arg1;
- (bool)showPasscode;
- (bool)vibrate;
- (bool)waitUntilButtonUp;

@end
