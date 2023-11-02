
@interface HKOrganDonationBaseViewController : HKTitledBuddyViewController {
    NSString * _completionButtonTitle;
    _HKMedicalIDData * _medicalIDData;
    id /* block */  _registrationCompletionHandler;
}

@property (nonatomic, retain) NSString *completionButtonTitle;
@property (nonatomic, retain) _HKMedicalIDData *medicalIDData;
@property (nonatomic, copy) id /* block */ registrationCompletionHandler;

- (void).cxx_destruct;
- (id)completionButtonTitle;
- (id)initWithMedicalIDData:(id)arg1;
- (id)medicalIDData;
- (id /* block */)registrationCompletionHandler;
- (void)setCompletionButtonTitle:(id)arg1;
- (void)setMedicalIDData:(id)arg1;
- (void)setRegistrationCompletionHandler:(id /* block */)arg1;

@end
