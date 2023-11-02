
@interface VIAEntryPointLogger : NSObject <VIAEventLogging> {
    NSMutableDictionary * _appToQueryIDMap;
    NSMutableDictionary * _appToViewAppearEventMap;
    VIAEventCache * _eventCache;
    VIAFeedbackSubmitter * _feedbackSubmitter;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)feedbackNamesToLog;

- (void).cxx_destruct;
- (void)_logDependentEvent:(id)arg1;
- (void)_logEndEvent:(id)arg1;
- (void)_logEvent:(id)arg1;
- (void)_logFeedback:(id)arg1 queryID:(unsigned long long)arg2;
- (void)_logStartEvent:(id)arg1;
- (void)_logVisibleSuggestionsFeedback:(id)arg1 forViewAppearEvent:(unsigned long long)arg2 queryID:(unsigned long long)arg3;
- (bool)_preconditionCheckEvent:(id)arg1;
- (id)_visibleSuggestionsFeedbackFromPendingFeeedback:(id)arg1 forViewAppearEvent:(unsigned long long)arg2;
- (void)didObserveEvent:(id)arg1;
- (id)initWithQueue:(id)arg1 feedbackSubmitter:(id)arg2 eventCache:(id)arg3;
- (void)logEvent:(id)arg1;

@end
