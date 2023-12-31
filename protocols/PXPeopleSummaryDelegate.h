
@protocol PXPeopleSummaryDelegate <NSObject>

@required

- (unsigned long long)autoConfirmedCountForSummaryViewController:(PXPeopleConfirmationSummaryViewController *)arg1;
- (<PXPerson> *)personForSummaryViewController:(PXPeopleConfirmationSummaryViewController *)arg1;
- (unsigned long long)userConfirmedCountForSummaryViewController:(PXPeopleConfirmationSummaryViewController *)arg1;

@end
