
@interface PKPayLaterFinancingPlanPaymentScheduleComposer : NSObject {
    <PKPayLaterFinancingPlanPaymentScheduleComposerDataSource> * _dataSource;
    <PKPayLaterFinancingPlanPaymentScheduleComposerDelegate> * _delegate;
    UIFont * _font;
    double  _minimumCellHeight;
}

+ (id)_detailTextForPaymentWithCreditRevokedType:(id)arg1 financingPlan:(id)arg2;
+ (id)_detailTextForPaymentWithDisputeCreditType:(id)arg1 financingPlan:(id)arg2;
+ (id)_detailTextForPaymentWithPaymentType:(id)arg1 financingPlan:(id)arg2;
+ (id)_detailTextForPaymentWithRefundRevokedType:(id)arg1 financingPlan:(id)arg2;
+ (id)_detailTextForPaymentWithRefundType:(id)arg1 financingPlan:(id)arg2;
+ (id)_detailTextForPaymentWithTemporaryCreditType:(id)arg1 financingPlan:(id)arg2;
+ (unsigned long long)_scheduleComposerDetailTypeForPayment:(id)arg1 financingPlan:(id)arg2;
+ (id)attributedStringWithText:(id)arg1 strikethrough:(bool)arg2;
+ (id)detailTextForPayment:(id)arg1 financingPlan:(id)arg2;
+ (id)mediumDateFormatter;
+ (id)numberFormatter;
+ (id)shortDateFormatter;

- (void).cxx_destruct;
- (id)_commonRowWithRowIndex:(long long)arg1;
- (id)_formRowsWithList:(id)arg1 financingPlan:(id)arg2 payLaterAccount:(id)arg3;
- (id)_paymentForItem:(id)arg1;
- (id /* block */)_selectionBlockForPayment:(id)arg1 financingPlan:(id)arg2 payLaterAccount:(id)arg3;
- (void)_updateRowConnectorsForRows:(id)arg1;
- (id)composeFinancingPlanPaymentScheduleLineItemsForPlan:(id)arg1 payLaterAccount:(id)arg2;
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;

@end
