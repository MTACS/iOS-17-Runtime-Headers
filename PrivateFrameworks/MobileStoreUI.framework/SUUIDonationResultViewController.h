
@interface SUUIDonationResultViewController : SUUIDonationStepViewController <SUUIDonationConfigurationObserver> {
    SUUIGiftAmount * _donationAmount;
    SUUIDonationResultView * _resultView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) SUUIGiftAmount *donationAmount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doneButtonAction:(id)arg1;
- (id)donationAmount;
- (void)donationConfigurationController:(id)arg1 didLoadLogoForCharity:(id)arg2;
- (id)initWithCharity:(id)arg1 configuration:(id)arg2;
- (void)loadView;
- (void)setDonationAmount:(id)arg1;

@end
