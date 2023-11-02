
@interface HMIFaceQualityEntropyOfLaplacian : HMFObject <HMFLogging> {
    float  _binWidth;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _histogram;
    int  _maxLaplacianScore;
    float  _maxScore;
    int  _minLaplacianScore;
    int  _numBins;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)computeJunkScoreForPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)init;

@end
