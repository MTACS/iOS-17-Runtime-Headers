
@interface MLCGatherLayer : MLCLayer {
    unsigned long long  _dimension;
}

@property (nonatomic, readonly) unsigned long long dimension;

+ (id)layerWithDimension:(unsigned long long)arg1;

- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (unsigned long long)dimension;
- (id)initWithDimension:(unsigned long long)arg1;
- (bool)isSupportedShapeForTensorSources:(id)arg1;
- (id)resultTensorFromSources:(id)arg1;
- (id)summarizedDOTDescription;

@end
