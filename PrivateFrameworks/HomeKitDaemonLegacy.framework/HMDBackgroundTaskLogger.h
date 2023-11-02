
@interface HMDBackgroundTaskLogger : HMFObject <HMFLogging> {
    <HMMLogEventSubmitting> * _submitter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HMMLogEventSubmitting> *submitter;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)init;
- (id)initWithLogEventSubmitter:(id)arg1;
- (void)submitLogEventForTask:(id)arg1;
- (void)submitNotFiredLogEventForTask:(id)arg1;
- (id)submitter;

@end
