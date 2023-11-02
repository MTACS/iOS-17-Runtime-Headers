
@interface SBDataPlanFailureAlertItem : SBDataPlanAccountAlertItem {
    NSString * _carrierName;
    bool  _newAccount;
}

@property (nonatomic, copy) NSString *carrierName;
@property (getter=isNewAccount, nonatomic) bool newAccount;

+ (id)laterButtonTitle;
+ (id)nowButtonTitle;

- (void).cxx_destruct;
- (id)carrierName;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (id)initWithAccountURL:(id)arg1 carrierName:(id)arg2 newAccount:(bool)arg3;
- (bool)isNewAccount;
- (void)setCarrierName:(id)arg1;
- (void)setNewAccount:(bool)arg1;

@end
