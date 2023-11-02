
@interface VNTrackOpticalFlowRequestConfiguration : VNStatefulRequestConfiguration {
    unsigned long long  _computationAccuracy;
    bool  _keepNetworkOutput;
    unsigned int  _outputPixelFormat;
}

@property (nonatomic) unsigned long long computationAccuracy;
@property (nonatomic) bool keepNetworkOutput;
@property (nonatomic) unsigned int outputPixelFormat;

- (unsigned long long)computationAccuracy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRequestClass:(Class)arg1;
- (bool)keepNetworkOutput;
- (unsigned int)outputPixelFormat;
- (void)setComputationAccuracy:(unsigned long long)arg1;
- (void)setKeepNetworkOutput:(bool)arg1;
- (void)setOutputPixelFormat:(unsigned int)arg1;

@end
