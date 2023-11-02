
@interface ATXChronoServicesProvider : NSObject {
    <ATXChronoServicesProviderDelegate> * _delegate;
    _PASQueueLock * _lock;
    CHSProactiveService * _proactiveService;
    SBSWidgetMetricsService * _widgetMetricService;
}

@property (nonatomic) <ATXChronoServicesProviderDelegate> *delegate;

- (void).cxx_destruct;
- (bool)_allReloadsAreCompletedInGuardedData:(id)arg1;
- (void)_chronoDidReplyHandle:(id)arg1 timelineEntries:(id)arg2 forWidget:(id)arg3 withError:(id)arg4;
- (bool)_isCurrentTimelineRelevanceScoreNonPositiveForEntries:(id)arg1;
- (id)_recordFromSuggestionLayout:(id)arg1 guardedData:(id)arg2;
- (void)_removeOudatedFailureEntriesInGuardedData:(id)arg1;
- (void)_requestChronoToLoadWidget:(id)arg1 inGuardedData:(id)arg2;
- (bool)_shouldBlockSuggestionForWidget:(id)arg1 entries:(id)arg2;
- (void)_updateAndSendHomeScreenSuggestionsToDelegateWithGuardedData:(id)arg1;
- (void)_updateGuardedData:(id)arg1 withNewCachedSuggestions:(id)arg2;
- (id)_widgetFromSuggestionLayout:(id)arg1;
- (id)delegate;
- (id)init;
- (id)initWithProactiveService:(id)arg1 widgetMetricsService:(id)arg2;
- (void)resetToPrewarmWidgetsInSuggestions:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
