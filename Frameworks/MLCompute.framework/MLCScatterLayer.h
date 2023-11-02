
@interface MLCScatterLayer : MLCLayer {
    unsigned long long  _dimension;
    int  _reductionType;
}

@property (nonatomic, readonly) unsigned long long dimension;
@property (nonatomic, readonly) int reductionType;

+ (id)layerWithDimension:(unsigned long long)arg1 reductionType:(int)arg2;

- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (unsigned long long)dimension;
- (id)initWithDimension:(unsigned long long)arg1 reductionType:(int)arg2;
- (bool)isSupportedShapeForTensorSources:(id)arg1;
- (int)reductionType;
- (id)resultTensorFromSources:(id)arg1;
- (id)summarizedDOTDescription;

@end
