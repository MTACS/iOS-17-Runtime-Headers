
@interface _PSSuggestionFromTextPredictorDelegateWrapper : NSObject <ATXProactiveSuggestionRealTimeProviderDelegateProtocol, _PSFaceTimeZKWWrapperProtocol> {
    long long  _defaultConfidenceCategory;
    long long  _delegateType;
    double  _endSecondsFromQuery;
    bool  _isEnabled;
    float  _priorScoreThreshold;
    double  _startSecondsFromQuery;
    _PSSuggestionFromTextPredictor * _textPredictor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getSuggestionsWithPredictionContext:(id)arg1;
- (id)initWithDelegateType:(long long)arg1 textPredictor:(id)arg2 startSecondsFromQuery:(double)arg3 endSecondsFromQuery:(double)arg4 priorScoreThreshold:(float)arg5 isEnabled:(bool)arg6 defaultConfidenceCategory:(long long)arg7;
- (id)initWithTextPredictor:(id)arg1 calendarConfig:(id)arg2;
- (id)initWithTextPredictor:(id)arg1 remindersConfig:(id)arg2;
- (void)pingWithCompletion:(id /* block */)arg1;
- (void)suggestionsForInteractionSuggestionRequest:(id)arg1 clientModelId:(id)arg2 reply:(id /* block */)arg3;
- (void)updateWithCalendarConfig:(id)arg1;
- (void)updateWithRemindersConfig:(id)arg1;

@end
