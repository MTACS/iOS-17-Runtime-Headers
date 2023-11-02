
@interface PKBusinessChatPayLaterContext : NSObject <PKBusinessChatContext> {
    PKPayLaterFinancingPlanDispute * _dispute;
    PKPayLaterFinancingPlan * _financingPlan;
    PKPayLaterInstallment * _installment;
    PKAccount * _payLaterAccount;
    PKPayLaterPayment * _payment;
    PKPaymentPass * _paymentPass;
    PKPayLaterBusinessChatTopic * _topic;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bodyText;
- (id)businessIdentifier;
- (id)groupParameters;
- (id)initWithPayLaterAccount:(id)arg1 paymentPass:(id)arg2 topic:(id)arg3 financingPlan:(id)arg4 installment:(id)arg5 payment:(id)arg6 dispute:(id)arg7;
- (id)intentParameters;
- (bool)requiresAuthorization;

@end
