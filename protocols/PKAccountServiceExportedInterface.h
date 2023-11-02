
@protocol PKAccountServiceExportedInterface

@required

- (void)accountAdded:(PKAccount *)arg1;
- (void)accountChanged:(PKAccount *)arg1;
- (void)accountFinancingPlanAdded:(PKPayLaterFinancingPlan *)arg1 accountIdentifier:(NSString *)arg2;
- (void)accountFinancingPlanRemoved:(PKPayLaterFinancingPlan *)arg1 accountIdentifier:(NSString *)arg2;
- (void)accountFinancingPlanUpdated:(PKPayLaterFinancingPlan *)arg1 oldFinancingPlan:(PKPayLaterFinancingPlan *)arg2 accountIdentifier:(NSString *)arg3;
- (void)accountRemoved:(PKAccount *)arg1;
- (void)accountUsersChanged:(NSSet *)arg1 forAccountIdentifier:(NSString *)arg2;
- (void)didRemoveAppleBalancePromotionWithUniqueIdentifier:(NSString *)arg1 forAccountIdentifier:(NSString *)arg2;
- (void)didUpdateAccountEnhancedMerchants:(NSArray *)arg1 accountIdentifier:(NSString *)arg2 lastUpdate:(NSDate *)arg3;
- (void)didUpdateAccountPromotions:(NSArray *)arg1 accountIdentifier:(NSString *)arg2;
- (void)didUpdateAppleBalancePromotion:(PKAppleBalancePromotionConfiguration *)arg1 forAccountIdentifier:(NSString *)arg2;
- (void)didUpdateInStoreTopUpToken:(PKAppleBalanceInStoreTopUpToken *)arg1 forAccountIdentifier:(NSString *)arg2;
- (void)didUpdatePaymentFundingSources:(NSArray *)arg1 accountIdentifier:(NSString *)arg2;
- (void)payLaterCardMagnitudesChanged:(PKPayLaterCardMagnitudes *)arg1 forAccountIdentifier:(NSString *)arg2;
- (void)physicalCardsChanged:(NSSet *)arg1 forAccountIdentifier:(NSString *)arg2;
- (void)scheduledPaymentsChangedForAccountIdentifier:(NSString *)arg1;
- (void)statementsChangedForAccountIdentifier:(NSString *)arg1;

@end
