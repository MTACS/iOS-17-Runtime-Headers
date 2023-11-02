
@interface MLCSoftmaxLayer : MLCLayer {
    unsigned long long  _dimension;
    int  _operation;
}

@property (nonatomic, readonly) unsigned long long dimension;
@property (nonatomic, readonly) int operation;

// Image: /System/Library/Frameworks/MLCompute.framework/MLCompute

+ (id)layerWithOperation:(int)arg1;
+ (id)layerWithOperation:(int)arg1 dimension:(unsigned long long)arg2;

- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (unsigned long long)dimension;
- (id)initWithSoftmaxOperation:(int)arg1 dimension:(unsigned long long)arg2;
- (bool)isSupportedShapeForTensorSources:(id)arg1;
- (int)operation;
- (id)resultTensorFromSources:(id)arg1;
- (id)summarizedDOTDescription;

// Image: /System/Library/Frameworks/CoreML.framework/CoreML

+ (id)softmax;

@end
