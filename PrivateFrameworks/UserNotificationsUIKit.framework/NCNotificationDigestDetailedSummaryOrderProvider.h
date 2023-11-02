
@interface NCNotificationDigestDetailedSummaryOrderProvider : NCNotificationDigestSummaryOrderProvider {
    NCNotificationSummaryContentProvider * _appsSummaryContentProvider;
    NCNotificationSummaryContentProvider * _communicationsSummaryContentProvider;
    NCDigestSummaryPlatterView * _digestSummaryPlatterView;
    NSArray * _featuredNotificationContentProviders;
}

@property (nonatomic, retain) NCNotificationSummaryContentProvider *appsSummaryContentProvider;
@property (nonatomic, retain) NCNotificationSummaryContentProvider *communicationsSummaryContentProvider;
@property (nonatomic, retain) NCDigestSummaryPlatterView *digestSummaryPlatterView;
@property (nonatomic, retain) NSArray *featuredNotificationContentProviders;

- (void).cxx_destruct;
- (id)_atxHighlightedGroups;
- (bool)_presentFeaturedNotificationsInline;
- (bool)_shouldAllowTapOnLeadingSummaryPlatterView;
- (unsigned long long)_totalNotificationCountForSectionIdentifier:(id)arg1;
- (void)_updateAppsSummaryContentProvidersWithRankedGroups:(id)arg1;
- (void)_updateCommunicationsSummaryContentProvider;
- (void)_updateDigestSummaryPlatterView;
- (void)_updateFeaturedNotificationContentProvidersWithHighlightedGroups:(id)arg1;
- (bool)adjustForContentSizeCategoryChange;
- (id)appsSummaryContentProvider;
- (id)communicationsSummaryContentProvider;
- (id)digestSummaryPlatterView;
- (id)featuredNotificationContentProviders;
- (id)leadingSummaryPlatterViewConfigureIfNecessary;
- (void)setAppsSummaryContentProvider:(id)arg1;
- (void)setCommunicationsSummaryContentProvider:(id)arg1;
- (void)setDeviceAuthenticated:(bool)arg1;
- (void)setDigestSummaryPlatterView:(id)arg1;
- (void)setFeaturedNotificationContentProviders:(id)arg1;
- (void)updateLeadingSummaryPlatterView;

@end
