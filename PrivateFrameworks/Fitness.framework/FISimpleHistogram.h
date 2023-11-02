
@interface FISimpleHistogram : NSObject {
    unsigned long long  _bucketCount;
    struct { long long x1; double x2; } * _buckets;
}

- (void)addValue:(double)arg1 toBucketAtIndex:(unsigned long long)arg2;
- (long long)bucketCount;
- (void)dealloc;
- (id)debugDescription;
- (id)descriptionArray;
- (id)initWithNumberOfBuckets:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (long long)numberOfValuesInBucketAtIndex:(unsigned long long)arg1;
- (double)valueForBucketAtIndex:(unsigned long long)arg1;

@end
