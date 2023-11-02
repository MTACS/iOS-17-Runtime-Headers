
@interface AVTCoreModelColorVariation : NSObject {
    AVTCoreModelColor * _color;
    AVTColorPreset * _colorPreset;
}

@property (nonatomic, readonly) AVTCoreModelColor *color;
@property (nonatomic, readonly) AVTColorPreset *colorPreset;

- (void).cxx_destruct;
- (id)color;
- (id)colorPreset;
- (id)description;
- (unsigned long long)hash;
- (id)initWithColor:(id)arg1 colorPreset:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
