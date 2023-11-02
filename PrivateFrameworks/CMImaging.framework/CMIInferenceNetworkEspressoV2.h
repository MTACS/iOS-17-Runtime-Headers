
@interface CMIInferenceNetworkEspressoV2 : NSObject <CMIInferenceNetwork> {
    NSArray * _inputs;
    NSArray * _instances;
    struct e5rt_execution_stream_operation { } * _mainEsop;
    NSString * _networkPath;
    NSArray * _outputs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *inputs;
@property (nonatomic, readonly) NSArray *outputs;
@property (readonly) Class superclass;

+ (int)_loadEsopWithPath:(id)arg1 esopOut:(struct e5rt_execution_stream_operation {}**)arg2;

- (void).cxx_destruct;
- (int)_duplicateMainEsop:(struct e5rt_execution_stream_operation {}**)arg1;
- (int)allocateInstancesWithDevice:(id)arg1 instanceCount:(unsigned long long)arg2 useTextureArrays:(bool)arg3;
- (int)bindIOPortsWithInputNames:(id)arg1 withOutputNames:(id)arg2;
- (void)dealloc;
- (id)getInputs;
- (id)getInstanceWithIndex:(unsigned long long)arg1;
- (id)getOutputs;
- (id)init;
- (id)inputs;
- (int)loadNetworkWithPath:(id)arg1;
- (id)outputs;

@end
