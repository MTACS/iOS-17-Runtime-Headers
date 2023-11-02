
@interface NCNotificationAppsSummaryContentProvider : NCNotificationSummaryContentProvider

- (id)_summaryIconViewForNotificationRequest:(id)arg1;
- (id)_summaryStringForNotificationRequest:(id)arg1;
- (bool)hideSummaryIconViews;
- (bool)isIconViewLeading;
- (unsigned long long)maxNumberOfSummaryItems;
- (id)summaryTitle;

@end
