
@interface VNGenerateOpticalFlowRequestConfiguration : VNTargetedImageRequestConfiguration {
    unsigned long long  _computationAccuracy;
    bool  _keepNetworkOutput;
    unsigned int  _outputPixelFormat;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end
