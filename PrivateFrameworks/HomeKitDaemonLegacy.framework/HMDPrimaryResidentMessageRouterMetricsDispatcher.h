
@interface HMDPrimaryResidentMessageRouterMetricsDispatcher : HMFObject {
    <HMMLogEventSubmitting> * _logEventSubmitter;
}

@property (readonly) <HMMLogEventSubmitting> *logEventSubmitter;

- (void).cxx_destruct;
- (id)initWithLogEventSubmitter:(id)arg1;
- (id)logEventSubmitter;
- (void)submitFailureEventWithMessageName:(id)arg1 failureType:(long long)arg2;

@end
