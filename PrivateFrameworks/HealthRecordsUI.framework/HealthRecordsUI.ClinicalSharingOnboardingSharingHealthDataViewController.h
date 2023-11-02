
@interface HealthRecordsUI.ClinicalSharingOnboardingSharingHealthDataViewController : OBWelcomeController {
    void $__lazy_storage_$_doneButton;
    void $__lazy_storage_$_spinner;
    void account;
    void cancellable;
    void onboardingSession;
    void readyToDismiss;
    void selectedItems;
}

- (void).cxx_destruct;
- (void)cancelButtonTapped:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (void)viewDidLoad;

@end
