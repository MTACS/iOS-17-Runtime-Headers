
@protocol _SFSettingsAlertStepperController <NSObject>

@required

- (void)decrementValue:(id <_SFSettingsAlertStepperConfiguration>)arg1;
- (void)incrementValue:(id <_SFSettingsAlertStepperConfiguration>)arg1;
- (void)prepareStepper:(id <_SFSettingsAlertStepperConfiguration>)arg1;

@optional

- (NSString *)longestTextForButton:(long long)arg1;
- (void)resetValue:(id <_SFSettingsAlertStepperConfiguration>)arg1;

@end
