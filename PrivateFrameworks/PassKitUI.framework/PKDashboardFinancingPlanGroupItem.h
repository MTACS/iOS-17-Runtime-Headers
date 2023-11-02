
@interface PKDashboardFinancingPlanGroupItem : NSObject <PKDashboardItem> {
    long long  _financingPlansCount;
    NSString * _pageTag;
    PKAccount * _payLaterAccount;
    PKPayLaterPaymentIntentController * _paymentIntentController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long financingPlansCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *pageTag;
@property (nonatomic, readonly) PKAccount *payLaterAccount;
@property (nonatomic, readonly) PKPayLaterPaymentIntentController *paymentIntentController;
@property (readonly) Class superclass;

+ (id)identifier;

- (void).cxx_destruct;
- (long long)financingPlansCount;
- (id)initWithFinancingPlansCount:(long long)arg1 payLaterAccount:(id)arg2 paymentIntentController:(id)arg3 pageTag:(id)arg4;
- (id)pageTag;
- (id)payLaterAccount;
- (id)paymentIntentController;

@end
