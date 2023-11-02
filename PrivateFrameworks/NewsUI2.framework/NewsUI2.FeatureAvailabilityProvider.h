
@interface NewsUI2.FeatureAvailabilityProvider : NSObject <FCNewsAppConfigurationObserving> {
    void $__lazy_storage_$_allowCIPBestOffer;
    void $__lazy_storage_$_allowInAppMessages;
    void $__lazy_storage_$_allowPaidBundleViaOffer;
    void $__lazy_storage_$_allowSIWAOnMac;
    void $__lazy_storage_$_allowSharingAlways;
    void $__lazy_storage_$_appleMagazineContent;
    void $__lazy_storage_$_articleLinkBehaviorImprovementsEnabled;
    void $__lazy_storage_$_articleViewerImprovementsEnabled;
    void $__lazy_storage_$_improvedBlockingBehavior;
    void $__lazy_storage_$_interstellarEnabled;
    void $__lazy_storage_$_narrativeAudio;
    void $__lazy_storage_$_navigationImprovementsEnabled;
    void $__lazy_storage_$_paidBundleViaOfferAllowAppLaunchUpsellEnabled;
    void $__lazy_storage_$_paidBundleViaOfferAllowIconBadge;
    void $__lazy_storage_$_paidBundleViaOfferAllowIconBadgeMercury;
    void $__lazy_storage_$_paidBundleViaOfferAllowLocalNotification;
    void $__lazy_storage_$_paidBundleViaOfferAllowMastheadBanner;
    void $__lazy_storage_$_paidBundleViaOfferAllowPaywalls;
    void $__lazy_storage_$_paidBundleViaOfferAllowSubscriptionsDeeplink;
    void $__lazy_storage_$_paidBundleViaOfferAllowUpsellEnabled;
    void $__lazy_storage_$_puzzlesEnabled;
    void $__lazy_storage_$_searchFeaturedStoriesEnabled;
    void $__lazy_storage_$_shortcutsEnabled;
    void $__lazy_storage_$_sportsNativeAdsEnabled;
    void $__lazy_storage_$_sportsTopicNotificationsEnabled;
    void $__lazy_storage_$_useContinueReading;
    void $__lazy_storage_$_useFasterSearch;
    void $__lazy_storage_$_useFineGrainedNewsletterManagement;
    void $__lazy_storage_$_useMoreFromIssueEOA;
    void $__lazy_storage_$_useMoreToReadEOA;
    void $__lazy_storage_$_useMultipleNativeAds;
    void $__lazy_storage_$_useNewChannelPicker;
    void $__lazy_storage_$_useNewReportConcern;
    void $__lazy_storage_$_useNewsArticleSearch;
    void $__lazy_storage_$_videoInFeed;
    void appConfiguration;
    void delegate;
}

- (void).cxx_destruct;
- (void)configurationManager:(id)arg1 appConfigurationDidChange:(id)arg2;
- (id)init;

@end
