
@interface ATXActivitySuggestionClient : NSObject {
    _PASSimpleCoalescingTimer * _coalescingTimer;
    ATXActivitySuggestionFeedbackStream * _feedbackStream;
    CLCircularRegion * _homeRegion;
    BMInferredModeStream * _inferredModeStream;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    RTRoutineManager * _routineManager;
    BMBiomeScheduler * _scheduler;
    BPSSink * _sink;
    CLCircularRegion * _workRegion;
}

@property (retain) CLCircularRegion *homeRegion;
@property (retain) CLCircularRegion *workRegion;

+ (Class)ATXTriggerClassFromDNDModeConfigurationTrigger:(id)arg1;
+ (Class)DNDModeConfigurationTriggerClassFromATXTrigger:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)DNDModeConfigurationTriggersToATXTriggers:(id)arg1;
- (id)_activityForEvent:(id)arg1;
- (bool)_activityIsEligibleForSetUpSuggestion:(id)arg1 modeGlobals:(id)arg2;
- (bool)_activityIsEligibleForTriggerSuggestion:(id)arg1 modeGlobals:(id)arg2;
- (void)_fetchAndCacheLOIs;
- (void)_logFeedbackEventForActivitySetUpSuggestionWithSuggestionUUID:(id)arg1 eventType:(unsigned long long)arg2 acceptedTriggers:(id)arg3 location:(unsigned long long)arg4;
- (void)_logFeedbackEventForConfiguredActivitySuggestionWithSuggestionUUID:(id)arg1 eventType:(unsigned long long)arg2 location:(unsigned long long)arg3;
- (void)_logFeedbackEventForSuggestionUUID:(id)arg1 suggestionType:(unsigned long long)arg2 eventType:(unsigned long long)arg3 acceptedTriggers:(id)arg4 location:(unsigned long long)arg5;
- (void)_logFeedbackEventForTriggerSuggestionWithSuggestionUUID:(id)arg1 eventType:(unsigned long long)arg2 acceptedTriggers:(id)arg3 location:(unsigned long long)arg4;
- (void)_modeDidChange;
- (void)_setUpPublisherIfNecessary;
- (bool)_shouldSendAutomationSuggestionForMode:(unsigned long long)arg1;
- (bool)_shouldSendModeSetUpSuggestionAtEndOfModeToLockScreen:(id)arg1 modeGlobals:(id)arg2;
- (bool)_shouldSendModeTriggerSuggestionAtEndOfModeToLockScreen:(id)arg1 modeGlobals:(id)arg2;
- (id)_suggestionWithActivity:(id)arg1 modeGlobals:(id)arg2;
- (void)addObserver:(id)arg1 sendingInitialChangeNotification:(bool)arg2;
- (id)currentSuggestion;
- (void)currentSuggestionWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)didShowActivitySetUpSuggestionWithSuggestionUUID:(id)arg1 location:(unsigned long long)arg2;
- (void)didShowActivitySuggestion:(id)arg1;
- (void)didShowConfiguredActivitySuggestionWithSuggestionUUID:(id)arg1 location:(unsigned long long)arg2;
- (void)didShowTriggerSuggestionWithSuggestionUUID:(id)arg1 location:(unsigned long long)arg2;
- (id)homeRegion;
- (id)init;
- (id)initWithRoutineManager:(id)arg1;
- (id)localizedSuggestionReasonForBMInferredModeEvent:(id)arg1;
- (id)previousSuggestion;
- (void)registerObserver:(id)arg1;
- (void)registerObserver:(id)arg1 sendingInitialChangeNotification:(bool)arg2;
- (void)removeObserver:(id)arg1;
- (void)setHomeRegion:(id)arg1;
- (void)setWorkRegion:(id)arg1;
- (id)suggestionWithUUID:(id)arg1;
- (id)triggersToDNDModeConfigurationTriggers:(id)arg1;
- (void)userDidAcceptActivitySetUpSuggestionWithSuggestionUUID:(id)arg1 location:(unsigned long long)arg2;
- (void)userDidAcceptActivitySuggestion:(id)arg1 acceptedTriggers:(id)arg2;
- (void)userDidAcceptConfiguredActivitySuggestionWithSuggestionUUID:(id)arg1 location:(unsigned long long)arg2;
- (void)userDidAcceptTriggerSuggestionWithSuggestionUUID:(id)arg1 acceptedTriggers:(id)arg2 location:(unsigned long long)arg3;
- (void)userDidFinishActivitySetUpWithSuggestionUUID:(id)arg1 acceptedTriggers:(id)arg2 location:(unsigned long long)arg3;
- (void)userDidRejectActivitySetUpSuggestionWithSuggestionUUID:(id)arg1 location:(unsigned long long)arg2;
- (void)userDidRejectActivitySuggestion:(id)arg1;
- (void)userDidRejectConfiguredActivitySuggestionWithSuggestionUUID:(id)arg1 location:(unsigned long long)arg2;
- (void)userDidRejectTriggerSuggestionWithSuggestionUUID:(id)arg1 location:(unsigned long long)arg2;
- (void)userDidSeeActivitySetUpSuggestionWithSuggestionUUID:(id)arg1 location:(unsigned long long)arg2;
- (void)userDidSeeConfiguredActivitySuggestionWithSuggestionUUID:(id)arg1 location:(unsigned long long)arg2;
- (void)userDidSeeTriggerSuggestionWithSuggestionUUID:(id)arg1 location:(unsigned long long)arg2;
- (void)userDidStartActivity:(id)arg1 location:(unsigned long long)arg2;
- (void)userDidStopActivity:(id)arg1 location:(unsigned long long)arg2;
- (id)workRegion;

@end
