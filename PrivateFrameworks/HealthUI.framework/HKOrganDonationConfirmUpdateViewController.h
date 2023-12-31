
@interface HKOrganDonationConfirmUpdateViewController : HKOrganDonationBaseViewController {
    HKOrganDonationConnectionManager * _connectionManager;
    HKOrganDonationRegistrant * _registrant;
}

- (void).cxx_destruct;
- (id)bodyString;
- (id)bottomAnchoredButtons;
- (void)buttonAtIndexTapped:(long long)arg1;
- (id)initWithRegistrant:(id)arg1 medicalIDData:(id)arg2 connectionManager:(id)arg3;
- (id)titleImage;
- (id)titleString;
- (void)updateButtonTapped:(id)arg1;

@end
