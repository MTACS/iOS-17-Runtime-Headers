
@interface MLNearestNeighborsLinearIndex : NSObject <MLNearestNeighborsIndex, NSSecureCoding> {
    unsigned long long  _numDataPoints;
    unsigned long long  _numDimensions;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  vData;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  vDataL2Squared;
}

@property (nonatomic) unsigned long long numDataPoints;
@property (nonatomic) unsigned long long numDimensions;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)dataPointCount;
- (void)encodeWithCoder:(id)arg1;
- (struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> { void *x1; void *x2; struct __compressed_pair<std::pair<unsigned long, float> *, std::allocator<std::pair<unsigned long, float>>> { void *x_3_1_1; } x3; })findNearestNeighbors:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> { void *x1; void *x2; struct __compressed_pair<std::pair<unsigned long, float> *, std::allocator<std::pair<unsigned long, float>>> { void *x_3_1_1; } x3; })findNearestNeighbors:(unsigned long long)arg1 toQueryPoint:(const void*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataset:(struct vector<float, std::allocator<float>> { float *x1; float *x2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_1_1; } x3; })arg1 numberOfDimensions:(unsigned long long)arg2;
- (unsigned long long)numDataPoints;
- (unsigned long long)numDimensions;
- (void)setNumDataPoints:(unsigned long long)arg1;
- (void)setNumDimensions:(unsigned long long)arg1;
- (bool)updateWithData:(const void*)arg1 error:(id*)arg2;

@end
