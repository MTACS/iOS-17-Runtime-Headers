
@interface PKDashboardFinancingPlanInstallmentItem : NSObject <PKDashboardItem> {
    PKPayLaterFinancingPlan * _financingPlan;
    NSString * _pageTag;
    PKPayLaterPaymentIntentController * _paymentIntentController;
    PKPayLaterInstallment * _relevantInstallment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKPayLaterFinancingPlan *financingPlan;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *pageTag;
@property (nonatomic, readonly) PKPayLaterPaymentIntentController *paymentIntentController;
@property (nonatomic, readonly) PKPayLaterInstallment *relevantInstallment;
@property (readonly) Class superclass;

+ (id)identifier;

- (void).cxx_destruct;
- (id)financingPlan;
- (id)initWithFinancingPlan:(id)arg1 relevantInstallment:(id)arg2 paymentIntentController:(id)arg3 pageTag:(id)arg4;
- (id)pageTag;
- (id)paymentIntentController;
- (id)relevantInstallment;

@end
