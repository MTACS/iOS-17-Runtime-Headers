
@interface MontrealNNModelNetwork : MontrealNNDescription <MontrealNNDescriptionProtocol> {
    NSArray * _inputs;
    NSString * _jsonDir;
    NSArray * _nodes;
    MontrealNNModelOptimizerParam * _optimizerParams;
    NSArray * _outputs;
    MontrealNNModelQuantization * _quantization;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSArray *inputs;
@property (readonly) NSString *jsonDir;
@property (retain) NSArray *nodes;
@property (readonly) MontrealNNModelOptimizerParam *optimizerParams;
@property (retain) NSArray *outputs;
@property (readonly) MontrealNNModelQuantization *quantization;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)checkForValidity;
- (void)collapseNodes;
- (void)collapsePackUnpack:(id)arg1 nodesToRemove:(id)arg2;
- (id)createDataContainer;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)generateJSONAtPath:(id)arg1;
- (void*)generateModelContainer;
- (id)init;
- (id)initWithDictionary:(id)arg1 tensors:(id)arg2 quantization:(id)arg3 optimizerParams:(id)arg4 jsonDir:(id)arg5 optimization:(unsigned long long)arg6;
- (id)initWithJSONDir:(id)arg1;
- (id)initWithModelContainer:(void*)arg1 tensors:(id)arg2;
- (id)inputs;
- (id)jsonDescription;
- (id)jsonDir;
- (id)nodes;
- (id)optimizerParams;
- (id)outputs;
- (id)quantization;
- (void)removeView:(id)arg1 nodesToRemove:(id)arg2;
- (void)setInputs:(id)arg1;
- (void)setNodes:(id)arg1;
- (void)setOutputs:(id)arg1;
- (void)validateNetworkTensors:(id)arg1;
- (void)validateNodeTensors;

@end
