
@interface MLCComparisonLayer : MLCLayer {
    int  _operation;
}

@property (nonatomic, readonly) int operation;

+ (id)layerWithOperation:(int)arg1;
+ (bool)supportsDataType:(int)arg1 onDevice:(id)arg2;

- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (id)initWithOperation:(int)arg1;
- (bool)isSupportedShapeForTensorSources:(id)arg1;
- (int)operation;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2;
- (id)resultTensorFromSources:(id)arg1;
- (id)summarizedDOTDescription;

@end
