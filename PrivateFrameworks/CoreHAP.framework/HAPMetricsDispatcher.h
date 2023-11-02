
@interface HAPMetricsDispatcher : HMFObject {
    <HMMLogEventSubmitting> * _logDispatcher;
}

@property (nonatomic, retain) <HMMLogEventSubmitting> *logDispatcher;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)logDispatcher;
- (void)setLogDispatcher:(id)arg1;
- (void)submitLogEvent:(id)arg1;

@end
