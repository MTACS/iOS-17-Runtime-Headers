
@interface PXContentPrivacySettings : PXSettings {
    long long  _authenticationBehaviorUponAppearing;
    bool  _shouldAlwaysShowUnlockButtonInContentUnavailableViews;
    long long  _simulatedAuthenticationType;
    long long  _simulationMode;
}

@property (nonatomic) long long authenticationBehaviorUponAppearing;
@property (nonatomic) bool shouldAlwaysShowUnlockButtonInContentUnavailableViews;
@property (nonatomic) long long simulatedAuthenticationType;
@property (nonatomic) long long simulationMode;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (long long)authenticationBehaviorUponAppearing;
- (bool)contentPrivacyEnabled;
- (id)parentSettings;
- (void)setAuthenticationBehaviorUponAppearing:(long long)arg1;
- (void)setDefaultValues;
- (void)setShouldAlwaysShowUnlockButtonInContentUnavailableViews:(bool)arg1;
- (void)setSimulatedAuthenticationType:(long long)arg1;
- (void)setSimulationMode:(long long)arg1;
- (bool)shouldAlwaysShowUnlockButtonInContentUnavailableViews;
- (long long)simulatedAuthenticationType;
- (long long)simulationMode;

@end
