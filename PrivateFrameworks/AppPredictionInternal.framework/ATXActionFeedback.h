
@interface ATXActionFeedback : NSObject <ATXProactiveSuggestionFeedbackListenerProtocol> {
    NSArray * _abGroupIdentifiers;
    ATXActionFeedbackWeights * _actionFeedbackWeights;
    ATXAppIntentMonitor * _appIntentMonitor;
    _ATXAppLaunchHistogramManager * _appLaunchHistogramManager;
    ATXBlendingLayerHyperParameters * _blendingHyperParameters;
    PETScalarEventTracker * _captureRateTracker;
    _ATXDataStore * _dataStore;
    PETDistributionEventTracker * _durationTracker;
    PETScalarEventTracker * _engagedInitTracker;
    PETDistributionEventTracker * _engagedSlotTracker;
    PETScalarEventTracker * _engagementTracker;
    ATXActionNotificationServer * _notificationServer;
    <ATXPETEventTracker2Protocol> * _petTracker;
    PETDistributionEventTracker * _predictedSlotTracker;
    <ATXPredictionContextBuilderProtocol> * _predictionContextBuilder;
    PETScalarEventTracker * _predictionItemsTracker;
    PETDistributionEventTracker * _predictionsTracker;
    ATXRecentActionEngagementCache * _recentEngagementCache;
    PETScalarEventTracker * _tvEngagementTracker;
    PETScalarEventTracker * _tvShownTracker;
    ATXUserMetricsLogger * _userMetricsLogger;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_actionResponseFromUIFeedbackResult:(id)arg1 shownActions:(id)arg2 rejectedActions:(id)arg3 engagedAction:(id)arg4 engagedSuggestion:(id)arg5;
- (void)_assertHistogram:(id)arg1 weight:(float)arg2;
- (unsigned long long)_feedbackStageForUIFeedbackResult:(id)arg1 engagedSuggestion:(id)arg2;
- (id)_scoredActionsFromProactiveSuggestions:(id)arg1;
- (void)_updateAppLaunchCategoricalHistogram:(long long)arg1 bundleId:(id)arg2 category:(id)arg3 context:(id)arg4 weight:(float)arg5;
- (void)_updateAppLaunchHistogram:(long long)arg1 bundleId:(id)arg2 context:(id)arg3 weight:(float)arg4;
- (id)abGroupFromActionResponse:(id)arg1;
- (void)applyFinalFeedbackForActionResponse:(id)arg1 engagementType:(unsigned long long)arg2 context:(id)arg3;
- (id)clientModelIds;
- (void)decayCounts;
- (id)init;
- (id)initWithPredictionContextBuilder:(id)arg1 actionFeedbackWeights:(id)arg2 appLaunchHistogramManager:(id)arg3 actionNotificationServer:(id)arg4 recentEngagmentCache:(id)arg5 appIntentMonitor:(id)arg6 dataStore:(id)arg7 abGroupIdentifiers:(id)arg8 blendingHyperParameters:(id)arg9 userMetricsLogger:(id)arg10 predictionsTracker:(id)arg11 predictionItemsTracker:(id)arg12 engagedInitTracker:(id)arg13 engagementTracker:(id)arg14 predictedSlotTracker:(id)arg15 engagedSlotTracker:(id)arg16 captureRateTracker:(id)arg17 tvEngagementTracker:(id)arg18 tvShownTracker:(id)arg19 durationTracker:(id)arg20 petTracker:(id)arg21;
- (void)logHeuristicFeedback:(id)arg1;
- (void)logHeuristicFeedbackToPortraitForAction:(id)arg1 withActionType:(unsigned short)arg2;
- (void)logHeuristicFeedbackToSuggestionsForAction:(id)arg1 withActionType:(unsigned short)arg2;
- (void)receiveFeedbackWithActionResponse:(id)arg1 context:(id)arg2;
- (void)receiveLockscreenFeedbackWithAction:(id)arg1 actionResponse:(id)arg2 engagement:(bool)arg3 triggeredByUserInteraction:(bool)arg4;
- (void)receiveLockscreenFeedbackWithAction:(id)arg1 actionResponse:(id)arg2 engagement:(bool)arg3 triggeredByUserInteraction:(bool)arg4 currentDate:(id)arg5;
- (void)receiveUIFeedbackResult:(id)arg1;
- (void)resetData;
- (void)sessionLogWithActionResponse:(id)arg1 engagementType:(unsigned long long)arg2 context:(id)arg3;
- (void)unloadCachedHistograms;

@end
