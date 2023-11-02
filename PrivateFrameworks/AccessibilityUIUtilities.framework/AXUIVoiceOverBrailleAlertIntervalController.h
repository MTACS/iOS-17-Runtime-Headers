
@interface AXUIVoiceOverBrailleAlertIntervalController : AXUISettingsNumericalPickerViewController

- (bool)infiniteTimeEnabled;
- (long long)keyboardTypeForSpecifier:(id)arg1;
- (id)localizedFooterText;
- (id)localizedTitle;
- (double)maximumValue;
- (double)minimumValue;
- (bool)numericalPreferenceEnabled;
- (double)numericalPreferenceValue;
- (void)setInfiniteTimeEnabled:(bool)arg1;
- (void)setNumericalPreferenceEnabledFromUser:(bool)arg1;
- (void)setNumericalPreferenceValueFromUser:(double)arg1;
- (double)stepAmount;
- (bool)supportsInfiniteTime;
- (bool)userCanDisableNumericalPreference;

@end
