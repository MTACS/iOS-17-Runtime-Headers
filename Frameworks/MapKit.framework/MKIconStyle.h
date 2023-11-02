
@interface MKIconStyle : NSObject {
    UIColor * _backgroundColorDark;
    UIColor * _backgroundColorLight;
    UIImageAsset * _combinedImageAsset;
    bool  _isHybridMap;
    GEOFeatureStyleAttributes * _styleAttributes;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIImage *image;

- (void).cxx_destruct;
- (bool)_elevationForIcons;
- (void)_setColorAndImages;
- (id)backgroundColor;
- (id)iconForModifiers:(id)arg1;
- (id)image;
- (id)initWithStyleAttributes:(id)arg1 isHybridMap:(bool)arg2;
- (void)registerImage:(id)arg1 darkMode:(bool)arg2;

@end
