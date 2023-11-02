
@interface AMDMetricsContainer : NSObject {
    NSMutableDictionary * _logData;
    NSNumber * _loggingProbability;
    AMSMetricsEvent * _metricEvent;
    BOOL  _verbosity;
}

@property (retain) NSMutableDictionary *logData;
@property (retain) NSNumber *loggingProbability;
@property (nonatomic, retain) AMSMetricsEvent *metricEvent;
@property BOOL verbosity;

- (void).cxx_destruct;
- (id)initWithLevel:(BOOL)arg1 andAction:(id)arg2 andVersion:(id)arg3 andBuild:(id)arg4 andStorefrontId:(id)arg5 withLoggingProbability:(id)arg6;
- (id)logData;
- (id)loggingProbability;
- (id)metricEvent;
- (void)setLogData:(id)arg1;
- (void)setLoggingProbability:(id)arg1;
- (void)setMetricEvent:(id)arg1;
- (void)setVerbosity:(BOOL)arg1;
- (BOOL)verbosity;

@end
