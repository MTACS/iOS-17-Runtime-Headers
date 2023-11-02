
@interface CMIInferenceExecutionStreamEspressoV2 : NSObject <CMIInferenceExecutionStream> {
    struct e5rt_execution_stream { } * _stream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct e5rt_execution_stream { }*stream;
@property (readonly) Class superclass;

- (void)dealloc;
- (int)enqueueNetworkInstance:(id)arg1;
- (id)init;
- (void)setStream:(struct e5rt_execution_stream { }*)arg1;
- (struct e5rt_execution_stream { }*)stream;
- (int)submitAsyncWithCompletionHandler:(id /* block */)arg1;

@end
