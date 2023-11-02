
@interface MLCTransposeLayer : MLCLayer {
    NSArray * _dimensions;
    NSArray * _shape;
}

@property (nonatomic, readonly, copy) NSArray *dimensions;
@property (nonatomic, readonly) NSArray *shape;

// Image: /System/Library/Frameworks/MLCompute.framework/MLCompute

+ (id)layerWithDimensions:(id)arg1;
+ (bool)supportsDataType:(int)arg1 onDevice:(id)arg2;

- (void).cxx_destruct;
- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (id)dimensions;
- (id)initWithDimensions:(id)arg1;
- (bool)isStaticBatchSize;
- (bool)isSupportedShapeForTensorSources:(id)arg1;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2;
- (unsigned long long)resultSizeFromSourceSizes:(id)arg1 dimension:(unsigned long long)arg2;
- (id)resultTensorFromSources:(id)arg1;
- (id)shape;
- (id)summarizedDOTDescription;

// Image: /System/Library/Frameworks/CoreML.framework/CoreML

+ (id)transposeLayer:(const void*)arg1 error:(id*)arg2;

@end
