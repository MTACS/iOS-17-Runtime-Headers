
@interface PKPayLaterBusinessChatTopicComposer : NSObject {
    PKAccountService * _accountService;
    PKPayLaterFinancingPlan * _financingPlan;
    PKPayLaterInstallment * _installment;
    PKAccount * _payLaterAccount;
    PKPaymentPass * _payLaterPass;
    PKPayLaterPayment * _payment;
    PKPaymentWebService * _paymentWebService;
}

- (void).cxx_destruct;
- (void)_allBusinessChatTopicsForContext:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_dynamicBusinessChatTopicsForContext:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_releventTopicsForPassContextWithCompletion:(id /* block */)arg1;
- (id)_staticBusinessChatTopicsForContext:(unsigned long long)arg1;
- (id)_staticFinancingPlanContextBusinessChatTopics;
- (id)_staticFinancingPlanPaymentContextBusinessChatTopics;
- (id)_staticPassContextBusinessChatTopics;
- (id)initWithPayLaterAccount:(id)arg1 payLaterPass:(id)arg2 financingPlan:(id)arg3 installment:(id)arg4 payment:(id)arg5;
- (void)releventTopicsForContext:(unsigned long long)arg1 completion:(id /* block */)arg2;

@end
