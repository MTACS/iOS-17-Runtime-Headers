
@interface NCNotificationMissedSummaryOrderProvider : NCNotificationSummaryOrderProvider {
    ATXMissedNotificationRanking * _missedNotificationRanking;
    NCNotificationSummaryContentProvider * _summaryContentProvider;
    NCNotificationSummaryPlatterView * _summaryPlatterView;
}

@property (nonatomic, retain) ATXMissedNotificationRanking *missedNotificationRanking;
@property (nonatomic, retain) NCNotificationSummaryContentProvider *summaryContentProvider;
@property (nonatomic, retain) NCNotificationSummaryPlatterView *summaryPlatterView;

- (void).cxx_destruct;
- (void)_updateSummaryContentProvider;
- (void)_updateSummaryPlatterView;
- (bool)adjustForContentSizeCategoryChange;
- (void)atxLogRemoval;
- (void)atxLogSummaryPlatterExpandedIsUpcoming:(bool)arg1;
- (void)atxLogSummaryPlatterShownIsUpcoming:(bool)arg1;
- (id)atxUUID;
- (void)generateDigestForATXUserNotificationArrays:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)leadingSummaryPlatterViewConfigureIfNecessary;
- (id)missedNotificationRanking;
- (void)setMissedNotificationRanking:(id)arg1;
- (void)setSummaryContentProvider:(id)arg1;
- (void)setSummaryPlatterView:(id)arg1;
- (id)summaryContentProvider;
- (id)summaryPlatterView;
- (void)updateLeadingSummaryPlatterView;

@end
