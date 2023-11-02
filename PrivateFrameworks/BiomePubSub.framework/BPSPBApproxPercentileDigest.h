
@interface BPSPBApproxPercentileDigest : PBCodable <NSCopying> {
    unsigned int  _bufferMultiplier;
    unsigned int  _centroidCount;
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _centroidMeans;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _centroidWeights;
    struct { 
        unsigned int bufferMultiplier : 1; 
        unsigned int centroidCount : 1; 
        unsigned int max : 1; 
        unsigned int min : 1; 
    }  _has;
    float  _max;
    float  _min;
}

@property (nonatomic) unsigned int bufferMultiplier;
@property (nonatomic) unsigned int centroidCount;
@property (nonatomic, readonly) float*centroidMeans;
@property (nonatomic, readonly) unsigned long long centroidMeansCount;
@property (nonatomic, readonly) unsigned int*centroidWeights;
@property (nonatomic, readonly) unsigned long long centroidWeightsCount;
@property (nonatomic) bool hasBufferMultiplier;
@property (nonatomic) bool hasCentroidCount;
@property (nonatomic) bool hasMax;
@property (nonatomic) bool hasMin;
@property (nonatomic) float max;
@property (nonatomic) float min;

- (void)addCentroidMeans:(float)arg1;
- (void)addCentroidWeights:(unsigned int)arg1;
- (unsigned int)bufferMultiplier;
- (unsigned int)centroidCount;
- (float*)centroidMeans;
- (float)centroidMeansAtIndex:(unsigned long long)arg1;
- (unsigned long long)centroidMeansCount;
- (unsigned int*)centroidWeights;
- (unsigned int)centroidWeightsAtIndex:(unsigned long long)arg1;
- (unsigned long long)centroidWeightsCount;
- (void)clearCentroidMeans;
- (void)clearCentroidWeights;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBufferMultiplier;
- (bool)hasCentroidCount;
- (bool)hasMax;
- (bool)hasMin;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (float)max;
- (void)mergeFrom:(id)arg1;
- (float)min;
- (bool)readFrom:(id)arg1;
- (void)setBufferMultiplier:(unsigned int)arg1;
- (void)setCentroidCount:(unsigned int)arg1;
- (void)setCentroidMeans:(float*)arg1 count:(unsigned long long)arg2;
- (void)setCentroidWeights:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setHasBufferMultiplier:(bool)arg1;
- (void)setHasCentroidCount:(bool)arg1;
- (void)setHasMax:(bool)arg1;
- (void)setHasMin:(bool)arg1;
- (void)setMax:(float)arg1;
- (void)setMin:(float)arg1;
- (void)writeTo:(id)arg1;

@end
