
@interface MPSGraphRandomOpDescriptor : MPSGraphObject <NSCopying> {
    unsigned int  _dataType;
    unsigned long long  _distribution;
    float  _max;
    long long  _maxInteger;
    float  _mean;
    float  _min;
    long long  _minInteger;
    unsigned long long  _samplingMethod;
    float  _standardDeviation;
}

@property (nonatomic) unsigned int dataType;
@property (nonatomic) unsigned long long distribution;
@property (nonatomic) float max;
@property (nonatomic) long long maxInteger;
@property (nonatomic) float mean;
@property (nonatomic) float min;
@property (nonatomic) long long minInteger;
@property (nonatomic) unsigned long long samplingMethod;
@property (nonatomic) float standardDeviation;

+ (id)descriptorWithDistribution:(unsigned long long)arg1 dataType:(unsigned int)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataType;
- (unsigned long long)distribution;
- (float)max;
- (long long)maxInteger;
- (float)mean;
- (float)min;
- (long long)minInteger;
- (unsigned long long)samplingMethod;
- (void)setDataType:(unsigned int)arg1;
- (void)setDistribution:(unsigned long long)arg1;
- (void)setMax:(float)arg1;
- (void)setMaxInteger:(long long)arg1;
- (void)setMean:(float)arg1;
- (void)setMin:(float)arg1;
- (void)setMinInteger:(long long)arg1;
- (void)setSamplingMethod:(unsigned long long)arg1;
- (void)setStandardDeviation:(float)arg1;
- (float)standardDeviation;

@end
