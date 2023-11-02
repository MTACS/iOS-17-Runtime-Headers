
@interface AVTPresetDependency : NSObject {
    long long  _category;
    NSString * _imageVariant;
    NSString * _materialVariant;
    NSString * _morphVariant;
    float  _morphVariantIntensity;
    AVTPreset * _preset;
    NSDictionary * _visibilityRules;
}

- (void).cxx_destruct;
- (id)description;

@end
