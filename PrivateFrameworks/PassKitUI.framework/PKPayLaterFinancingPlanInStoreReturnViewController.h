
@interface PKPayLaterFinancingPlanInStoreReturnViewController : PKPayLaterViewController {
    PKPayLaterFinancingPlan * _financingPlan;
    PKPayLaterFinancingPlanInStoreReturnSectionController * _sectionController;
}

- (void).cxx_destruct;
- (id)additionalAnalyticsDictionary;
- (void)didUpdateFinancingPlan:(id)arg1;
- (id)initWithFinancingPlan:(id)arg1 payLaterAccount:(id)arg2;
- (id)pageTag;
- (void)viewDidLoad;

@end
