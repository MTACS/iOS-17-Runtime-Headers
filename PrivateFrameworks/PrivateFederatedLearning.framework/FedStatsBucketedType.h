
@interface FedStatsBucketedType : FedStatsBoundedULongType {
    NSArray * _bucketBoundaries;
    NSNumber * _bucketCount;
    NSNumber * _maxValue;
    NSNumber * _minValue;
    NSNumber * _stepSize;
    long long  _version;
}

@property (nonatomic, retain) NSArray *bucketBoundaries;
@property (nonatomic, retain) NSNumber *bucketCount;
@property (nonatomic, retain) NSNumber *maxValue;
@property (nonatomic, retain) NSNumber *minValue;
@property (nonatomic, retain) NSNumber *stepSize;
@property (nonatomic) long long version;

+ (id)createFromDict:(id)arg1 possibleError:(id*)arg2;

- (void).cxx_destruct;
- (id)bucketBoundaries;
- (id)bucketCount;
- (unsigned long long)classCount;
- (long long)dataType;
- (id)decodeFromIndex:(id)arg1 possibleError:(id*)arg2;
- (id)encodeToIndex:(id)arg1 possibleError:(id*)arg2;
- (id)indexToInterval:(id)arg1;
- (id)initWithBucketBoundaries:(id)arg1;
- (id)initWithMinValue:(id)arg1 maxValue:(id)arg2 bucketCount:(id)arg3;
- (id)maxValue;
- (id)minValue;
- (id)sampleForIndex:(unsigned long long)arg1;
- (void)setBucketBoundaries:(id)arg1;
- (void)setBucketCount:(id)arg1;
- (void)setMaxValue:(id)arg1;
- (void)setMinValue:(id)arg1;
- (void)setStepSize:(id)arg1;
- (void)setVersion:(long long)arg1;
- (id)stepSize;
- (long long)version;

@end
