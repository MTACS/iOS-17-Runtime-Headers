
@interface MontrealNNGenerateModel : NSObject {
    NSMutableDictionary * _inputs;
    MontrealNNModelNetwork * _network;
    struct MontrealNeuralNetwork { } * _nnObject;
    NSMutableDictionary * _outputs;
    unsigned long long  _weightFormat;
}

@property (readonly) NSMutableDictionary *inputs;
@property (readonly) MontrealNNModelNetwork *network;
@property struct MontrealNeuralNetwork { }*nnObject;
@property (readonly) NSMutableDictionary *outputs;
@property (readonly) unsigned long long weightFormat;

- (void).cxx_destruct;
- (void)addInputs:(id)arg1;
- (void)addOutputs:(id)arg1;
- (void)dealloc;
- (void*)generateModelContainer;
- (id)initWithWeightFormat:(unsigned long long)arg1;
- (id)inputs;
- (void)merge:(id)arg1;
- (id)modelContainerPath;
- (id)network;
- (id)networkInputs;
- (id)networkOutputs;
- (struct MontrealNeuralNetwork { }*)nnObject;
- (id)outputs;
- (void)removeInput:(id)arg1;
- (void)removeOutput:(id)arg1;
- (void)setNnObject:(struct MontrealNeuralNetwork { }*)arg1;
- (unsigned long long)weightFormat;

@end
