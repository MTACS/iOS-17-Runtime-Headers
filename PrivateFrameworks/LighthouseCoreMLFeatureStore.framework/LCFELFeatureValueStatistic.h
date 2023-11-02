
@interface LCFELFeatureValueStatistic : NSObject {
    NSNumber * _count;
    NSString * _featureName;
    NSNumber * _mean;
    NSNumber * _stddev;
}

@property (nonatomic, readonly) NSNumber *count;
@property (nonatomic, readonly) NSString *featureName;
@property (nonatomic, readonly) NSNumber *mean;
@property (nonatomic, readonly) NSNumber *stddev;

- (void).cxx_destruct;
- (id)count;
- (id)featureName;
- (id)init:(id)arg1 count:(id)arg2 mean:(id)arg3 stddev:(id)arg4;
- (id)mean;
- (id)stddev;

@end
