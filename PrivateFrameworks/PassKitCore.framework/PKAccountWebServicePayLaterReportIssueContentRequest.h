
@interface PKAccountWebServicePayLaterReportIssueContentRequest : PKAccountWebServicePayLaterContentRequest {
    NSString * _contextString;
    PKPayLaterFinancingPlan * _financingPlan;
    PKPayLaterInstallment * _installment;
    PKPayLaterPayment * _payment;
}

@property (nonatomic, retain) PKPayLaterFinancingPlan *financingPlan;
@property (nonatomic, retain) PKPayLaterInstallment *installment;
@property (nonatomic, retain) PKPayLaterPayment *payment;

- (void).cxx_destruct;
- (id)bodyDictionary;
- (id)contextString;
- (id)financingPlan;
- (id)initWithTopic:(id)arg1;
- (id)installment;
- (id)payment;
- (void)setFinancingPlan:(id)arg1;
- (void)setInstallment:(id)arg1;
- (void)setPayment:(id)arg1;

@end
