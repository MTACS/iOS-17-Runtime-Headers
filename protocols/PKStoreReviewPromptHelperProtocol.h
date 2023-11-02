
@protocol PKStoreReviewPromptHelperProtocol

@required

- (bool)isEligibleForReviewPrompt;
- (void)requestReviewInScene:(UIWindowScene *)arg1 trigger:(unsigned long long)arg2;
- (void)requestReviewInSceneIfEligible:(UIWindowScene *)arg1 trigger:(unsigned long long)arg2;

@end
