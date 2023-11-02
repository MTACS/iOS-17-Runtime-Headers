
@interface RTSynthesizedLocationEnumerationOptions : RTEnumerationOptions <NSCopying> {
    unsigned long long  _batchSize;
    CLLocation * _boundingBoxLocation;
    NSDateInterval * _dateInterval;
    long long  _preferredDownsamplingLevel;
}

@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, copy) CLLocation *boundingBoxLocation;
@property (nonatomic, copy) NSDateInterval *dateInterval;
@property (nonatomic) long long preferredDownsamplingLevel;

+ (long long)NextLessDecimatedDownsamplingPreference:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)batchSize;
- (id)boundingBoxLocation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (Class)enumeratedType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1;
- (id)initWithDateInterval:(id)arg1 preferredDownsamplingLevel:(long long)arg2;
- (id)initWithDateInterval:(id)arg1 preferredDownsamplingLevel:(long long)arg2 batchSize:(unsigned long long)arg3;
- (id)initWithDateInterval:(id)arg1 preferredDownsamplingLevel:(long long)arg2 batchSize:(unsigned long long)arg3 boundingBoxLocation:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOptions:(id)arg1;
- (long long)preferredDownsamplingLevel;
- (id /* block */)processingBlock;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setBoundingBoxLocation:(id)arg1;
- (void)setDateInterval:(id)arg1;
- (void)setPreferredDownsamplingLevel:(long long)arg1;

@end
