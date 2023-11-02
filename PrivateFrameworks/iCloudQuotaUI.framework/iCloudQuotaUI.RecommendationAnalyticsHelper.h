
@interface iCloudQuotaUI.RecommendationAnalyticsHelper : NSObject {
    void account;
    void recommendationFilter;
    void storageDataController;
    void totalStorageInGB;
    void userType;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (void)sendManageStorageDisplayedEvent;
- (void)sendRecommendedForYouTapEvent;
- (void)sendiCloudSettingsDisplayedEvent;

@end
