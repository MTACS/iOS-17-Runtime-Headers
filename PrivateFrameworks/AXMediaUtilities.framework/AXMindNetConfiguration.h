
@interface AXMindNetConfiguration : NSObject {
    NSArray * _filterThresholds;
    NSNumber * _nmsThreshold;
}

@property (nonatomic, readonly) NSArray *filterThresholds;
@property (nonatomic, readonly) NSNumber *nmsThreshold;

- (void).cxx_destruct;
- (id)description;
- (id)filterThresholds;
- (id)initWithURL:(id)arg1;
- (id)nmsThreshold;

@end
