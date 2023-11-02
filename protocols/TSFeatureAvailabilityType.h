
@protocol TSFeatureAvailabilityType

@required

- (void)addWithObserver:(id <_TtP7NewsUI227FeatureAvailabilityObserver_>)arg1;
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
- (_TtC16NewsSubscription26PaidBundleViaOfferSettings *)paidBundleViaOfferAvailability;
- (bool)puzzlesEnabled;
- (void)removeWithObserver:(id <_TtP7NewsUI227FeatureAvailabilityObserver_>)arg1;
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
