
@interface MPSCNNWeight : NSObject <MPSCNNConvolutionDataSource> {
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _bias;
    MPSCNNConvolutionDescriptor * _desc;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _weight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)biasSize;
- (float*)biasTerms;
- (void)checkpoint;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (unsigned int)dataType;
- (void)dealloc;
- (id)descriptor;
- (id)initWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 strideInPixelsX:(unsigned long long)arg5 strideInPixelsY:(unsigned long long)arg6 neuronType:(int)arg7 neuronA:(float)arg8 neuronB:(float)arg9;
- (id)label;
- (bool)load;
- (void)purge;
- (unsigned long long)weightSize;
- (void*)weights;

@end
