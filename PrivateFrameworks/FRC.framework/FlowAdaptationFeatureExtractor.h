
@interface FlowAdaptationFeatureExtractor : FeatureExtractor

- (bool)extractFeaturesFromImage:(struct __CVBuffer { }*)arg1 toFeatures:(struct { int x1; struct __CVBuffer {} *x2[6]; struct { unsigned long long x_3_1_1; unsigned long long x_3_1_2; unsigned long long x_3_1_3; } x3[6]; struct __CVBuffer {} *x4; }*)arg2 callback:(id /* block */)arg3;
- (void)getOutputTensorSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg1 level:(unsigned int)arg2;
- (id)initWithMode:(long long)arg1;
- (void)setupNetworkModel;

@end
