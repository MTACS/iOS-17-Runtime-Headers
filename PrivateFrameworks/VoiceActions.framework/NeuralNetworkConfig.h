
@interface NeuralNetworkConfig : NSObject {
    void logMinimum;
    void logThreshold;
    void modelPath;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) float logMinimum;
@property (nonatomic) float logThreshold;
@property (nonatomic, copy) NSString *modelPath;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (float)logMinimum;
- (float)logThreshold;
- (id)modelPath;
- (void)setLogMinimum:(float)arg1;
- (void)setLogThreshold:(float)arg1;
- (void)setModelPath:(id)arg1;

@end
