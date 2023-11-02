
@interface SBDataPlanUsageAlertItem : SBDataPlanAccountAlertItem {
    NSNumber * _remainingPortion;
}

@property (nonatomic, retain) NSNumber *remainingPortion;

- (void).cxx_destruct;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (id)initWithAccountURL:(id)arg1 usage:(id)arg2;
- (id)remainingPortion;
- (void)setRemainingPortion:(id)arg1;

@end
