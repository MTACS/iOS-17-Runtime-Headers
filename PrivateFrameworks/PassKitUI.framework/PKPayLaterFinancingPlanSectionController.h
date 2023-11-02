
@interface PKPayLaterFinancingPlanSectionController : PKPayLaterSectionController <PKDashboardMessagesViewDelegate, PKPayLaterFinancingPlanPaymentScheduleComposerDataSource, PKPayLaterFinancingPlanPaymentScheduleComposerDelegate> {
    NSString * _currentDashboardMessageIdentifier;
    long long  _currentDashboardMessageIndex;
    NSOrderedSet * _dashboardMessages;
    PKPayLaterFinancingPlan * _financingPlan;
    PKPayLaterTitleDetailRow * _fundingSourceRow;
    PKCollectionHeaderView * _headerView;
    NSDateFormatter * _mediumDateFormatter;
    UIImage * _merchantIcon;
    PKPayLaterSubtitleRow * _miniMirandaRow;
    NSNumberFormatter * _numberFormatter;
    PKPaymentPass * _payLaterPass;
    PKPayLaterPaymentIntentController * _paymentIntentController;
    PKPayLaterFinancingPlanPaymentScheduleComposer * _paymentScheduleComposer;
    PKPayLaterButtonRow * _reportIssueButton;
    NSDateFormatter * _shortDateFormatter;
    PKPayLaterTitleDetailValueRow * _statusSummaryRow;
    PKPayLaterTitleDetailRow * _totalFinancedRow;
    PKPayLaterStackedLeadingTrailingRow * _totalPaidRow;
    bool  _useRawMerchantName;
}

@property (nonatomic, retain) NSOrderedSet *dashboardMessages;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKPayLaterFinancingPlan *financingPlan;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *merchantIcon;
@property (nonatomic, retain) PKPayLaterPaymentIntentController *paymentIntentController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureDashboardMessagesSection:(id)arg1;
- (void)_configureDefaultSummarySection:(id)arg1;
- (void)_configureFundingSourceSection:(id)arg1;
- (void)_configureMiniMirandaSection:(id)arg1;
- (void)_configurePaymentScheduleSection:(id)arg1;
- (void)_configureStatusInformationSummarySection:(id)arg1;
- (void)_configureSummarySection:(id)arg1;
- (unsigned long long)_dashboardMessageIndexForIdentifier:(id)arg1 inMessages:(id)arg2;
- (void)_handleHeaderTapRecognizer:(id)arg1;
- (id)_totalCostRow;
- (void)configureCellForRegistration:(id)arg1 item:(id)arg2;
- (void)configureHeaderView:(id)arg1 forSectionIdentifier:(id)arg2;
- (id)dashboardMessages;
- (id)financingPlan;
- (Class)headerViewClassForSectionIdentifier:(id)arg1;
- (double)headerViewHeight;
- (id)identifiers;
- (id)initWithFinancingPlan:(id)arg1 payLaterAccount:(id)arg2 payLaterPass:(id)arg3 dynamicContentPage:(id)arg4 merchantIcon:(id)arg5 paymentIntentController:(id)arg6 delegate:(id)arg7;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (id)listLayoutConfigurationWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (id)merchantIcon;
- (void)messagesView:(id)arg1 scrolledToMessageWithIdentifier:(id)arg2;
- (bool)messagesView:(id)arg1 shouldEnqueueEventForView:(id)arg2;
- (id)paymentIntentController;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)reportAnalyticsEvent:(id)arg1;
- (void)setDashboardMessages:(id)arg1;
- (void)setFinancingPlan:(id)arg1;
- (void)setPaymentIntentController:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
