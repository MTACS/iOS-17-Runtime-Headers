
@interface MLCTensorOptimizerDeviceData : NSObject <NSCopying> {
    NSArray * _centerWeightVectors;
    id  _gpuOps;
    NSData * _gradientBNNSDesc;
    NSMutableArray * _momentumData;
    NSMutableArray * _momentumDataBytes;
    NSArray * _momentumVectors;
    NSData * _sourceBNNSDesc;
    NSArray * _velocityVectors;
}

@property (nonatomic, retain) NSArray *centerWeightVectors;
@property (nonatomic, retain) id gpuOps;
@property (nonatomic, retain) NSData *gradientBNNSDesc;
@property (nonatomic, retain) NSMutableArray *momentumData;
@property (nonatomic, retain) NSMutableArray *momentumDataBytes;
@property (nonatomic, retain) NSArray *momentumVectors;
@property (nonatomic, retain) NSData *sourceBNNSDesc;
@property (nonatomic, retain) NSArray *velocityVectors;

+ (id)optimizerDeviceData;

- (void).cxx_destruct;
- (id)centerWeightVectors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)gpuOps;
- (id)gradientBNNSDesc;
- (id)init;
- (id)momentumData;
- (id)momentumDataBytes;
- (id)momentumVectors;
- (void)setCenterWeightVectors:(id)arg1;
- (void)setGpuOps:(id)arg1;
- (void)setGradientBNNSDesc:(id)arg1;
- (void)setMomentumData:(id)arg1;
- (void)setMomentumDataBytes:(id)arg1;
- (void)setMomentumVectors:(id)arg1;
- (void)setSourceBNNSDesc:(id)arg1;
- (void)setVelocityVectors:(id)arg1;
- (id)sourceBNNSDesc;
- (id)velocityVectors;

@end
