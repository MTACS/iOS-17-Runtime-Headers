
@interface HMDMessageHandlerMetricsDispatcher : HMFObject {
    NSUUID * _identifier;
    <HMMLogEventSubmitting> * _logEventSubmitter;
}

@property (readonly, copy) NSUUID *identifier;
@property (readonly) <HMMLogEventSubmitting> *logEventSubmitter;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 logEventSubmitter:(id)arg2;
- (id)logEventSubmitter;
- (id)logIdentifier;
- (id)privateDescription;
- (void)submitFailureEventOfType:(unsigned long long)arg1 message:(id)arg2;

@end
