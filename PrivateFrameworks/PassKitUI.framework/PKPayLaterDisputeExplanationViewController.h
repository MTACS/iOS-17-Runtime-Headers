
@interface PKPayLaterDisputeExplanationViewController : PKPayLaterViewController {
    PKBusinessChatController * _businessChatController;
    PKPayLaterFinancingPlanDispute * _dispute;
    PKPayLaterDynamicContentPage * _dynamicContentPage;
    PKPayLaterFinancingPlan * _financingPlan;
    unsigned long long  _layout;
    PKPaymentPass * _payLaterPass;
    PKPayLaterDisputeExplanationSectionController * _sectionController;
}

+ (id)dynamicContentPageForEvidenceRequiredForDispute:(id)arg1;

- (void).cxx_destruct;
- (void)_resendEmailTapped;
- (void)_showSpinner:(bool)arg1;
- (id)initWithFinancingPlan:(id)arg1 dispute:(id)arg2 payLaterAccount:(id)arg3 payLaterPass:(id)arg4 layout:(unsigned long long)arg5 dynamicContentPage:(id)arg6;
- (void)viewDidLoad;

@end
