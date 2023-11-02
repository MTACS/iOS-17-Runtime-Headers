
@interface MLCActivationLayer : MLCLayer {
    MLCActivationDescriptor * _descriptor;
}

@property (nonatomic, readonly, copy) MLCActivationDescriptor *descriptor;

// Image: /System/Library/Frameworks/MLCompute.framework/MLCompute

+ (id)absoluteLayer;
+ (id)celuLayer;
+ (id)celuLayerWithA:(float)arg1;
+ (id)clampLayerWithMinValue:(float)arg1 maxValue:(float)arg2;
+ (id)eluLayer;
+ (id)eluLayerWithA:(float)arg1;
+ (id)geluLayer;
+ (id)hardShrinkLayer;
+ (id)hardShrinkLayerWithA:(float)arg1;
+ (id)hardSigmoidLayer;
+ (id)hardSwishLayer;
+ (id)layerWithDescriptor:(id)arg1;
+ (id)leakyReLULayer;
+ (id)leakyReLULayerWithNegativeSlope:(float)arg1;
+ (id)linearLayerWithScale:(float)arg1 bias:(float)arg2;
+ (id)logSigmoidLayer;
+ (id)relu6Layer;
+ (id)reluLayer;
+ (id)relunLayerWithA:(float)arg1 b:(float)arg2;
+ (id)seluLayer;
+ (id)sigmoidLayer;
+ (id)softPlusLayer;
+ (id)softPlusLayerWithBeta:(float)arg1;
+ (id)softShrinkLayer;
+ (id)softShrinkLayerWithA:(float)arg1;
+ (id)softSignLayer;
+ (id)tanhLayer;
+ (id)tanhShrinkLayer;
+ (id)thresholdLayerWithThreshold:(float)arg1 replacement:(float)arg2;

- (void).cxx_destruct;
- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (id)descriptor;
- (id)initWithDescriptor:(id)arg1;
- (bool)isSupportedShapeForTensorSources:(id)arg1;
- (id)resultTensorFromSources:(id)arg1;
- (id)summarizedDOTDescription;

// Image: /System/Library/Frameworks/CoreML.framework/CoreML

+ (id)activationLayer:(const void*)arg1;
+ (id)clampedReluLayer:(const void*)arg1 error:(id*)arg2;
+ (id)leakyRelu;
+ (id)relu;
+ (id)sigmoid;

@end
