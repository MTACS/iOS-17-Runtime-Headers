
@interface BWInferenceScheduler : NSObject {
    NSObject<OS_dispatch_workloop> * _completionWorkloop;
    NSMapTable * _connectionsByIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionsLock;
    NSObject<OS_dispatch_workloop> * _inferenceWorkloop;
    NSObject<OS_dispatch_queue> * _metalCompletionQueue;
    NSObject<OS_dispatch_queue> * _metalSubmissionQueue;
    NSObject<OS_dispatch_workloop> * _scalingWorkloop;
    NSObject<OS_dispatch_workloop> * _submissionWorkloop;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *metalCompletionQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *metalSubmissionQueue;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)metalCompletionQueue;
- (id)metalSubmissionQueue;
- (int)performInferencesForConnection:(unsigned long long)arg1 usingInputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 attachingResultsToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 skippingInferencesWithTypes:(id)arg4;
- (int)prepareForInferenceRequirements:(id)arg1 dependencyProviderSource:(id)arg2 formatProvider:(id)arg3 pixelBufferPoolProvider:(id)arg4 connection:(unsigned long long)arg5 backPressureDrivenPipelining:(bool)arg6;
- (unsigned long long)registerInferenceConnection;
- (void)unregisterInferenceConnection:(unsigned long long)arg1;

@end
