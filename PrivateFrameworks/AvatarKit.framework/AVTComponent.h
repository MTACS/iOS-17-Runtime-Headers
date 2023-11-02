
@interface AVTComponent : NSObject {
    NSArray * _assets;
    float  _bodyPoseVariantIntensity;
    NSString * _imageVariant;
    NSString * _materialVariant;
    AVTMaterial * _materials;
    bool  _mirrored;
    NSString * _morphVariant;
    float  _morphVariantIntensity;
    float  _textureAssetPresence;
    long long  _type;
}

@property (readonly) NSArray *assets;
@property (nonatomic, readonly) float bodyPoseVariantIntensity;
@property (nonatomic, readonly) NSString *imageVariant;
@property (nonatomic, readonly) NSString *materialVariant;
@property (nonatomic, readonly) bool mirrored;
@property (nonatomic, readonly) NSString *morphVariant;
@property (nonatomic, readonly) float morphVariantIntensity;
@property (nonatomic, readonly) float textureAssetPresence;
@property (readonly) long long type;

- (void).cxx_destruct;
- (id)assets;
- (float)bodyPoseVariantIntensity;
- (id)description;
- (id)imageVariant;
- (id)initWithType:(long long)arg1 assets:(id)arg2 morphVariant:(id)arg3 imageVariant:(id)arg4 materialVariant:(id)arg5 morphVariantIntensity:(float)arg6 bodyPoseVariantIntensity:(float)arg7 textureAssetPresence:(float)arg8 mirrored:(bool)arg9;
- (id)materialAtIndex:(unsigned long long)arg1;
- (id)materialVariant;
- (bool)mirrored;
- (id)morphVariant;
- (float)morphVariantIntensity;
- (void)setMaterial:(id)arg1 atIndex:(unsigned long long)arg2;
- (float)textureAssetPresence;
- (long long)type;

@end
