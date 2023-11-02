
@interface MLCMultiGPUDeviceOps : MLCGPUDeviceOps {
    NSMutableArray * _allReducedGradientMatrices;
    NSArray * _localGradientMatrices;
    NSArray * _matrixSumKernels;
    int  _multiGPUReduction;
    NSArray * _receivedGradientMatrices;
    NSArray * _remoteGradientBuffers;
    NSMutableArray * _rnnTrainableWeightGradients;
}

@property (nonatomic, retain) NSMutableArray *allReducedGradientMatrices;
@property (nonatomic, retain) NSArray *localGradientMatrices;
@property (nonatomic, retain) NSArray *matrixSumKernels;
@property (nonatomic) int multiGPUReduction;
@property (nonatomic, retain) NSArray *receivedGradientMatrices;
@property (nonatomic, retain) NSArray *remoteGradientBuffers;
@property (nonatomic, retain) NSMutableArray *rnnTrainableWeightGradients;

+ (id)multiGPUDeviceOpsWithGPUDeviceOps:(id)arg1;

- (void).cxx_destruct;
- (id)allReducedGradientMatrices;
- (id)initWithGPUDevicOps:(id)arg1;
- (id)localGradientMatrices;
- (id)matrixSumKernels;
- (int)multiGPUReduction;
- (id)receivedGradientMatrices;
- (id)remoteGradientBuffers;
- (id)rnnTrainableWeightGradients;
- (void)setAllReducedGradientMatrices:(id)arg1;
- (void)setLocalGradientMatrices:(id)arg1;
- (void)setMatrixSumKernels:(id)arg1;
- (void)setMultiGPUReduction:(int)arg1;
- (void)setReceivedGradientMatrices:(id)arg1;
- (void)setRemoteGradientBuffers:(id)arg1;
- (void)setRnnTrainableWeightGradients:(id)arg1;

@end
