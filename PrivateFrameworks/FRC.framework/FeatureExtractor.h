
@interface FeatureExtractor : EspressoModel {
    bool  _baseStage;
    NSString * _espresso_file;
    const char * _inputBlob;
    unsigned long long  _numLevels;
    const char ** _outputBlobs;
    unsigned long long  _outputChannels;
}

@property (nonatomic) bool baseStage;
@property unsigned long long outputChannels;

+ (unsigned long long)numLevels;

- (void).cxx_destruct;
- (bool)baseStage;
- (bool)extractFeaturesFromImage:(struct __CVBuffer { }*)arg1 toFeatures:(struct { int x1; struct __CVBuffer {} *x2[6]; struct { unsigned long long x_3_1_1; unsigned long long x_3_1_2; unsigned long long x_3_1_3; } x3[6]; struct __CVBuffer {} *x4; }*)arg2 callback:(id /* block */)arg3;
- (void)getOutputTensorSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg1 level:(unsigned int)arg2;
- (id)initWithMode:(long long)arg1;
- (unsigned long long)outputChannels;
- (void)setBaseStage:(bool)arg1;
- (void)setOutputChannels:(unsigned long long)arg1;
- (void)setupNetworkModel;

@end
