
@interface PSUIFingerprintController : PSListController {
    id  _effectiveSettingsChangedNotificationObserver;
}

@property (nonatomic, retain) id effectiveSettingsChangedNotificationObserver;

- (void).cxx_destruct;
- (bool)canBeShownFromSuspendedState;
- (void)deleteFingerprint:(id)arg1;
- (id)effectiveSettingsChangedNotificationObserver;
- (void)fetchBiometricTemplateForCurrentBiometricIdentity:(id)arg1;
- (id)fingerprintName;
- (id)passcodeController;
- (void)presentAlertIfNeededBeforeDeletingFingerPrint:(id)arg1;
- (void)presentAlertSheetForFingerprintBindingToGovernmentID:(id)arg1;
- (void)presentPopUpAlertForFingerprintBindingToGovernmentID:(id)arg1;
- (void)replaceFingerprint:(id)arg1;
- (id)representedBiometricIdentity;
- (void)setEffectiveSettingsChangedNotificationObserver:(id)arg1;
- (void)setFingerprintName:(id)arg1;
- (bool)shouldSelectResponderOnAppearance;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
