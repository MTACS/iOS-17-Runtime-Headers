
@protocol WBSFormAutoFillFeedbackProcessor <NSObject>

@required

- (<WBSFormAutoFillFeedbackDomainPolicyProvider> *)domainPolicyProvider;
- (void)sendFeedbackWithCorrectionSet:(WBSFormAutoFillCorrectionSet *)arg1;
- (void)setDomainPolicyProvider:(id <WBSFormAutoFillFeedbackDomainPolicyProvider>)arg1;

@end
