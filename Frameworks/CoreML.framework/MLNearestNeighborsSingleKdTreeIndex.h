
@interface MLNearestNeighborsSingleKdTreeIndex : NSObject <MLNearestNeighborsIndex, NSSecureCoding> {
    unsigned long long  _leafSize;
    unsigned long long  _numDimensions;
    _KDNode * _root;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  vData;
    struct vector<unsigned long, std::allocator<unsigned long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  vIndices;
}

@property (nonatomic) unsigned long long leafSize;
@property (nonatomic) unsigned long long numDimensions;
@property (nonatomic, retain) _KDNode *root;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> { void *x1; void *x2; struct __compressed_pair<std::pair<unsigned long, float> *, std::allocator<std::pair<unsigned long, float>>> { void *x_3_1_1; } x3; })calculateDistancesForNodesBetweenLeft:(unsigned long long)arg1 andRight:(unsigned long long)arg2 toQueryPoint:(const void*)arg3;
- (id)constructTree;
- (id)constructTreeForPointsBoundedBy:(void*)arg1 startingIndex:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (unsigned long long)dataPointCount;
- (void)encodeWithCoder:(id)arg1;
- (void)findK:(unsigned long long)arg1 nearestNeighbors:(void*)arg2 toQueryPoint:(const void*)arg3 inTree:(id)arg4;
- (struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> { void *x1; void *x2; struct __compressed_pair<std::pair<unsigned long, float> *, std::allocator<std::pair<unsigned long, float>>> { void *x_3_1_1; } x3; })findNearestNeighbors:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> { void *x1; void *x2; struct __compressed_pair<std::pair<unsigned long, float> *, std::allocator<std::pair<unsigned long, float>>> { void *x_3_1_1; } x3; })findNearestNeighbors:(unsigned long long)arg1 toQueryPoint:(const void*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataset:(void*)arg1 numberOfDimensions:(unsigned long long)arg2 leafSize:(unsigned long long)arg3 error:(id*)arg4;
- (unsigned long long)leafSize;
- (unsigned long long)numDimensions;
- (id)root;
- (void)setLeafSize:(unsigned long long)arg1;
- (void)setNumDimensions:(unsigned long long)arg1;
- (void)setRoot:(id)arg1;
- (bool)updateWithData:(const void*)arg1 error:(id*)arg2;

@end
