
@interface MontrealNNModelNode : MontrealNNDescription <MontrealNNDescriptionProtocol> {
    NSArray * _activations;
    NSArray * _inputs;
    NSArray * _inputsWithDimensions;
    NSString * _name;
    NSString * _nodeStr;
    NSArray * _outputs;
    NSArray * _outputsWithDimensions;
    struct { 
        long long nodeType; 
        long long engineType; 
        long long inputDataType; 
        long long outputDataType; 
        long long weightDataType; 
        long long kernelDataType; 
        long long inputEncoding; 
        long long activations[8]; 
        unsigned long long weightAttributes; 
        int inputDimensions[8][4]; 
        int outputDimensions[4][4]; 
        int integers[16]; 
        float floats[16]; 
        void *weights[16]; 
        void *biases[16]; 
    }  _parameters;
    bool  _parametersSet;
    NSDictionary * _properties;
    MontrealNNModelQuantization * _quantization;
    NSArray * _weights;
}

@property (readonly) NSArray *activations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *inputs;
@property (nonatomic, retain) NSArray *inputsWithDimensions;
@property (readonly) NSString *name;
@property (readonly) NSString *nodeStr;
@property (nonatomic, retain) NSArray *outputs;
@property (nonatomic, retain) NSArray *outputsWithDimensions;
@property struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8[8]; unsigned long long x9; int x10[8][4]; int x11[4][4]; int x12[16]; float x13[16]; void *x14[16]; void *x15[16]; } parameters;
@property bool parametersSet;
@property (readonly) NSDictionary *properties;
@property (readonly) MontrealNNModelQuantization *quantization;
@property (readonly) Class superclass;
@property (getter=isValid, readonly) bool valid;
@property (readonly) NSArray *weights;

- (void).cxx_destruct;
- (id)activations;
- (id)auditAndUpdateTensors:(id)arg1 dimensionTensors:(id)arg2;
- (id)checkForValidity;
- (id)createDataContainer;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)generateJSONAtPath:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1 tensors:(id)arg2 quantization:(id)arg3 jsonDir:(id)arg4;
- (id)initWithName:(id)arg1 nodeStr:(id)arg2 activations:(id)arg3 properties:(id)arg4 weights:(id)arg5;
- (id)inputs;
- (id)inputsWithDimensions;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)jsonDescription;
- (void)keepTensors:(id)arg1;
- (id)name;
- (id)nodeStr;
- (id)outputs;
- (id)outputsWithDimensions;
- (struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8[8]; unsigned long long x9; int x10[8][4]; int x11[4][4]; int x12[16]; float x13[16]; void *x14[16]; void *x15[16]; })parameters;
- (struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8[8]; unsigned long long x9; int x10[8][4]; int x11[4][4]; int x12[16]; float x13[16]; void *x14[16]; void *x15[16]; })parameters:(void*)arg1;
- (bool)parametersSet;
- (id)properties;
- (id)quantization;
- (void)setInputs:(id)arg1;
- (void)setInputsWithDimensions:(id)arg1;
- (void)setOutputs:(id)arg1;
- (void)setOutputsWithDimensions:(id)arg1;
- (void)setParameters:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8[8]; unsigned long long x9; int x10[8][4]; int x11[4][4]; int x12[16]; float x13[16]; void *x14[16]; void *x15[16]; })arg1;
- (void)setParametersSet:(bool)arg1;
- (id)weights;

@end
