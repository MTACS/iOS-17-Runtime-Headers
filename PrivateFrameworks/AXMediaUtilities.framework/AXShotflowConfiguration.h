
@interface AXShotflowConfiguration : NSObject {
    NSArray * _defaultBoxesSidesNormalized;
    NSArray * _filterThresholds;
    NSNumber * _networkThreshold;
    NSNumber * _nmsThreshold;
    NSArray * _ratios;
}

@property (nonatomic, readonly) NSArray *defaultBoxesSidesNormalized;
@property (nonatomic, readonly) NSArray *filterThresholds;
@property (nonatomic, readonly) NSNumber *networkThreshold;
@property (nonatomic, readonly) NSNumber *nmsThreshold;
@property (nonatomic, readonly) NSArray *ratios;

- (void).cxx_destruct;
- (id)defaultBoxesSidesNormalized;
- (id)description;
- (id)filterThresholds;
- (id)initWithURL:(id)arg1;
- (id)networkThreshold;
- (id)nmsThreshold;
- (id)ratios;

@end
