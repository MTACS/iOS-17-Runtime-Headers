
@interface RMUIPasscodeViewModelProvider : NSObject {
    RMObserverStore * _observerStore;
    NSDictionary * _passcodeSettings;
    RMUIPasscodeViewModel * _passcodeViewModel;
}

@property (nonatomic, retain) RMObserverStore *observerStore;
@property (nonatomic, copy) NSDictionary *passcodeSettings;
@property (nonatomic, retain) RMUIPasscodeViewModel *passcodeViewModel;

+ (void)_applyPasscodeDeclaration:(id)arg1 toConglomerate:(id)arg2;

- (void).cxx_destruct;
- (id)_maximumFailedAttempts;
- (id)_maximumGracePeriodInMinutes;
- (id)_maximumInactivityInMinutes;
- (id)_maximumPasscodeAgeInDays;
- (id)_minimumComplexCharacters;
- (id)_minimumLength;
- (id)_passcodeReuseLimit;
- (id)_requireAlphanumericPasscode;
- (id)_requireComplexPasscode;
- (id)_requirePasscode;
- (void)_updateViewModelsIsManaged:(bool)arg1 passcodeSettings:(id)arg2;
- (id)description;
- (id)init;
- (void)loadPasscodeSettingsFromConfigurationWithCompletionHandler:(id /* block */)arg1;
- (id)observerStore;
- (id)passcodeSettings;
- (id)passcodeViewModel;
- (void)setObserverStore:(id)arg1;
- (void)setPasscodeSettings:(id)arg1;
- (void)setPasscodeViewModel:(id)arg1;

@end
