
@interface HMDHomeMetricsDispatcher : HMFObject <HMFLogging> {
    NSUUID * _identifier;
    <HMMLogEventSubmitting> * _logEventSubmitter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 logEventSubmitter:(id)arg2;
- (id)logEventSubmitter;
- (id)logIdentifier;
- (void)submitMigrationEventMetricsForModel:(id)arg1 reason:(id)arg2;
- (void)submitMigrationEventMetricsForModels:(id)arg1 reason:(id)arg2;

@end
