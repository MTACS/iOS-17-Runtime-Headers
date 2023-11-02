
@interface BPSApproxPercentileDigest : PBCodable <BMProtoBufWrapper, NSSecureCoding> {
    float  _max;
    unsigned long long  _maxCentroidCount;
    NSMutableArray * _mergedCentroids;
    float  _min;
    unsigned long long  _totalWeight;
    unsigned long long  _unmergedBufferSize;
    NSMutableArray * _unmergedCentroids;
}

@property (nonatomic) float max;
@property (nonatomic) unsigned long long maxCentroidCount;
@property (nonatomic, retain) NSMutableArray *mergedCentroids;
@property (nonatomic) float min;
@property (nonatomic) unsigned long long totalWeight;
@property (nonatomic) unsigned long long unmergedBufferSize;
@property (nonatomic, retain) NSMutableArray *unmergedCentroids;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addDigest:(id)arg1;
- (void)addValue:(float)arg1;
- (void)addValue:(float)arg1 weight:(unsigned int)arg2;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1 bufferMultiplier:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (float)max;
- (unsigned long long)maxCentroidCount;
- (void)mergeCentroids;
- (id)mergedCentroids;
- (float)min;
- (id)proto;
- (double)quantileLimitForClusterIndex:(unsigned long long)arg1 maxCentroidCount:(unsigned long long)arg2;
- (void)setMax:(float)arg1;
- (void)setMaxCentroidCount:(unsigned long long)arg1;
- (void)setMergedCentroids:(id)arg1;
- (void)setMin:(float)arg1;
- (void)setTotalWeight:(unsigned long long)arg1;
- (void)setUnmergedBufferSize:(unsigned long long)arg1;
- (void)setUnmergedCentroids:(id)arg1;
- (unsigned long long)totalWeight;
- (unsigned long long)unmergedBufferSize;
- (id)unmergedCentroids;
- (double)valueAtQuantile:(double)arg1;

@end
