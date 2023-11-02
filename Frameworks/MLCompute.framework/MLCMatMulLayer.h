
@interface MLCMatMulLayer : MLCLayer {
    MLCMatMulDescriptor * _descriptor;
}

@property (nonatomic, readonly, copy) MLCMatMulDescriptor *descriptor;

// Image: /System/Library/Frameworks/MLCompute.framework/MLCompute

+ (id)layerWithDescriptor:(id)arg1;

- (void).cxx_destruct;
- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (id)descriptor;
- (id)initWithDescriptor:(id)arg1;
- (bool)isSupportedShapeForTensorSources:(id)arg1;
- (id)resultTensorFromSources:(id)arg1;
- (id)summarizedDOTDescription;

// Image: /System/Library/Frameworks/CoreML.framework/CoreML

+ (id)matrixMultiplicationLayerUsingParameters:(const void*)arg1;

@end
