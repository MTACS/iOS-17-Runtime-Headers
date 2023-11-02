
@interface MLCReshapeLayer : MLCLayer {
    NSArray * _shape;
}

@property (nonatomic, readonly, copy) NSArray *shape;

// Image: /System/Library/Frameworks/MLCompute.framework/MLCompute

+ (id)layerWithShape:(id)arg1;
+ (bool)supportsDataType:(int)arg1 onDevice:(id)arg2;

- (void).cxx_destruct;
- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (unsigned long long)deviceMemorySizeForForward;
- (unsigned long long)deviceMemorySizeWithOptimizer:(id)arg1 device:(id)arg2;
- (id)initWithShape:(id)arg1;
- (bool)isStaticBatchSize;
- (bool)isSupportedShapeForTensorSources:(id)arg1;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2;
- (id)resultTensorFromSources:(id)arg1;
- (id)shape;
- (id)summarizedDOTDescription;

// Image: /System/Library/Frameworks/CoreML.framework/CoreML

+ (id)flattenLayerWithTensor:(id)arg1 flattenParams:(const void*)arg2 batchSize:(unsigned long long)arg3 error:(id*)arg4;
+ (id)reshapeLayer:(const void*)arg1 batchSize:(unsigned long long)arg2 error:(id*)arg3;
+ (id)reshapeStaticLayer:(const void*)arg1 batchSize:(unsigned long long)arg2 error:(id*)arg3;

@end
