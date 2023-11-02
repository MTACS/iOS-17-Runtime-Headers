
@interface SBDataPlanCompletionAlertItem : SBDataPlanAlertItem {
    NSString * _carrierName;
    bool  _newAccount;
}

@property (nonatomic, copy) NSString *carrierName;
@property (getter=isNewAccount, nonatomic) bool newAccount;

- (void).cxx_destruct;
- (id)carrierName;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (id)initWithCarrierName:(id)arg1 newAccount:(bool)arg2;
- (bool)isNewAccount;
- (void)setCarrierName:(id)arg1;
- (void)setNewAccount:(bool)arg1;

@end
