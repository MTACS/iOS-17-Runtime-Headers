
@interface MLCMatMulGPUDeviceOps : MLCGPUDeviceOps {
    NSArray * _broadcastingFlags;
    NSMutableArray * _forwardMatricesOrNDArrays;
    NSArray * _gradientLeftRightMatrixSelectionFlags;
    NSMutableArray * _gradientMatricesOrNDArrays;
    id  _matmulKernel;
    NSMutableArray * _matrixDescs;
    id  _reduceSumKernel;
    NSMutableArray * _reductionShapes;
    NSArray * _shapes;
    NSArray * _transposeLeft;
    NSArray * _transposeRight;
}

@property (nonatomic, retain) NSArray *broadcastingFlags;
@property (nonatomic, retain) NSMutableArray *forwardMatricesOrNDArrays;
@property (nonatomic, retain) NSArray *gradientLeftRightMatrixSelectionFlags;
@property (nonatomic, retain) NSMutableArray *gradientMatricesOrNDArrays;
@property (nonatomic, retain) id matmulKernel;
@property (nonatomic, retain) NSMutableArray *matrixDescs;
@property (nonatomic, retain) id reduceSumKernel;
@property (nonatomic, retain) NSMutableArray *reductionShapes;
@property (nonatomic, retain) NSArray *shapes;
@property (nonatomic, retain) NSArray *transposeLeft;
@property (nonatomic, retain) NSArray *transposeRight;

+ (id)deviceOps;
+ (id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 secondaryGradientKernel:(id)arg3;

- (void).cxx_destruct;
- (id)broadcastingFlags;
- (id)forwardMatricesOrNDArrays;
- (id)gradientLeftRightMatrixSelectionFlags;
- (id)gradientMatricesOrNDArrays;
- (id)initWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 secondaryGradientKernel:(id)arg3;
- (id)matmulKernel;
- (id)matrixDescs;
- (id)reduceSumKernel;
- (id)reductionShapes;
- (void)setBroadcastingFlags:(id)arg1;
- (void)setForwardMatricesOrNDArrays:(id)arg1;
- (void)setGradientLeftRightMatrixSelectionFlags:(id)arg1;
- (void)setGradientMatricesOrNDArrays:(id)arg1;
- (void)setMatmulKernel:(id)arg1;
- (void)setMatrixDescs:(id)arg1;
- (void)setReduceSumKernel:(id)arg1;
- (void)setReductionShapes:(id)arg1;
- (void)setShapes:(id)arg1;
- (void)setTransposeLeft:(id)arg1;
- (void)setTransposeRight:(id)arg1;
- (id)shapes;
- (id)transposeLeft;
- (id)transposeRight;

@end
