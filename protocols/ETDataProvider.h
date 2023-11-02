
@protocol ETDataProvider <NSObject>

@required

- (NSDictionary *)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2;
- (unsigned long long)numberOfDataPoints;

@optional

- (void)prepareForEpoch;

@end
