
@interface CNContactIgnoreDonatedInformationAction : CNContactAction {
    CNUIExternalComponentsFactory * _componentsFactory;
    CNDonationStore * _donationStore;
}

@property (nonatomic, readonly) CNUIExternalComponentsFactory *componentsFactory;
@property (nonatomic, readonly) CNDonationStore *donationStore;

- (void).cxx_destruct;
- (id)componentsFactory;
- (id)donationStore;
- (id)initWithContact:(id)arg1;
- (id)initWithContact:(id)arg1 donationStore:(id)arg2 componentsFactory:(id)arg3;
- (void)performActionWithSender:(id)arg1;
- (bool)rejectAllDonations;
- (void)showRejectionFailureAlert;

@end
