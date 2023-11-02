
@protocol CUTSOSMetric <CUTMetric>

@required

- (NSString *)operationID;
- (unsigned long long)sosDomain;
- (long long)sosError;
- (unsigned long long)sosType;

@end
