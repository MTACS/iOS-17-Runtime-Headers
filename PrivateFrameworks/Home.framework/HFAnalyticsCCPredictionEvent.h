
@interface HFAnalyticsCCPredictionEvent : HFAnalyticsEvent {
    unsigned long long  _predictionCount;
    unsigned long long  _predictionStage;
}

@property (nonatomic) unsigned long long predictionCount;
@property (nonatomic) unsigned long long predictionStage;

+ (void)sendMetricsForPredictionEventAtStage:(unsigned long long)arg1 withCount:(unsigned long long)arg2;

- (id)initWithData:(id)arg1;
- (id)payload;
- (unsigned long long)predictionCount;
- (unsigned long long)predictionStage;
- (void)setPredictionCount:(unsigned long long)arg1;
- (void)setPredictionStage:(unsigned long long)arg1;

@end
