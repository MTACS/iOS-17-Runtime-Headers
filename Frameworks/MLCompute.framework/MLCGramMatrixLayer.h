
@interface MLCGramMatrixLayer : MLCLayer {
    float  _scale;
}

@property (nonatomic, readonly) float scale;

+ (id)layerWithScale:(float)arg1;

- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (id)initWithScaleFactor:(float)arg1;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2;
- (unsigned long long)resultSizeFromSourceSizes:(id)arg1 dimension:(unsigned long long)arg2;
- (id)resultTensorFromSources:(id)arg1;
- (float)scale;
- (id)summarizedDOTDescription;

@end
