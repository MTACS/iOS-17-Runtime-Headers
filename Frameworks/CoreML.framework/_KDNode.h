
@interface _KDNode : NSObject <NSSecureCoding> {
    struct _KDBoundingBox { 
        struct vector<_KDInterval, std::allocator<_KDInterval>> { 
            struct _KDInterval {} *__begin_; 
            struct _KDInterval {} *__end_; 
            struct __compressed_pair<_KDInterval *, std::allocator<_KDInterval>> { 
                struct _KDInterval {} *__value_; 
            } __end_cap_; 
        } _intervals; 
        unsigned long long _numDimensions; 
    }  _boundingBox;
    unsigned long long  _count;
    bool  _isLeaf;
    _KDNode * _leftChild;
    _KDNode * _rightChild;
    unsigned long long  _splitDimension;
    unsigned long long  _splitIndex;
    float  _splitValue;
    unsigned long long  _startingIndex;
}

@property (nonatomic) /* Warning: unhandled struct encoding: '{_KDBoundingBox={vector<_KDInterval' */ struct  boundingBox; /* unknown property attribute:  std::allocator<_KDInterval>>=^{_KDInterval}}}Q} */
@property (nonatomic) unsigned long long count;
@property (nonatomic) bool isLeaf;
@property (nonatomic, retain) _KDNode *leftChild;
@property (nonatomic, retain) _KDNode *rightChild;
@property (nonatomic) unsigned long long splitDimension;
@property (nonatomic) unsigned long long splitIndex;
@property (nonatomic) float splitValue;
@property (nonatomic) unsigned long long startingIndex;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)assignSplitsForData:(const float*)arg1 indices:(unsigned long long*)arg2 numDimensions:(unsigned long long)arg3;
- (struct _KDBoundingBox { struct vector<_KDInterval, std::allocator<_KDInterval>> { struct _KDInterval {} *x_1_1_1; struct _KDInterval {} *x_1_1_2; struct __compressed_pair<_KDInterval *, std::allocator<_KDInterval>> { struct _KDInterval {} *x_3_2_1; } x_1_1_3; } x1; unsigned long long x2; })boundingBox;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (void)findMin:(float*)arg1 andMax:(float*)arg2 alongDimension:(unsigned long long)arg3 data:(const float*)arg4 indices:(const unsigned long long*)arg5 numDimensions:(unsigned long long)arg6;
- (id)initWithCoder:(id)arg1;
- (bool)isLeaf;
- (id)leftChild;
- (void)partitionDataPoints:(const float*)arg1 indices:(unsigned long long*)arg2 numDimensions:(unsigned long long)arg3;
- (void)print;
- (id)rightChild;
- (void)setBoundingBox:(struct _KDBoundingBox { struct vector<_KDInterval, std::allocator<_KDInterval>> { struct _KDInterval {} *x_1_1_1; struct _KDInterval {} *x_1_1_2; struct __compressed_pair<_KDInterval *, std::allocator<_KDInterval>> { struct _KDInterval {} *x_3_2_1; } x_1_1_3; } x1; unsigned long long x2; })arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setIsLeaf:(bool)arg1;
- (void)setLeftChild:(id)arg1;
- (void)setRightChild:(id)arg1;
- (void)setSplitDimension:(unsigned long long)arg1;
- (void)setSplitIndex:(unsigned long long)arg1;
- (void)setSplitValue:(float)arg1;
- (void)setStartingIndex:(unsigned long long)arg1;
- (unsigned long long)splitDimension;
- (unsigned long long)splitIndex;
- (float)splitValue;
- (unsigned long long)startingIndex;

@end
