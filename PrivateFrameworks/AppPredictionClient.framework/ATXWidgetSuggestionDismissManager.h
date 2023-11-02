
@interface ATXWidgetSuggestionDismissManager : NSObject {
    ATXInformationStore * _store;
}

+ (id)startDateOfDismissHistoryConsidered;

- (void).cxx_destruct;
- (bool)_shouldBlockSuggestionByRelatedDismissDates:(id)arg1;
- (id)init;
- (id)initWithStore:(id)arg1;
- (bool)shouldBlockSuggestionWithIntent:(id)arg1;
- (bool)shouldBlockWidgetSuggestionBecauseOfPreviousDismiss:(id)arg1 kind:(id)arg2 intent:(id)arg3;
- (void)userDidDismissSuggestionForWidget:(id)arg1 kind:(id)arg2 intent:(id)arg3 atDate:(id)arg4 duration:(double)arg5;
- (unsigned long long)userDismissCountForWidgetSuggestionWithBundleId:(id)arg1;

@end
