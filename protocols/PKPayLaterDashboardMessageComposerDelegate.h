
@protocol PKPayLaterDashboardMessageComposerDelegate <NSObject>

@required

- (void)dashboardMessageComposer:(PKPayLaterDashboardMessageComposer *)arg1 requestPresentFinancingPlanDetails:(PKPayLaterFinancingPlan *)arg2;
- (void)dashboardMessageComposer:(PKPayLaterDashboardMessageComposer *)arg1 requestPresentPassDetailsForPass:(PKPaymentPass *)arg2;
- (void)dashboardMessageComposer:(PKPayLaterDashboardMessageComposer *)arg1 requestPresentViewController:(UIViewController *)arg2;
- (void)dashboardMessageComposer:(PKPayLaterDashboardMessageComposer *)arg1 requestPushViewController:(UIViewController *)arg2;
- (void)reloadMessages;

@end
