
@interface NCNotificationDigestConciseSummaryOrderProvider : NCNotificationDigestSummaryOrderProvider {
    NCNotificationSummaryContentProvider * _summaryContentProvider;
    NCNotificationSummaryPlatterView * _summaryPlatterView;
}

@property (nonatomic, retain) NCNotificationSummaryContentProvider *summaryContentProvider;
@property (nonatomic, retain) NCNotificationSummaryPlatterView *summaryPlatterView;

- (void).cxx_destruct;
- (void)_updateSummaryContentProvider;
- (void)_updateSummaryPlatterView;
- (bool)adjustForContentSizeCategoryChange;
- (id)leadingSummaryPlatterViewConfigureIfNecessary;
- (void)setSummaryContentProvider:(id)arg1;
- (void)setSummaryPlatterView:(id)arg1;
- (id)summaryContentProvider;
- (id)summaryPlatterView;
- (void)updateLeadingSummaryPlatterView;

@end
