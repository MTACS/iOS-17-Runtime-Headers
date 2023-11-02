
@interface SBDataPlanAccountAlertItem : SBDataPlanAlertItem <SBDataPlanAlertActions> {
    NSURL * _accountURL;
}

@property (nonatomic, copy) NSURL *accountURL;

+ (id)laterButtonTitle;
+ (id)nowButtonTitle;

- (void).cxx_destruct;
- (id)accountURL;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (id)initWithAccountURL:(id)arg1;
- (void)notNow;
- (void)setAccountURL:(id)arg1;
- (void)takeAction;

@end
