
@interface EKEventSuggestionGenerator : NSObject {
    EKEventSuggestion * _lastDefaultSuggestion;
    NSString * _lastQueryString;
    NSArray * _lastSuggestions;
    NSObject<OS_dispatch_queue> * _queryQueue;
    <EKAutocompletePendingSearchProtocol> * _runningTitleSearch;
}

@property (retain) EKEventSuggestion *lastDefaultSuggestion;
@property (retain) NSString *lastQueryString;
@property (retain) NSArray *lastSuggestions;
@property (retain) NSObject<OS_dispatch_queue> *queryQueue;
@property (retain) <EKAutocompletePendingSearchProtocol> *runningTitleSearch;

+ (id)eventWithSuggestedTimeFromString:(id)arg1 referenceDate:(id)arg2 inEventStore:(id)arg3 options:(unsigned long long)arg4;

- (void).cxx_destruct;
- (void)_completeSuggestion:(id)arg1 timeDetectionResults:(id)arg2 referenceDate:(id)arg3 result:(id)arg4 calendar:(id)arg5;
- (id)_createPartialSuggestionWithTimeDetectionResults:(id)arg1 result:(id)arg2;
- (void)eventSuggestionsFromString:(id)arg1 defaultCalendar:(id)arg2 referenceDate:(id)arg3 options:(unsigned long long)arg4 handler:(id /* block */)arg5;
- (void)eventSuggestionsFromString:(id)arg1 initialEvent:(id)arg2 options:(unsigned long long)arg3 handler:(id /* block */)arg4;
- (void)generateEventSuggestionsAsynchronouslyFromString:(id)arg1 options:(unsigned long long)arg2 defaultCalendar:(id)arg3 referenceDate:(id)arg4 initialEvent:(id)arg5 handler:(id /* block */)arg6;
- (id)init;
- (id)lastDefaultSuggestion;
- (id)lastQueryString;
- (id)lastSuggestions;
- (id)queryQueue;
- (id)runningTitleSearch;
- (void)setLastDefaultSuggestion:(id)arg1;
- (void)setLastQueryString:(id)arg1;
- (void)setLastSuggestions:(id)arg1;
- (void)setQueryQueue:(id)arg1;
- (void)setRunningTitleSearch:(id)arg1;

@end
