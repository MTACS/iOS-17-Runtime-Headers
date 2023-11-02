
@interface PKPayLaterFinancingPlanListSectionController : PKPayLaterSectionController {
    PKPayLaterBusinessChatTopic * _businessChatTopic;
    unsigned long long  _context;
    <PKPayLaterFinancingPlanListSectionControllerDelegate> * _delegate;
    PKPaymentTransactionIconGenerator * _iconGenerator;
    NSMutableDictionary * _icons;
    NSNumberFormatter * _numberFormatter;
    PKPaymentPass * _payLaterPass;
    PKPayLaterPaymentIntentController * _paymentIntentController;
    NSMutableDictionary * _primaryFinancingPlanRows;
    NSArray * _primaryFinancingPlans;
    NSMutableDictionary * _secondaryFinancingPlanRows;
    NSArray * _secondaryFinancingPlans;
    NSArray * _sortedPriaryFinancingPlanIdentifiers;
    NSArray * _sortedSecondaryFinancingPlanIdentifiers;
    long long  _tertiaryFinancingPlansCount;
}

@property (nonatomic, retain) PKPayLaterBusinessChatTopic *businessChatTopic;
@property (nonatomic, readonly) unsigned long long context;
@property (nonatomic, retain) PKPaymentPass *payLaterPass;
@property (nonatomic, retain) NSArray *primaryFinancingPlans;
@property (nonatomic, retain) NSArray *secondaryFinancingPlans;
@property (nonatomic) long long tertiaryFinancingPlansCount;

- (void).cxx_destruct;
- (void)_configurePrimaryFinancingPlansSection:(id)arg1;
- (void)_configureSecondaryFinancingPlansSection:(id)arg1;
- (void)_configureTertiaryFinancingPlansCountSection:(id)arg1;
- (id)_createFinancingPlanRowForPlan:(id)arg1 rowIndex:(long long)arg2;
- (id)_createIconTextRowForPlan:(id)arg1;
- (id)_rowForPlanIdentifier:(id)arg1;
- (void)_showTopicExplanationForRow:(id)arg1 topic:(id)arg2 financingPlan:(id)arg3 continueBlock:(id /* block */)arg4;
- (void)_updateCachedValues;
- (void)_updateIconForFinancingPlan:(id)arg1 row:(id)arg2;
- (id)businessChatTopic;
- (unsigned long long)context;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })firstSectionHeaderEdgeInsets;
- (id)headerAttributedStringForIdentifier:(id)arg1;
- (id)identifiers;
- (id)initWithPayLaterAccount:(id)arg1 context:(unsigned long long)arg2 primaryFinancingPlans:(id)arg3 secondaryFinancingPlans:(id)arg4 tertiaryFinancingPlansCount:(long long)arg5 payLaterPass:(id)arg6 businessChatTopic:(id)arg7 paymentIntentController:(id)arg8 dynamicContentPage:(id)arg9 delegate:(id)arg10;
- (id)payLaterPass;
- (id)primaryFinancingPlans;
- (id)secondaryFinancingPlans;
- (void)setBusinessChatTopic:(id)arg1;
- (void)setPayLaterPass:(id)arg1;
- (void)setPrimaryFinancingPlans:(id)arg1;
- (void)setSecondaryFinancingPlans:(id)arg1;
- (void)setTertiaryFinancingPlansCount:(long long)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (long long)tertiaryFinancingPlansCount;

@end
