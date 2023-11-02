
@protocol APPCPromotableContent <APPCBasePromotableContent>

@required

- (NSString *)adServerEnvironment;
- (long long)adType;
- (<APPCPromotableContentRepresentation> *)bestRepresentation;
- (NSString *)brandName;
- (NSString *)campaignText;
- (<APPCDiagnosticMetricsHelping> *)diagnosticMetricHelper;
- (bool)discarded;
- (bool)discardedDueToPolicy;
- (NSDate *)expirationDate;
- (long long)feedMetadataContentProviderID;
- (APInstallAttribution *)installAttribution;
- (bool)isLocationAvailableForAd;
- (bool)isMRAID;
- (bool)isOutstreamVideoAd;
- (bool)isPAAvailableForAd;
- (NSString *)journeyIdentifier;
- (<APPCMediaMetricsHelping> *)mediaMetricHelper;
- (NSDictionary *)metaData;
- (<APPCMetricEventsTracking> *)metricEventsTracking;
- (<APPCCarouselMetricsHelping><APPCJourneyMetricsHelping> *)metricsHelper;
- (unsigned long long)minimumTimeBetweenPresentation;
- (long long)numOfArticlesSinceInterstitial;
- (void)replaceMetricsHelperWithNewMetricsHelper:(id <APPCCarouselMetricsHelping><APPCJourneyMetricsHelping>)arg1;
- (NSArray *)representations;
- (unsigned long long)retrieveNetworkType;
- (long long)serverUnfilledReason;
- (void)setBestRepresentation:(id <APPCPromotableContentRepresentation>)arg1;
- (void)setDiscardedDueToPolicy:(bool)arg1;
- (void)setMetricEventsTracking:(id <APPCMetricEventsTracking>)arg1;

@end
