
@interface MKAutocompleteAnalyticsProvider : NSObject <MKAutocompleteAnalyticsProvider, MKAutocompleteAnalyticsState> {
    MKAutocompleteAnalyticsState * _currentState;
    NSObject<OS_dispatch_queue> * _isolationQueue;
}

@property (nonatomic, retain) MKAutocompleteAnalyticsState *currentState;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *isolationQueue;

- (void).cxx_destruct;
- (id)captureNewMetrics;
- (id)currentState;
- (id)init;
- (id)isolationQueue;
- (void)setCurrentState:(id)arg1;
- (void)setIsolationQueue:(id)arg1;
- (void)updateStateWithQuery:(id)arg1 queryTokens:(id)arg2 visibleSuggestionEntries:(id)arg3;

@end
