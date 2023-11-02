
@interface MLCReductionLayer : MLCLayer {
    NSArray * _dimensions;
    int  _reductionType;
}

@property (nonatomic, readonly) unsigned long long dimension;
@property (nonatomic, readonly) NSArray *dimensions;
@property (nonatomic, readonly) int reductionType;

+ (id)layerWithReductionType:(int)arg1 dimension:(unsigned long long)arg2;
+ (id)layerWithReductionType:(int)arg1 dimensions:(id)arg2;
+ (bool)supportsDataType:(int)arg1 onDevice:(id)arg2;

- (void).cxx_destruct;
- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (unsigned long long)dimension;
- (id)dimensions;
- (id)initWithReduceType:(int)arg1 dimensions:(id)arg2;
- (bool)isSupportedShapeForTensorSources:(id)arg1;
- (int)reductionType;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2;
- (id)resultTensorFromSources:(id)arg1;
- (id)summarizedDOTDescription;

@end
