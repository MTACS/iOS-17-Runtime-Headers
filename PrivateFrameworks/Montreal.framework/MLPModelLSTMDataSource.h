
@interface MLPModelLSTMDataSource : NSObject <MPSCNNConvolutionDataSource> {
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _bias;
    unsigned long long  _columns;
    MPSCNNConvolutionDescriptor * _desc;
    unsigned long long  _lstmInputSize;
    unsigned long long  _lstmOutputSize;
    unsigned long long  _rows;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _weight;
    unsigned long long  _weightID;
}

@property unsigned long long columns;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property unsigned long long lstmInputSize;
@property unsigned long long lstmOutputSize;
@property unsigned long long rows;
@property (readonly) Class superclass;
@property unsigned long long weightID;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float*)biasTerms;
- (unsigned long long)bias_size;
- (void)checkpoint;
- (unsigned long long)columns;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (unsigned int)dataType;
- (id)descriptor;
- (id)initWithColumns:(unsigned long long)arg1 rows:(unsigned long long)arg2 lstmInputSize:(unsigned long long)arg3 lstmOutputSize:(unsigned long long)arg4 weightID:(unsigned long long)arg5 neuronType:(int)arg6 neuronA:(float)arg7 neuronB:(float)arg8 initialWeights_0:(float*)arg9 initialWeights_1:(float*)arg10 bias_0:(float*)arg11 bias_1:(float*)arg12 weightAttributes:(unsigned long long)arg13 deviceHandler:(id)arg14;
- (void)initializeWeightsAndBiases:(id)arg1;
- (id)label;
- (bool)load;
- (void)loadWithInitialWeights_0:(float*)arg1 initialWeights_1:(float*)arg2 bias_0:(float*)arg3 bias_1:(float*)arg4 weightAttributes:(unsigned long long)arg5;
- (unsigned long long)lstmInputSize;
- (unsigned long long)lstmOutputSize;
- (void)purge;
- (unsigned long long)rows;
- (void)setColumns:(unsigned long long)arg1;
- (void)setLstmInputSize:(unsigned long long)arg1;
- (void)setLstmOutputSize:(unsigned long long)arg1;
- (void)setRows:(unsigned long long)arg1;
- (void)setWeightID:(unsigned long long)arg1;
- (unsigned long long)weightID;
- (unsigned long long)weight_size;
- (void*)weights;

@end
