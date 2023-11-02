
@interface _PSFTZKWOrchestrator : NSObject <_PSFaceTimeZKWWrapperProtocol> {
    _PSCalendarEventPredictorDelegateWrapper * _calendarDelegateWrapper;
    NSMutableArray * _clientModels;
    _PSFTZKWConfig * _config;
    _PSKNNZKWATXDelegateWrapper * _faceTimeInteractionModelDelegateWrapper;
    _PSKNNZKWATXDelegateWrapper * _fallbackInteractionModelDelegateWrapper;
    _CDInteractionStore * _interactionStore;
    NSObject<OS_dispatch_queue> * _queue;
    _PSSuggestionFromTextPredictorDelegateWrapper * _unstructuredCalendarDelegateWrapper;
    _PSSuggestionFromTextPredictorDelegateWrapper * _unstructuredRemindersDelegateWrapper;
}

@property (nonatomic, readonly) _PSFTZKWConfig *config;

- (void).cxx_destruct;
- (void)_createFaceTimeInteractionModelWithKNNModel:(id)arg1;
- (void)_createFallbackInteractionModelWithKNNModel:(id)arg1;
- (void)_createStructuredCalendarModelWithEventStore:(id)arg1 contactStore:(id)arg2;
- (void)_createUnstructuredCalendarModelWithEventStore:(id)arg1 contactStore:(id)arg2 interactionStore:(id)arg3;
- (void)_createUnstructuredReminderModelWithEventStore:(id)arg1 contactStore:(id)arg2 interactionStore:(id)arg3;
- (id)_getBlendingLayerSuggestionsWithContext:(id)arg1;
- (id)_getDirectSuggestionsWithContext:(id)arg1;
- (id)_getDirectSuggestionsWithContext:(id)arg1 withTimeout:(double)arg2;
- (id)config;
- (id)getSuggestionsWithPredictionContext:(id)arg1;
- (id)init;
- (id)initWithKNNModel:(id)arg1 interactionStore:(id)arg2;
- (void)populateCaches;
- (void)updateConfigWithTrialData:(id)arg1;

@end
