
@interface HMDMemoryUtilizationTracker : NSObject <HMFLogging> {
    <HMMLogEventSubmitting> * _logEventSubmitter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)init;
- (id)initWithLogEventSubmitter:(id)arg1;
- (id)logEventSubmitter;
- (void)trackMemoryUsageWithReason:(long long)arg1;

@end
