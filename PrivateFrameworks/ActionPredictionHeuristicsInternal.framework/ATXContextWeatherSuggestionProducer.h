
@interface ATXContextWeatherSuggestionProducer : NSObject {
    ATXLocationManager * _locationManager;
    long long  _reasonCode;
    double  _score;
    NSDateInterval * _validDateInterval;
}

- (void).cxx_destruct;
- (id)_dummySuggestionWithAction:(id)arg1 predictionReasons:(unsigned long long)arg2 score:(double)arg3;
- (id)_suggestionWithAction:(id)arg1 predictionReasons:(unsigned long long)arg2 score:(double)arg3;
- (id)dummyWeatherSuggestion;
- (id)initWithValidDateInterval:(id)arg1 reasonCode:(long long)arg2 score:(double)arg3;
- (id)weatherSuggestionWithRefreshTriggers:(id)arg1;

@end
