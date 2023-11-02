
@interface _PSCalendarEventPredictorDelegateWrapper : NSObject <ATXProactiveSuggestionRealTimeProviderDelegateProtocol, _PSFaceTimeZKWWrapperProtocol> {
    _PSCalendarEventPredictor * _calendarEventPredictor;
    long long  _defaultConfidenceCategory;
    double  _endSecondsFromQuery;
    bool  _isEnabled;
    unsigned long long  _maxParticipants;
    double  _startSecondsFromQuery;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getSuggestionsWithPredictionContext:(id)arg1;
- (id)init;
- (id)initWithCalendarEventPredictor:(id)arg1 config:(id)arg2;
- (id)initWithCalendarEventPredictor:(id)arg1 startSecondsFromQuery:(double)arg2 endSecondsFromQuery:(double)arg3 maxParticipants:(unsigned long long)arg4 isEnabled:(bool)arg5 defaultConfidenceCategory:(long long)arg6;
- (void)pingWithCompletion:(id /* block */)arg1;
- (void)suggestionsForInteractionSuggestionRequest:(id)arg1 clientModelId:(id)arg2 reply:(id /* block */)arg3;
- (void)updateWithConfig:(id)arg1;

@end
