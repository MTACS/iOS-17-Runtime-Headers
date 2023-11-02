
@interface MLCLossLayer : MLCLayer {
    MLCLossDescriptor * _descriptor;
    MLCTensor * _lossLabels;
    MLCTensor * _weights;
}

@property (nonatomic, readonly, copy) MLCLossDescriptor *descriptor;
@property (nonatomic, retain) MLCTensor *lossLabels;
@property (nonatomic, readonly, retain) MLCTensor *weights;

// Image: /System/Library/Frameworks/MLCompute.framework/MLCompute

+ (id)categoricalCrossEntropyLossWithReductionType:(int)arg1 labelSmoothing:(float)arg2 classCount:(unsigned long long)arg3 weight:(float)arg4;
+ (id)categoricalCrossEntropyLossWithReductionType:(int)arg1 labelSmoothing:(float)arg2 classCount:(unsigned long long)arg3 weights:(id)arg4;
+ (id)categoricalCrossEntropyLossWithReductionType:(int)arg1 weight:(float)arg2;
+ (id)categoricalCrossEntropyLossWithReductionType:(int)arg1 weights:(id)arg2;
+ (id)cosineDistanceLossWithReductionType:(int)arg1 weight:(float)arg2;
+ (id)cosineDistanceLossWithReductionType:(int)arg1 weights:(id)arg2;
+ (id)hingeLossWithReductionType:(int)arg1 weight:(float)arg2;
+ (id)hingeLossWithReductionType:(int)arg1 weights:(id)arg2;
+ (id)huberLossWithReductionType:(int)arg1 delta:(float)arg2 weight:(float)arg3;
+ (id)huberLossWithReductionType:(int)arg1 delta:(float)arg2 weights:(id)arg3;
+ (id)layerWithDescriptor:(id)arg1;
+ (id)layerWithDescriptor:(id)arg1 weights:(id)arg2;
+ (id)logLossWithReductionType:(int)arg1 epsilon:(float)arg2 weight:(float)arg3;
+ (id)logLossWithReductionType:(int)arg1 epsilon:(float)arg2 weights:(id)arg3;
+ (id)meanAbsoluteErrorLossWithReductionType:(int)arg1 weight:(float)arg2;
+ (id)meanAbsoluteErrorLossWithReductionType:(int)arg1 weights:(id)arg2;
+ (id)meanSquaredErrorLossWithReductionType:(int)arg1 weight:(float)arg2;
+ (id)meanSquaredErrorLossWithReductionType:(int)arg1 weights:(id)arg2;
+ (id)sigmoidCrossEntropyLossWithReductionType:(int)arg1 labelSmoothing:(float)arg2 weight:(float)arg3;
+ (id)sigmoidCrossEntropyLossWithReductionType:(int)arg1 labelSmoothing:(float)arg2 weights:(id)arg3;
+ (id)softmaxCrossEntropyLossWithReductionType:(int)arg1 labelSmoothing:(float)arg2 classCount:(unsigned long long)arg3 weight:(float)arg4;
+ (id)softmaxCrossEntropyLossWithReductionType:(int)arg1 labelSmoothing:(float)arg2 classCount:(unsigned long long)arg3 weights:(id)arg4;

- (void).cxx_destruct;
- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (id)descriptor;
- (id)initWithDescriptor:(id)arg1 weights:(id)arg2;
- (bool)isSupportedShapeForTensorSources:(id)arg1;
- (void)linkAssociatedTensors;
- (id)lossLabels;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2;
- (id)resultTensorFromSources:(id)arg1;
- (void)setLossLabels:(id)arg1;
- (id)summarizedDOTDescription;
- (void)unlinkAssociatedTensors;
- (id)weights;

// Image: /System/Library/Frameworks/CoreML.framework/CoreML

+ (id)categoricalCrossEntropyWithLossLayerParams:(const void*)arg1 numberOfClasses:(unsigned long long)arg2;
+ (id)meanSquaredErrorWithLossLayerParams:(const void*)arg1;

@end
