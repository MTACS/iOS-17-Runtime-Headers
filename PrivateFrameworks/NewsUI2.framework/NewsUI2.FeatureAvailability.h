
@interface NewsUI2.FeatureAvailability : _TtCs12_SwiftObject <TSFeatureAvailabilityType> {
    void $__lazy_storage_$_isContentStoreFrontSupported;
    void featureAvailabilityProvider;
    void observers;
}

@property (nonatomic, readonly) bool allowCIPBestOffer;
@property (nonatomic, readonly) bool allowInAppMessages;
@property (nonatomic, readonly) bool allowPaidBundleViaOffer;
@property (nonatomic, readonly) bool allowSIWAOnMac;
@property (nonatomic, readonly) bool allowSharingAlways;
@property (nonatomic, readonly) bool appleMagazineContent;
@property (nonatomic, readonly) bool articleLinkBehaviorImprovementsEnabled;
@property (nonatomic, readonly) bool improvedBlockingBehaviorEnabled;
@property (nonatomic, readonly) bool interstellarEnabled;
@property (nonatomic, readonly) bool narrativeAudio;
@property (nonatomic, readonly) _TtC16NewsSubscription26PaidBundleViaOfferSettings *paidBundleViaOfferAvailability;
@property (nonatomic, readonly) bool puzzlesEnabled;
@property (nonatomic, readonly) bool searchFeaturedStoriesEnabled;
@property (nonatomic, readonly) bool shortcutsEnabled;
@property (nonatomic, readonly) bool sportsNativeAdsEnabled;
@property (nonatomic, readonly) bool sportsTopicNotificationsEnabled;
@property (nonatomic, readonly) bool useContinueReading;
@property (nonatomic, readonly) bool useFasterSearch;
@property (nonatomic, readonly) bool useFineGrainedNewsletterManagement;
@property (nonatomic, readonly) bool useMoreFromIssueEOA;
@property (nonatomic, readonly) bool useMoreToReadEOA;
@property (nonatomic, readonly) bool useMultipleNativeAds;
@property (nonatomic, readonly) bool useNewChannelPicker;
@property (nonatomic, readonly) bool useNewReportConcern;
@property (nonatomic, readonly) bool useNewsArticleSearch;

- (void)addWithObserver:(id)arg1;
- (bool)allowCIPBestOffer;
- (bool)allowInAppMessages;
- (bool)allowPaidBundleViaOffer;
- (bool)allowSIWAOnMac;
- (bool)allowSharingAlways;
- (bool)appleMagazineContent;
- (bool)articleLinkBehaviorImprovementsEnabled;
- (bool)improvedBlockingBehaviorEnabled;
- (bool)interstellarEnabled;
- (bool)narrativeAudio;
- (id)paidBundleViaOfferAvailability;
- (bool)puzzlesEnabled;
- (void)removeWithObserver:(id)arg1;
- (bool)searchFeaturedStoriesEnabled;
- (bool)shortcutsEnabled;
- (bool)sportsNativeAdsEnabled;
- (bool)sportsTopicNotificationsEnabled;
- (bool)useContinueReading;
- (bool)useFasterSearch;
- (bool)useFineGrainedNewsletterManagement;
- (bool)useMoreFromIssueEOA;
- (bool)useMoreToReadEOA;
- (bool)useMultipleNativeAds;
- (bool)useNewChannelPicker;
- (bool)useNewReportConcern;
- (bool)useNewsArticleSearch;

@end
