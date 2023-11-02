
@interface RTStoredLocationEnumerationOptions : RTEnumerationOptions <NSCopying> {
    bool  _ascending;
    unsigned long long  _batchSize;
    CLLocation * _boundingBoxLocation;
    NSDateInterval * _dateInterval;
    bool  _downsampleRequired;
    double  _horizontalAccuracy;
    double  _smoothingErrorThreshold;
    bool  _smoothingRequired;
    int  _type;
}

@property (nonatomic) bool ascending;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, copy) CLLocation *boundingBoxLocation;
@property (nonatomic, copy) NSDateInterval *dateInterval;
@property (nonatomic) bool downsampleRequired;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double smoothingErrorThreshold;
@property (nonatomic) bool smoothingRequired;
@property (nonatomic) int type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)ascending;
- (unsigned long long)batchSize;
- (id)boundingBoxLocation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (bool)downsampleRequired;
- (void)encodeWithCoder:(id)arg1;
- (Class)enumeratedType;
- (unsigned long long)hash;
- (double)horizontalAccuracy;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 horizontalAccuracy:(double)arg2 batchSize:(unsigned long long)arg3;
- (id)initWithDateInterval:(id)arg1 horizontalAccuracy:(double)arg2 batchSize:(unsigned long long)arg3 ascending:(bool)arg4;
- (id)initWithDateInterval:(id)arg1 horizontalAccuracy:(double)arg2 batchSize:(unsigned long long)arg3 boundingBoxLocation:(id)arg4;
- (id)initWithDateInterval:(id)arg1 horizontalAccuracy:(double)arg2 batchSize:(unsigned long long)arg3 boundingBoxLocation:(id)arg4 type:(int)arg5;
- (id)initWithDateInterval:(id)arg1 horizontalAccuracy:(double)arg2 batchSize:(unsigned long long)arg3 boundingBoxLocation:(id)arg4 type:(int)arg5 downsampleRequired:(bool)arg6;
- (id)initWithDateInterval:(id)arg1 horizontalAccuracy:(double)arg2 batchSize:(unsigned long long)arg3 boundingBoxLocation:(id)arg4 type:(int)arg5 downsampleRequired:(bool)arg6 smoothingErrorThreshold:(double)arg7;
- (id)initWithDateInterval:(id)arg1 horizontalAccuracy:(double)arg2 batchSize:(unsigned long long)arg3 boundingBoxLocation:(id)arg4 type:(int)arg5 smoothingRequired:(bool)arg6 downsampleRequired:(bool)arg7 smoothingErrorThreshold:(double)arg8 ascending:(bool)arg9;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOptions:(id)arg1;
- (id /* block */)processingBlock;
- (void)setAscending:(bool)arg1;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setBoundingBoxLocation:(id)arg1;
- (void)setDateInterval:(id)arg1;
- (void)setDownsampleRequired:(bool)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setSmoothingErrorThreshold:(double)arg1;
- (void)setSmoothingRequired:(bool)arg1;
- (void)setType:(int)arg1;
- (double)smoothingErrorThreshold;
- (bool)smoothingRequired;
- (int)type;

@end
