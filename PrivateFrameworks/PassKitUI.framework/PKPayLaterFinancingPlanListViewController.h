
@interface PKPayLaterFinancingPlanListViewController : PKPayLaterViewController <PKPayLaterFinancingPlanListSectionControllerDelegate> {
    PKAccountService * _accountService;
    PKBusinessChatController * _businessChatController;
    PKPayLaterFinancingPlanListViewControllerConfiguration * _configuration;
    PKAccountServicePayLaterFinancingPlanQuery * _primaryFinancingPlansUpdateQuery;
    PKAccountServicePayLaterFinancingPlanQuery * _secondaryFinancingPlansUpdateQuery;
    PKPayLaterFinancingPlanListSectionController * _sectionController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)activePlansAndCompletedPlansCountListViewControllerWithPayLaterAccount:(id)arg1 paymentIntentController:(id)arg2 financingPlans:(id)arg3 completedFinancingPlansCount:(long long)arg4;
+ (id)completedFinancingPlansListViewControllerWithPayLaterAccount:(id)arg1 paymentIntentController:(id)arg2 completedFinancingPlans:(id)arg3 completedFinancingPlansQuery:(id)arg4;
+ (id)disputeFinancingPlansListViewControllerWithPayLaterAccount:(id)arg1 payLaterPass:(id)arg2 businessChatTopic:(id)arg3 financingPlans:(id)arg4 completedFinancingPlans:(id)arg5 financingPlansUpdateQuery:(id)arg6 completedFinancingPlansQuery:(id)arg7;
+ (id)financingPlansListViewControllerWithPayLaterAccount:(id)arg1 paymentIntentController:(id)arg2 financingPlans:(id)arg3 financingPlansUpdateQuery:(id)arg4;

- (void).cxx_destruct;
- (void)_updatedFinancingPlan:(id)arg1;
- (id)additionalAnalyticsDictionary;
- (void)didAddFinancingPlan:(id)arg1;
- (void)didRemoveFinancingPlan:(id)arg1;
- (void)didUpdateFinancingPlan:(id)arg1;
- (void)didUpdatePayLaterAccount:(id)arg1;
- (id)initWithPayLaterAccount:(id)arg1 context:(unsigned long long)arg2 primaryFinancingPlans:(id)arg3 secondaryFinancingPlans:(id)arg4 tertiaryFinancingPlansCount:(long long)arg5 payLaterPass:(id)arg6 businessChatTopic:(id)arg7 paymentIntentController:(id)arg8 primaryFinancingPlansUpdateQuery:(id)arg9 secondaryFinancingPlansUpdateQuery:(id)arg10;
- (void)openBusinessChatForTopic:(id)arg1 financingPlan:(id)arg2;
- (id)pageTag;
- (void)viewDidLoad;

@end
