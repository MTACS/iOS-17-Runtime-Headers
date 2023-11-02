
@interface MLCDropoutLayer : MLCLayer {
    float  _rate;
    unsigned long long  _seed;
}

@property (nonatomic, readonly) float rate;
@property (nonatomic, readonly) unsigned long long seed;

+ (id)layerWithRate:(float)arg1 seed:(unsigned long long)arg2;

- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (id)initWithRate:(float)arg1 seed:(unsigned long long)arg2;
- (bool)isSupportedShapeForTensorSources:(id)arg1;
- (float)rate;
- (id)resultTensorFromSources:(id)arg1;
- (unsigned long long)seed;
- (id)summarizedDOTDescription;

@end
