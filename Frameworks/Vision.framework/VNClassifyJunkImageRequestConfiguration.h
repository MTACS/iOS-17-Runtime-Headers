
@interface VNClassifyJunkImageRequestConfiguration : VNImageBasedRequestConfiguration {
    unsigned long long  _imageCropAndScaleOption;
}

@property (nonatomic) unsigned long long imageCropAndScaleOption;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)imageCropAndScaleOption;
- (id)initWithRequestClass:(Class)arg1;
- (void)setImageCropAndScaleOption:(unsigned long long)arg1;

@end
