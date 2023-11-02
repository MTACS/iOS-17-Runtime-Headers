
@interface CMIInferenceExecutionStreamEspressoV1 : NSObject <CMIInferenceExecutionStream> {
    NSMutableArray * _instances;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableArray *instances;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)enqueueNetworkInstance:(id)arg1;
- (id)init;
- (id)instances;
- (void)setInstances:(id)arg1;
- (int)submitAsyncWithCompletionHandler:(id /* block */)arg1;

@end
