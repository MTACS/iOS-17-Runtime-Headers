
@interface HDMCRecentBasalBodyTemperatureRangeQuery : NSObject {
    double  _lowerQuantileBound;
    HDProfile * _profile;
    long long  _sampleLimit;
    double  _upperQuantileBound;
}

+ (id)recentRangeForAnalysisWithProfile:(id)arg1;

- (void).cxx_destruct;
- (id)initWithProfile:(id)arg1 sampleLimit:(long long)arg2 upperQuantileBound:(double)arg3 lowerQuantileBound:(double)arg4;
- (id)rangeWithError:(id*)arg1;

@end
