
@interface MontrealNNGenerateNode : NSObject {
    MontrealNNModelNode * _node;
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
    unsigned long long  _weightDataFormat;
    unsigned long long  _weightIter;
}

@property (readonly) MontrealNNModelNode *node;
@property (readonly) struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8[8]; unsigned long long x9; int x10[8][4]; int x11[4][4]; int x12[16]; float x13[16]; void *x14[16]; void *x15[16]; } parameters;
@property (readonly) unsigned long long weightDataFormat;
@property (readonly) unsigned long long weightIter;

- (void).cxx_destruct;
- (id)dataFromWeights:(float*)arg1 length:(unsigned long long)arg2;
- (unsigned long long)generateNode:(id)arg1 node:(id)arg2 weightIter:(unsigned long long)arg3 inputs:(id)arg4 outputs:(id)arg5;
- (id)initWithParameters:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8[8]; unsigned long long x9; int x10[8][4]; int x11[4][4]; int x12[16]; float x13[16]; void *x14[16]; void *x15[16]; }*)arg1 weightDataFormat:(unsigned long long)arg2;
- (id)node;
- (struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8[8]; unsigned long long x9; int x10[8][4]; int x11[4][4]; int x12[16]; float x13[16]; void *x14[16]; void *x15[16]; })parameters;
- (void)setInput:(id)arg1 inputIndex:(long long)arg2;
- (void)setInputs:(id)arg1;
- (unsigned long long)weightDataFormat;
- (unsigned long long)weightIter;

@end
