
@interface BPSApproxPercentileDigestCentroid : NSObject {
    float  _mean;
    unsigned int  _weight;
}

@property (nonatomic) float mean;
@property (nonatomic) unsigned int weight;

- (unsigned long long)hash;
- (id)initWithMeanAndWeight:(float)arg1 weight:(unsigned int)arg2;
- (bool)isEqual:(id)arg1;
- (float)mean;
- (void)setMean:(float)arg1;
- (void)setWeight:(unsigned int)arg1;
- (unsigned int)weight;

@end
