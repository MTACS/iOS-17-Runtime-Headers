
@interface HealthExperienceUI.SummarySharingSystemContactsPickerViewController : OBWelcomeController <CNContactPickerDelegate, HKSummarySharingEntryStoreDelegate> {
    void healthExperienceStore;
    void healthStore;
    void selectionFlowContext;
    void sharingStore;
    void state;
}

- (void).cxx_destruct;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (void)summarySharingEntryStore:(id)arg1 didUpdateReachabilityStatus:(id)arg2 error:(id)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
