
@interface VNCoreMLRequestConfiguration : VNImageBasedRequestConfiguration {
    unsigned long long  _imageCropAndScaleOption;
    <NSObject><NSCopying> * _modelCachingIdentifier;
}

@property (nonatomic) unsigned long long imageCropAndScaleOption;
@property (nonatomic, copy) <NSObject><NSCopying> *modelCachingIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)imageCropAndScaleOption;
- (id)initWithRequestClass:(Class)arg1;
- (id)modelCachingIdentifier;
- (void)setImageCropAndScaleOption:(unsigned long long)arg1;
- (void)setModelCachingIdentifier:(id)arg1;
- (void)updateWithPropertiesOfModel:(id)arg1;

@end
