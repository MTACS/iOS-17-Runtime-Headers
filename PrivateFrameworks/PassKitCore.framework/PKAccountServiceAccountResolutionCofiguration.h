
@interface PKAccountServiceAccountResolutionCofiguration : NSObject {
    <PKBusinessChatContext> * _businessChatContext;
    PKCreditInstallmentPlan * _earlyInstallmentPlan;
}

@property (nonatomic, retain) <PKBusinessChatContext> *businessChatContext;
@property (nonatomic, retain) PKCreditInstallmentPlan *earlyInstallmentPlan;

- (void).cxx_destruct;
- (id)businessChatContext;
- (id)description;
- (id)earlyInstallmentPlan;
- (void)setBusinessChatContext:(id)arg1;
- (void)setEarlyInstallmentPlan:(id)arg1;

@end
