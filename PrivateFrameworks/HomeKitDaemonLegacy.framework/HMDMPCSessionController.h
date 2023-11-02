
@interface HMDMPCSessionController : HMFObject {
    <HMMLogEventSubmitting> * _logEventSubmitter;
    NSOperationQueue * _speakerGroupCommandOperationQueue;
}

@property (nonatomic, readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (nonatomic, readonly) NSOperationQueue *speakerGroupCommandOperationQueue;

- (void).cxx_destruct;
- (void)executeSessionWithSessionData:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithLogEventSubmitter:(id)arg1;
- (id)logEventSubmitter;
- (id)speakerGroupCommandOperationQueue;

@end
