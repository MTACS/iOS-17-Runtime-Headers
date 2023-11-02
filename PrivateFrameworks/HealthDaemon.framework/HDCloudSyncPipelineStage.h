
@interface HDCloudSyncPipelineStage : HDCloudSyncOperation {
    bool  _criticalFailureOnError;
    long long  _expectedReceiveSize;
    long long  _expectedSendSize;
}

@property (nonatomic) bool criticalFailureOnError;
@property (nonatomic) long long expectedReceiveSize;
@property (nonatomic) long long expectedSendSize;

+ (bool)shouldLogAtOperationEnd;
+ (bool)shouldLogAtOperationStart;
+ (bool)shouldProduceOperationAnalytics;

- (bool)criticalFailureOnError;
- (long long)expectedReceiveSize;
- (long long)expectedSendSize;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)pipelineStageIgnoringErrors;
- (void)setCriticalFailureOnError:(bool)arg1;
- (void)setExpectedReceiveSize:(long long)arg1;
- (void)setExpectedSendSize:(long long)arg1;

@end
