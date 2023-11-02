
@interface PPSValueConverter : NSObject {
    NSURL * _filepath;
    NSArray * _metrics;
    NSDictionary * _selectedHistory;
    NSArray * _sortedTimelineIntervals;
    NSMutableDictionary * _timeline;
}

@property (retain) NSArray *metrics;
@property (retain) NSMutableDictionary *timeline;

- (void).cxx_destruct;
- (bool)_allowConversionFromMetric:(id)arg1 toMetric:(id)arg2;
- (id)_category;
- (id)_convertEvent:(id)arg1;
- (id)_convertValue:(id)arg1 atTimestamp:(double)arg2 usingMetric:(id)arg3;
- (bool)_isInitialized;
- (id)_latestHistory;
- (id)_latestInterval;
- (id)_latestMetricForMetricName:(id)arg1;
- (void)_performGeneration;
- (bool)_shouldConvertAtTimestamp:(double)arg1;
- (bool)_shouldConvertEvent:(id)arg1;
- (id)_sourceMetricForMetricName:(id)arg1;
- (id)_subsystem;
- (id)convertEventIfNecessary:(id)arg1;
- (id)convertValueIfNeccesary:(id)arg1 atTimestamp:(double)arg2 usingMetric:(id)arg3;
- (id)initWithFilepath:(id)arg1 andMetrics:(id)arg2;
- (id)metrics;
- (void)setMetrics:(id)arg1;
- (void)setTimeline:(id)arg1;
- (id)timeline;

@end
