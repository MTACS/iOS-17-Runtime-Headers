
@interface PVColorSpace : NSObject {
    int  _type;
}

@property (nonatomic, readonly) unsigned int jfx_getCVPixelFormatForDisplay;
@property (nonatomic, readonly) unsigned int jfx_getCVPixelFormatForExport;

// Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo

+ (id)extendedDisplayP3ColorSpace;
+ (id)extendedLinearSRGBColorSpace;
+ (id)extendedSRGBColorSpace;
+ (id)p3HLGGammaColorSpace;
+ (id)p3PQGammaColorSpace;
+ (id)p3d65GammaColorSpace;
+ (id)preferredDisplayColorSpace;
+ (id)preferredExportColorSpace;
+ (id)pvColorSpaceForCVPixelBuffer:(struct __CVBuffer { }*)arg1;
+ (id)pvColorSpaceFromCGColorSpace:(struct CGColorSpace { }*)arg1;
+ (id)rec2020GammaColorSpace;
+ (id)rec2020HLGColorSpace;
+ (id)rec2020LinearColorSpace;
+ (id)rec2020PQColorSpace;
+ (id)rec2100HLGColorSpace;
+ (id)rec2100PQColorSpace;
+ (id)rec601GammaColorSpace;
+ (id)rec601_1_1_6_GammaColorSpace;
+ (id)rec601_EBU_3213_GammaColorSpace;
+ (id)rec601_SMPTE_C_GammaColorSpace;
+ (id)rec709GammaColorSpace;
+ (id)rec709LinearColorSpace;
+ (id)sRGBColorSpace;

- (struct CGColorSpace { }*)cgColorSpace;
- (id)description;
- (unsigned long long)hash;
- (id)initWithType:(int)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCGColorSpace:(struct CGColorSpace { }*)arg1;
- (bool)isExtendedDisplayP3ColorSpace;
- (bool)isExtendedLinearSRGBColorSpace;
- (bool)isExtendedSRGBColorSpace;
- (bool)isHDRSpace;
- (bool)isP3HLGGammaColorSpace;
- (bool)isP3PQGammaColorSpace;
- (bool)isP3d65GammaColorSpace;
- (bool)isRec2020GammaColorSpace;
- (bool)isRec2020HLGColorSpace;
- (bool)isRec2020LinearColorSpace;
- (bool)isRec2020PQColorSpace;
- (bool)isRec2100HLGColorSpace;
- (bool)isRec2100PQColorSpace;
- (bool)isRec601GammaColorSpace;
- (bool)isRec601_1_1_6_GammaColorSpace;
- (bool)isRec601_EBU_3213_GammaColorSpace;
- (bool)isRec601_SMPTE_C_GammaColorSpace;
- (bool)isRec709GammaColorSpace;
- (bool)isRec709LinearColorSpace;
- (bool)isSRGBColorSpace;
- (bool)isWideGamutSpace;
- (id)name;
- (id)nclcTriplet;

// Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit

+ (bool)JFX_compareTriplets:(struct __CFString { }*)arg1 transferFunction:(struct __CFString { }*)arg2 matrix:(struct __CFString { }*)arg3 validNCLCTriplets:(id)arg4;
+ (bool)JFX_isP3D65:(struct __CFString { }*)arg1 transferFunction:(struct __CFString { }*)arg2 matrix:(struct __CFString { }*)arg3;
+ (bool)JFX_isP3HLG:(struct __CFString { }*)arg1 transferFunction:(struct __CFString { }*)arg2 matrix:(struct __CFString { }*)arg3;
+ (bool)JFX_isP3PQ:(struct __CFString { }*)arg1 transferFunction:(struct __CFString { }*)arg2 matrix:(struct __CFString { }*)arg3;
+ (bool)JFX_isRec2020Linear:(struct __CFString { }*)arg1 transferFunction:(struct __CFString { }*)arg2 matrix:(struct __CFString { }*)arg3;
+ (bool)JFX_isRec2100HLG:(struct __CFString { }*)arg1 transferFunction:(struct __CFString { }*)arg2 matrix:(struct __CFString { }*)arg3;
+ (bool)JFX_isRec2100PQ:(struct __CFString { }*)arg1 transferFunction:(struct __CFString { }*)arg2 matrix:(struct __CFString { }*)arg3;
+ (bool)JFX_isRec601Gamma:(struct __CFString { }*)arg1 transferFunction:(struct __CFString { }*)arg2 matrix:(struct __CFString { }*)arg3;
+ (bool)JFX_isRec709Gamma:(struct __CFString { }*)arg1 transferFunction:(struct __CFString { }*)arg2 matrix:(struct __CFString { }*)arg3;
+ (bool)JFX_isRec709Linear:(struct __CFString { }*)arg1 transferFunction:(struct __CFString { }*)arg2 matrix:(struct __CFString { }*)arg3;
+ (bool)JFX_isSRGBColorSpace:(struct __CFString { }*)arg1 transferFunction:(struct __CFString { }*)arg2 matrix:(struct __CFString { }*)arg3;
+ (id)JFX_nclcDictionaryForColorSpace:(id)arg1;
+ (id)jfx_compareAndChooseGreaterColorSpace:(id)arg1 right:(id)arg2;
+ (id)jfx_compareAndChooseLesserColorSpace:(id)arg1 right:(id)arg2;
+ (id)jfx_getColorSpaceFromCGColorSpace:(struct CGColorSpace { }*)arg1;
+ (id)jfx_getColorSpaceFromCaptureColorSpace:(long long)arg1;
+ (id)jfx_getColorSpaceFromColorPrimaries:(struct __CFString { }*)arg1 transferFunction:(struct __CFString { }*)arg2 matrix:(struct __CFString { }*)arg3;
+ (id)jfx_getColorSpaceFromImageBuffer:(id)arg1;
+ (id)jfx_getColorSpaceFromPixelBuffer:(struct __CVBuffer { }*)arg1;

- (void)jfx_attachColorSpaceToPixelBuffer:(struct __CVBuffer { }*)arg1;
- (unsigned int)jfx_getCVPixelFormatForDisplay;
- (unsigned int)jfx_getCVPixelFormatForExport;
- (id)jfx_videoExportColorSpace;

@end
