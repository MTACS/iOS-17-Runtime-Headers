
@interface CRPerformanceStatistics : NSObject {
    bool  _measureRecentPeak;
    NSDictionary * _metrics;
    NSString * _name;
}

@property (readonly) bool measureRecentPeak;
@property (retain) NSDictionary *metrics;
@property (retain) NSString *name;

+ (bool)_canEnableRecentPeakReset;

- (void).cxx_destruct;
- (void)_addMetricWithKey:(id)arg1 name:(id)arg2 unit:(id)arg3 denominator:(double)arg4 pcMetricID:(unsigned long long)arg5;
- (void)_evaluateEndedSession:(struct pc_session { }*)arg1 duration:(double)arg2;
- (void)addStatistics:(id)arg1;
- (id)description;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 measureRecentPeak:(bool)arg2;
- (id)initWithStatistics:(id)arg1;
- (void)measureBlock:(id /* block */)arg1;
- (bool)measureRecentPeak;
- (id)metrics;
- (id)name;
- (void)setMetrics:(id)arg1;
- (void)setName:(id)arg1;

@end
