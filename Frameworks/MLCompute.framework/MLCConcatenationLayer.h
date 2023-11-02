
@interface MLCConcatenationLayer : MLCLayer {
    unsigned long long  _dimension;
}

@property (nonatomic, readonly) unsigned long long dimension;

// Image: /System/Library/Frameworks/MLCompute.framework/MLCompute

+ (id)layer;
+ (id)layerWithDimension:(unsigned long long)arg1;
+ (bool)supportsDataType:(int)arg1 onDevice:(id)arg2;

- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)dimension;
- (id)initWithDimension:(unsigned long long)arg1;
- (bool)isStaticBatchSize;
- (bool)isSupportedShapeForTensorSources:(id)arg1;
- (id)resultTensorFromSources:(id)arg1;
- (id)summarizedDOTDescription;

// Image: /System/Library/Frameworks/CoreML.framework/CoreML

+ (id)concatNDLayer:(const void*)arg1 error:(id*)arg2;

@end
