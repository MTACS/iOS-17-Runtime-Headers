
@interface VNCreateSceneprintRequestConfiguration : VNImageBasedRequestConfiguration {
    unsigned long long  _imageCropAndScaleOption;
    bool  _returnAllResults;
    bool  _useCenterTileOnly;
}

@property (nonatomic) unsigned long long imageCropAndScaleOption;
@property (nonatomic) bool returnAllResults;
@property (nonatomic) bool useCenterTileOnly;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)imageCropAndScaleOption;
- (id)initWithRequestClass:(Class)arg1;
- (bool)returnAllResults;
- (void)setImageCropAndScaleOption:(unsigned long long)arg1;
- (void)setReturnAllResults:(bool)arg1;
- (void)setUseCenterTileOnly:(bool)arg1;
- (bool)useCenterTileOnly;

@end
