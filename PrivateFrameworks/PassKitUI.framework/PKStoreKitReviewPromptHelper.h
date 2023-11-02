
@interface PKStoreKitReviewPromptHelper : NSObject <PKStoreReviewPromptHelperProtocol>

- (bool)_hasBeenPromptedRecently;
- (bool)_hasViewedFrontOfCard;
- (bool)isEligibleForReviewPrompt;
- (void)requestReviewInScene:(id)arg1 trigger:(unsigned long long)arg2;
- (void)requestReviewInSceneIfEligible:(id)arg1 trigger:(unsigned long long)arg2;

@end
