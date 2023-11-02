
@interface PassKitUI.ProvisioningAddPaymentPassViewController : PKPaymentSetupFieldsViewController <PKProvisioningFieldsUIRenderer> {
    void configuration;
    void coordinator;
    void hasMultipleDestinationDevices;
    void privacyController;
    void provisioningContext;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)didTransitionTo:(long long)arg1 loading:(bool)arg2;
- (void)didUpdateFieldModel;
- (void)handleNextButtonTapped:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWebService:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4;
- (void)showWithProvisioningError:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)visibleFieldIdentifiers;

@end
