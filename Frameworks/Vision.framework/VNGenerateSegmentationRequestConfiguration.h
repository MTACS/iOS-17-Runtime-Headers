
@interface VNGenerateSegmentationRequestConfiguration : VNImageBasedRequestConfiguration {
    unsigned int  _outputPixelFormat;
}

@property (nonatomic) unsigned int outputPixelFormat;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRequestClass:(Class)arg1;
- (unsigned int)outputPixelFormat;
- (void)setOutputPixelFormat:(unsigned int)arg1;

@end
