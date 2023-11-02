
@interface CSLockScreenMesaSettings : PTSettings {
    CSLockScreenBiometricFailureSettings * _fifthFailureSettings;
    CSLockScreenBiometricFailureSettings * _firstFailureSettings;
    bool  _flashRedOnPasscodeRequiredEvents;
    CSLockScreenBiometricFailureSettings * _fourthFailureSettings;
    bool  _passcodeRequiredEventsCountAsFailures;
    CSLockScreenBiometricFailureSettings * _secondFailureSettings;
    double  _slowPressDuration;
    bool  _successFeedbackWaitsUntilButtonUp;
    CSLockScreenBiometricFailureSettings * _thirdFailureSettings;
}

@property (nonatomic, retain) CSLockScreenBiometricFailureSettings *fifthFailureSettings;
@property (nonatomic, retain) CSLockScreenBiometricFailureSettings *firstFailureSettings;
@property (nonatomic) bool flashRedOnPasscodeRequiredEvents;
@property (nonatomic, retain) CSLockScreenBiometricFailureSettings *fourthFailureSettings;
@property (nonatomic) bool passcodeRequiredEventsCountAsFailures;
@property (nonatomic, retain) CSLockScreenBiometricFailureSettings *secondFailureSettings;
@property (nonatomic) double slowPressDuration;
@property (nonatomic) bool successFeedbackWaitsUntilButtonUp;
@property (nonatomic, retain) CSLockScreenBiometricFailureSettings *thirdFailureSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)fifthFailureSettings;
- (id)firstFailureSettings;
- (bool)flashRedOnPasscodeRequiredEvents;
- (id)fourthFailureSettings;
- (bool)passcodeRequiredEventsCountAsFailures;
- (id)secondFailureSettings;
- (void)setDefaultValues;
- (void)setFifthFailureSettings:(id)arg1;
- (void)setFirstFailureSettings:(id)arg1;
- (void)setFlashRedOnPasscodeRequiredEvents:(bool)arg1;
- (void)setFourthFailureSettings:(id)arg1;
- (void)setPasscodeRequiredEventsCountAsFailures:(bool)arg1;
- (void)setSecondFailureSettings:(id)arg1;
- (void)setSlowPressDuration:(double)arg1;
- (void)setSuccessFeedbackWaitsUntilButtonUp:(bool)arg1;
- (void)setThirdFailureSettings:(id)arg1;
- (double)slowPressDuration;
- (bool)successFeedbackWaitsUntilButtonUp;
- (id)thirdFailureSettings;

@end
