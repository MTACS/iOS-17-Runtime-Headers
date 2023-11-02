
@interface ICNAHistogramBase : NSObject {
    NSArray * _bucketLeftBounds;
    NSMutableArray * _countsForEachBucket;
    NSNumber * _valueMax;
    double  _valuePrecision;
}

@property (nonatomic, retain) NSArray *bucketLeftBounds;
@property (nonatomic, retain) NSMutableArray *countsForEachBucket;
@property (nonatomic, retain) NSNumber *valueMax;
@property (nonatomic) double valuePrecision;

- (void).cxx_destruct;
- (id)bucketLeftBounds;
- (id)countsForEachBucket;
- (id)icasHistogram;
- (id)init;
- (void)reportValue:(double)arg1;
- (unsigned long long)roundedCount:(unsigned long long)arg1;
- (double)roundedValue:(double)arg1;
- (void)setBucketLeftBounds:(id)arg1;
- (void)setCountsForEachBucket:(id)arg1;
- (void)setValueMax:(id)arg1;
- (void)setValuePrecision:(double)arg1;
- (void)setup;
- (id)valueMax;
- (double)valuePrecision;

@end
