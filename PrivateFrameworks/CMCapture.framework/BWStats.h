
@interface BWStats : NSObject {
    double  _max;
    double  _min;
    double  _multiplier;
    long long  _numberOfSamples;
    double  _sumX;
    double  _sumXX;
    NSString * _unitDesignator;
}

@property (nonatomic, readonly) double average;
@property (nonatomic, readonly) double max;
@property (nonatomic, readonly) double min;
@property (nonatomic) double multiplier;
@property (nonatomic, readonly) long long numberOfSamples;
@property (nonatomic, readonly) double standardDeviation;
@property (nonatomic, copy) NSString *unitDesignator;

- (void)addDataPoint:(double)arg1;
- (double)average;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithStats:(id)arg1;
- (double)max;
- (double)min;
- (double)multiplier;
- (long long)numberOfSamples;
- (void)removeDataPoint:(double)arg1;
- (void)setMultiplier:(double)arg1;
- (void)setUnitDesignator:(id)arg1;
- (double)standardDeviation;
- (id)unitDesignator;

@end
