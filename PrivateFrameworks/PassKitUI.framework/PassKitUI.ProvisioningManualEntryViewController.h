
@interface PassKitUI.ProvisioningManualEntryViewController : PKPaymentSetupFieldsViewController <PKProvisioningFieldsUIRenderer> {
    void coordinator;
    void isSecondaryEntry;
    void provisioningContext;
}

- (void).cxx_destruct;
- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)didTransitionTo:(long long)arg1 loading:(bool)arg2;
- (void)didUpdateFieldModel;
- (void)fieldCellEditableTextFieldValueDidChange:(id)arg1;
- (void)handleNextButtonTapped:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWebService:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4;
- (void)showWithProvisioningError:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (id)visibleFieldIdentifiers;

@end
