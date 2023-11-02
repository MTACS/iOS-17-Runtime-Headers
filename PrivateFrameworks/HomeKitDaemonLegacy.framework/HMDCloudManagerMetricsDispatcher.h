
@interface HMDCloudManagerMetricsDispatcher : HMFObject <HMFLogging> {
    <HMMLogEventSubmitting> * _logEventSubmitter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithLogEventDispatcher:(id)arg1;
- (id)logEventSubmitter;
- (void)submitFailureEventWithModelType:(id)arg1 failureCode:(unsigned long long)arg2 error:(id)arg3;

@end
