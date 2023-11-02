
@interface UIGraphicsImageRendererFormat : UIGraphicsRendererFormat {
    bool  _opaque;
    long long  _overrideBitsPerComponent;
    struct CGColorSpace { } * _overrideColorSpace;
    long long  _preferredRange;
    double  _scale;
}

@property (getter=_contextScale, nonatomic, readonly) double _contextScale;
@property (getter=_grayscale, setter=_setGrayscale:, nonatomic) bool _grayscale;
@property (getter=_overrideBitsPerComponent, setter=_setOverrideBitsPerComponent:, nonatomic) long long _overrideBitsPerComponent;
@property (getter=_overrideColorSpace, setter=_setOverrideColorSpace:, nonatomic) struct CGColorSpace { }*_overrideColorSpace;
@property (getter=_wantsAlphaMask, setter=_setWantsAlphaMask:, nonatomic) bool _wantsAlphaMask;
@property (nonatomic) bool opaque;
@property (nonatomic) long long preferredRange;
@property (nonatomic) bool prefersExtendedRange;
@property (nonatomic) double scale;
@property (nonatomic, readonly) bool supportsHighDynamicRange;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)defaultFormat;
+ (id)formatForTraitCollection:(id)arg1;
+ (id)preferredFormat;

- (double)_contextScale;
- (bool)_grayscale;
- (long long)_overrideBitsPerComponent;
- (struct CGColorSpace { }*)_overrideColorSpace;
- (void)_setGrayscale:(bool)arg1;
- (void)_setOverrideBitsPerComponent:(long long)arg1;
- (void)_setOverrideColorSpace:(struct CGColorSpace { }*)arg1;
- (void)_setWantsAlphaMask:(bool)arg1;
- (bool)_wantsAlphaMask;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (bool)opaque;
- (long long)preferredRange;
- (bool)prefersExtendedRange;
- (double)scale;
- (void)setOpaque:(bool)arg1;
- (void)setPreferredRange:(long long)arg1;
- (void)setPrefersExtendedRange:(bool)arg1;
- (void)setScale:(double)arg1;
- (bool)supportsHighDynamicRange;

// Image: /System/Library/PrivateFrameworks/SeymourMedia.framework/SeymourMedia

+ (bool)smu_canDecodeOnRenderThread;
+ (id)smu_formatForImage:(id)arg1;
+ (id)smu_preferredRendererFormat;

@end
