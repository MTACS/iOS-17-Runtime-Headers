
@interface BWE5InferenceStorage : BWInferenceProviderStorage {
    NSDictionary * _bindingNameByRequirement;
    struct e5rt_execution_stream_operation { } * _operation;
    struct e5rt_execution_stream { } * _stream;
    NSMapTable * _tensorPortByRequirement;
}

@property (nonatomic, readonly) struct e5rt_execution_stream_operation { }*operation;
@property (nonatomic, readonly) struct e5rt_execution_stream { }*stream;

- (id)bindingNameForRequirement:(id)arg1;
- (void)clear;
- (void)dealloc;
- (id)initWithOperation:(struct e5rt_execution_stream_operation { }*)arg1 stream:(struct e5rt_execution_stream { }*)arg2 bindingNameByRequirement:(id)arg3 requirementsNeedingPixelBuffers:(id)arg4 requirementsNeedingPixelBufferPools:(id)arg5 requirementsNeedingTensors:(id)arg6;
- (id)newMetadataDictionarySatisfyingRequirement:(id)arg1;
- (struct e5rt_execution_stream_operation { }*)operation;
- (void)setTensorPort:(struct e5rt_io_port {}**)arg1 forRequirement:(id)arg2;
- (struct e5rt_execution_stream { }*)stream;
- (struct e5rt_io_port {}**)tensorPortForRequirement:(id)arg1;

@end
