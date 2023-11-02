
@interface VCPFlowFeatureExtractor : VCPEspressoModel {
    NSArray * _featureBlobNames;
    NSArray * _featureChannels;
    NSString * _inputBlobName;
    int  _numLevels;
}

- (void).cxx_destruct;
- (int)bindWithBuffers:(struct __CVBuffer { }*)arg1 imgFeature:(struct { struct { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1[7]; struct __CVBuffer {} *x2[7]; }*)arg2;
- (int)extractFeatureFromImage:(struct __CVBuffer { }*)arg1 toFeature:(struct { struct { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1[7]; struct __CVBuffer {} *x2[7]; }*)arg2 callback:(id /* block */)arg3;
- (id)initModule:(int)arg1 config:(id)arg2 cancel:(id /* block */)arg3;
- (int)setFeatureShape:(struct { int x1; int x2; int x3; }*)arg1 height:(int)arg2 width:(int)arg3 level:(int)arg4;

@end
