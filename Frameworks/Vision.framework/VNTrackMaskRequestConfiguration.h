
@interface VNTrackMaskRequestConfiguration : VNStatefulRequestConfiguration {
    bool  _generateCropRect;
}

@property (nonatomic) bool generateCropRect;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)generateCropRect;
- (id)initWithRequestClass:(Class)arg1;
- (void)setGenerateCropRect:(bool)arg1;

@end
