
@interface SBDataPlanExpirationAlertItem : SBDataPlanAccountAlertItem {
    NSDate * _expirationDate;
}

@property (nonatomic, retain) NSDate *expirationDate;

- (void).cxx_destruct;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (id)expirationDate;
- (id)initWithAccountURL:(id)arg1 expirationDate:(id)arg2;
- (void)setExpirationDate:(id)arg1;

@end
