
@interface MXHistogram : NSObject <NSSecureCoding> {
    NSArray * _histogramData;
    unsigned long long  _totalBucketCount;
}

@property (readonly) NSEnumerator *bucketEnumerator;
@property (readonly) NSArray *histogramData;
@property (readonly) unsigned long long totalBucketCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bucketEnumerator;
- (void)encodeWithCoder:(id)arg1;
- (id)histogramData;
- (id)initWithCoder:(id)arg1;
- (id)initWithHistogramBucketData:(id)arg1;
- (id)toDictionary;
- (unsigned long long)totalBucketCount;

@end
