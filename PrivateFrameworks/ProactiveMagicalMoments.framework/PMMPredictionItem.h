
@interface PMMPredictionItem : NSObject {
    long long  _anchorType;
    NSString * _bundleId;
    double  _confidence;
    unsigned long long  _predictionSource;
    long long  _reason;
    NSDictionary * _reasonMetadata;
}

@property (nonatomic, readonly) long long anchorType;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) unsigned long long predictionSource;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) NSDictionary *reasonMetadata;

- (void).cxx_destruct;
- (long long)anchorType;
- (id)bundleId;
- (double)confidence;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBundleId:(id)arg1 predictionSource:(unsigned long long)arg2 reason:(long long)arg3 reasonMetadata:(id)arg4 anchorType:(long long)arg5 confidence:(double)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPredictionItem:(id)arg1;
- (unsigned long long)predictionSource;
- (long long)reason;
- (id)reasonMetadata;

@end
