
@protocol PKPayLaterFinancingControllerObserver <NSObject>

@optional

- (void)payLaterAvailableFundingSourcesDidChange:(PKPayLaterFinancingController *)arg1;
- (void)payLaterFinancingAssessmentCollectionDidUpdate:(PKPayLaterFinancingController *)arg1;
- (void)payLaterFinancingController:(PKPayLaterFinancingController *)arg1 financingOptionCancelled:(NSString *)arg2;

@end
