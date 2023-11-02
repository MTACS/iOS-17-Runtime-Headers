
@interface PKPayLaterDashboardMessageComposer : NSObject {
    PKAccountService * _accountService;
    NSArray * _allFinancingPlans;
    PKBusinessChatController * _businessChatController;
    unsigned long long  _context;
    NSMutableSet * _dashboardMessagesThatNeedSpinners;
    <PKPayLaterDashboardMessageComposerDelegate> * _delegate;
    PKPayLaterFinancingPlan * _financingPlan;
    bool  _isAllContext;
    PKAccount * _payLaterAccount;
    PKPaymentPass * _payLaterPass;
    PKPayLaterPaymentIntentController * _paymentIntentController;
    long long  _settingsNotificationStatus;
    NSDateFormatter * _shortDateFormatter;
}

@property (nonatomic, retain) PKPayLaterFinancingPlan *financingPlan;
@property (nonatomic, retain) PKAccount *payLaterAccount;

+ (void)resetPayLaterDashboardCache;

- (void).cxx_destruct;
- (id)_accountClosed;
- (id)_accountLocked;
- (id)_accountRestrictedNoPastDuePlans;
- (id)_accountRestrictedWithPastDuePlans;
- (id)_accountUnusualActivityDetected;
- (id)_autoPayAvailableForBNPL;
- (id)_autoPayAvailableMessageForSharedCachePrefix:(id)arg1 identifierKeyPrefix:(id)arg2 productType:(unsigned long long)arg3 messageString:(id)arg4;
- (void)_displayDisputeEvidenceRequiredViewControllerForFinancingPlan:(id)arg1 dispute:(id)arg2;
- (void)_displayDisputeExplanationViewControllerForFinancingPlan:(id)arg1 contentType:(unsigned long long)arg2 messageIdentifier:(id)arg3;
- (id)_financingPlanActiveMilitary;
- (id)_financingPlanApprovedDisputes;
- (id)_financingPlanCanceled;
- (id)_financingPlanChargedOff;
- (id)_financingPlanDisasterRecovery;
- (id)_financingPlanEvidenceRequestedDisputes;
- (id)_financingPlanHardshipBenefitorPlan;
- (id)_financingPlanInProgressDisputes;
- (id)_financingPlanOutstandingCredit;
- (id)_financingPlanPaymentReversalMessage;
- (id)_financingPlanProActiveCancellation;
- (id)_financingPlanRAPDeferral;
- (id)_financingPlanRefundIssued;
- (id)_financingPlanRefundRevoked;
- (id)_financingPlanRejectedDisputes;
- (id)_financingPlanSplitDisputes;
- (id)_financingPlanUnresolvedDisputeState;
- (id)_financingPlanWithdrawnDisputes;
- (id)_flagImage;
- (id)_payLaterFinancingDeclinedPayments;
- (id)_payLaterFinancingPlanPastDue;
- (id)_payLaterWelcomeMessageForSharedCacheKey:(id)arg1 identifierKey:(id)arg2 hasValidPlanCount:(bool)arg3 messageString:(id)arg4;
- (id)_payLaterWelcomeMessageWithNoPlans;
- (id)_payLaterWelcomeMessageWithPlans;
- (id)_pencilImage;
- (void)_presentBusinessChatForApplePayLaterAccountWithTopicType:(unsigned long long)arg1;
- (void)_presentBusinessChatForFinancingPlan:(id)arg1 topicType:(unsigned long long)arg2;
- (void)_presentBusinessChatWithContext:(id)arg1;
- (id)_reverseImage;
- (void)_showSpinnerForDashboardMessageIdentifier:(id)arg1 showSpinner:(bool)arg2;
- (id)_systemImageWithName:(id)arg1 tintColor:(id)arg2;
- (void)_updateSharedCacheForKey:(id)arg1 value:(bool)arg2 reloadMessages:(bool)arg3;
- (id)_warningImage;
- (id)dashboardMessages;
- (id)financingPlan;
- (id)initWithContext:(unsigned long long)arg1 allFinancingPlans:(id)arg2 payLaterPass:(id)arg3 payLaterAccount:(id)arg4 financingPlan:(id)arg5 paymentIntentController:(id)arg6 delegate:(id)arg7;
- (id)payLaterAccount;
- (void)preflightDashboardMessagesWithCompletion:(id /* block */)arg1;
- (void)setFinancingPlan:(id)arg1;
- (void)setPayLaterAccount:(id)arg1;

@end
