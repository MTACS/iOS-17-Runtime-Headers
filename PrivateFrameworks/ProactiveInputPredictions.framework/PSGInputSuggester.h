
@interface PSGInputSuggester : NSObject {
    PSGInputSuggesterClient * _client;
    _PASTuple2 * _lastImpression;
    _PASTuple2 * _lastPrediction;
    NSObject<OS_dispatch_queue> * _lastPredictionQueue;
    PSGInputSuggestionsRequest * _lastRequest;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_reportSpeedMetricWithData:(id)arg1;
- (void)hibernate;
- (id)initWithClient:(id)arg1;
- (void)inputSuggestionsWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)logMetricForEventType:(unsigned char)arg1 externalMetadata:(id)arg2 predictedValues:(id)arg3;
- (void)logMetricForEventType:(unsigned char)arg1 externalMetadata:(id)arg2 request:(id)arg3 responseItems:(id)arg4;
- (void)logTimeoutForRequest:(id)arg1;
- (void)warmUp;
- (void)warmUpForLocaleIdentifier:(id)arg1;

@end
