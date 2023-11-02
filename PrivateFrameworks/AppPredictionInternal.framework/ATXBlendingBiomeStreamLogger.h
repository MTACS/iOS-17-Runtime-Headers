
@interface ATXBlendingBiomeStreamLogger : NSObject {
    ATXAppClipSingleSuggestionLogger * _appClipLogger;
    BPSPublisher * _blendingModelPublisher;
    ATXBMBookmark * _bookmark;
    BPSPublisher * _clientModelPublisher;
    NSString * _currentABGroup;
    <ATXAnchorModelDataStoreWrapperProtocol> * _dataStoreWrapper;
    ATXHeroAppSingleSuggestionLogger * _heroLogger;
    <ATXPETEventTracker2Protocol> * _tracker;
    BPSPublisher * _uiPublisher;
}

@property (nonatomic, readonly) NSString *abGroup;
@property (nonatomic, retain) ATXAppClipSingleSuggestionLogger *appClipLogger;
@property (nonatomic, retain) BPSPublisher *blendingModelPublisher;
@property (nonatomic, retain) ATXBMBookmark *bookmark;
@property (nonatomic, retain) BPSPublisher *clientModelPublisher;
@property (nonatomic, retain) ATXHeroAppSingleSuggestionLogger *heroLogger;
@property (nonatomic, retain) <ATXPETEventTracker2Protocol> *tracker;
@property (nonatomic, retain) BPSPublisher *uiPublisher;

+ (id)biomeStreamLoggerWithPath:(id)arg1 dataStoreWrapper:(id)arg2;
+ (id)biomeStreamLoggerWithPath:(id)arg1 tracker:(id)arg2 dataStoreWrapper:(id)arg3;
+ (id)defaultBiomeStreamLogger;

- (void).cxx_destruct;
- (id)_anchorModelEngagementMetricFromAnchorPrediction:(id)arg1 proactiveSuggestion:(id)arg2 feedbackMetadata:(id)arg3 engagementType:(int)arg4 consumerSubType:(id)arg5 completedSession:(id)arg6;
- (id)_blendingModelPublisher;
- (id)_clientModelPublisher;
- (unsigned int)_ensureWidgetsInStackBetweenZeroAndTen:(unsigned long long)arg1;
- (void)_logCacheAgeMetricEventWithCacheAge:(double)arg1 clientModelId:(id)arg2;
- (void)_logClientModelsIncludedInHomeScreenLayoutWithSuggestionLayout:(id)arg1 consumerSubType:(unsigned char)arg2;
- (void)_logLayoutSelectedWithSpotlightSuggestionLayout:(id)arg1 consumerSubType:(unsigned char)arg2;
- (void)_logLayoutSelectedWithSuggestionLayout:(id)arg1 consumerSubType:(unsigned char)arg2;
- (void)_logUnaggregatedAnchorModelEngagementMetric:(id)arg1;
- (id)_loggerContextPublisherWithPublisher:(id)arg1;
- (id)_timeBasedMergePublisher:(id)arg1 withOtherPublishers:(id)arg2;
- (id)_uiPublisher;
- (id)abGroup;
- (id)appClipLogger;
- (id)blendingModelPublisher;
- (id)bookmark;
- (id)clientModelPublisher;
- (void)handleBlendingModelCacheUpdateEvent:(id)arg1 loggerContext:(id)arg2;
- (void)handleClientModelCacheUpdateEvent:(id)arg1 loggerContext:(id)arg2;
- (void)handleUIEvent:(id)arg1 loggerContext:(id)arg2;
- (id)heroLogger;
- (id)initWithBookmark:(id)arg1 tracker:(id)arg2 dataStoreWrapper:(id)arg3;
- (void)logAnchorModelEngagementMetricsWithCompletedSession:(id)arg1;
- (void)logBlendingLayerRefreshMetricWithBlendingModelCacheUpdateEvent:(id)arg1 loggerContext:(id)arg2;
- (void)logBlendingMetricsFromBiomeStream;
- (void)logClientModelsIncludedInHomeScreenLayoutsMetricWithBlendingModelCacheUpdateEvent:(id)arg1;
- (void)logLayoutSelectedMetricWithBlendingModelCacheUpdateEvent:(id)arg1;
- (void)logScreenUnlockSessionsIfPossibleWithLoggerContext:(id)arg1;
- (void)logTopOfStackPredictionMetricWithBlendingModelCacheUpdateEvent:(id)arg1;
- (void)logWidgetRotationEngagementMetricsIfPossibleWithLoggerContext:(id)arg1;
- (id)mergedSessionEventWithContextPublisher;
- (void)persistContext;
- (void)setAppClipLogger:(id)arg1;
- (void)setBlendingModelPublisher:(id)arg1;
- (void)setBookmark:(id)arg1;
- (void)setClientModelPublisher:(id)arg1;
- (void)setHeroLogger:(id)arg1;
- (void)setTracker:(id)arg1;
- (void)setUiPublisher:(id)arg1;
- (id)tracker;
- (void)tryLogSingleSuggestionSessionMetricsWithLoggerContext:(id)arg1;
- (id)uiPublisher;
- (void)updateCurrentABGroup:(id)arg1;

@end
