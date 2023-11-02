
@interface MRUContinuousSliderView : CCUIContinuousSliderView {
    UIImageSymbolConfiguration * _imageSymbolConfiguration;
    MRUOutputDeviceAsset * _outputDeviceAsset;
    double  _referenceGlyphScale;
}

@property (nonatomic, retain) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (nonatomic, readonly) UIView *materialView;
@property (nonatomic, readonly) MRUOutputDeviceAsset *outputDeviceAsset;
@property (nonatomic) double referenceGlyphScale;

- (void).cxx_destruct;
- (id)imageSymbolConfiguration;
- (id)materialView;
- (id)outputDeviceAsset;
- (double)referenceGlyphScale;
- (void)setGlyphScale:(double)arg1;
- (void)setImageSymbolConfiguration:(id)arg1;
- (void)setOutputDeviceAsset:(id)arg1 state:(id)arg2 animated:(bool)arg3;
- (void)setReferenceGlyphScale:(double)arg1;

@end
