
@interface ATXUpdatePredictionsManager : NSObject {
    ATXMLActionProducer * _actionProducer;
    ATXServer * _atxServer;
    NSObject<OS_dispatch_queue> * _queue;
    ATXUpdatePredictionsLogger * _updatePredictionsLogger;
    ATXUpdatePredictionsSources * _updateSources;
}

@property (nonatomic, readonly) ATXMLActionProducer *actionProducer;
@property (nonatomic, retain) ATXServer *atxServer;
@property (nonatomic, readonly) ATXUpdatePredictionsLogger *updatePredictionsLogger;
@property (nonatomic, readonly) ATXUpdatePredictionsSources *updateSources;

+ (id)homeScreenPageConfigs;
+ (id)sharedInstance;
+ (bool)shouldOverrideRefreshRateForDisabledConsumerSubTypesForReason:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_stringArrayFromBoxedConsumerSubTypeArray:(id)arg1;
- (id)actionConsumerSubTypesToUpdateWithRefreshRate:(double)arg1 disabledConsumerSubTypes:(id)arg2 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(bool)arg3;
- (id)actionProducer;
- (id)appConsumerSubTypesToUpdateWithRefreshRate:(double)arg1 disabledConsumerSubTypes:(id)arg2 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(bool)arg3;
- (id)atxServer;
- (id)disabledConsumerSubTypes;
- (id)disabledConsumerSubTypesWithHomeScreenPageConfigs:(id)arg1;
- (id)init;
- (id)initWithATXServer:(id)arg1 actionProducer:(id)arg2 updateSources:(id)arg3 updatePredictionsLogger:(id)arg4;
- (void)logPredictionUpdatesForBoxedAppConsumerSubTypes:(id)arg1 actionConsumerSubTypes:(id)arg2 reason:(unsigned long long)arg3;
- (void)processAppDirectoryFeedback;
- (void)processAppDirectoryFeedbackNoSync;
- (void)processHomeScreenFeedback;
- (void)processHomeScreenFeedbackNoSync;
- (void)processLockscreenFeedback;
- (void)processLockscreenFeedbackNoSync;
- (void)processSpotlightActionFeedback;
- (void)processSpotlightActionFeedbackNoSync;
- (void)processSpotlightAppFeedback;
- (void)processSpotlightAppFeedbackNoSync;
- (void)refreshActionPredictionsWithConsumerSubTypes:(id)arg1 featureCache:(id)arg2;
- (void)refreshAppPredictionsWithConsumerSubTypes:(id)arg1 featureCache:(id)arg2;
- (void)setAtxServer:(id)arg1;
- (void)updateBehavioralPredictionsIfOlderThan:(double)arg1 reason:(unsigned long long)arg2;
- (id)updatePredictionsLogger;
- (id)updateSources;

@end
