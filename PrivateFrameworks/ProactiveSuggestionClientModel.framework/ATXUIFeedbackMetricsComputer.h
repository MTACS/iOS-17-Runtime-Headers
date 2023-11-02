
@interface ATXUIFeedbackMetricsComputer : NSObject {
    ATXBiomeProactiveSuggestionUIFeedbackResultStream * _stream;
}

- (void).cxx_destruct;
- (id)_computeResultForClientModel:(id)arg1 query:(id)arg2 publisher:(id)arg3 resultSpecification:(id)arg4;
- (id)_computeResultForConsumerSubType:(unsigned char)arg1 query:(id)arg2 publisher:(id)arg3 resultSpecification:(id)arg4;
- (void)_updateNonTrendPlotSectionsInResult:(id)arg1 withFeedbackResult:(id)arg2;
- (void)_updateResultSection:(id)arg1 withSuggestions:(id)arg2 clientModelId:(id)arg3 consumerSubType:(unsigned char)arg4;
- (id)computeResultForQuery:(id)arg1 resultSpecification:(id)arg2;
- (id)init;
- (id)initWithUIFeedbackResultStream:(id)arg1;

@end
