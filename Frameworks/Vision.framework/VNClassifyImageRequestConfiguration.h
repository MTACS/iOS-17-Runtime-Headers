
@interface VNClassifyImageRequestConfiguration : VNImageBasedRequestConfiguration {
    VNClassificationCustomHierarchy * _customHierarchy;
    unsigned long long  _imageCropAndScaleOption;
    unsigned long long  _maximumHierarchicalObservations;
    unsigned long long  _maximumLeafObservations;
}

@property (nonatomic, retain) VNClassificationCustomHierarchy *customHierarchy;
@property (nonatomic) unsigned long long imageCropAndScaleOption;
@property (nonatomic) unsigned long long maximumHierarchicalObservations;
@property (nonatomic) unsigned long long maximumLeafObservations;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customHierarchy;
- (unsigned long long)imageCropAndScaleOption;
- (id)initWithRequestClass:(Class)arg1;
- (unsigned long long)maximumHierarchicalObservations;
- (unsigned long long)maximumLeafObservations;
- (void)setCustomHierarchy:(id)arg1;
- (void)setImageCropAndScaleOption:(unsigned long long)arg1;
- (void)setMaximumHierarchicalObservations:(unsigned long long)arg1;
- (void)setMaximumLeafObservations:(unsigned long long)arg1;

@end
