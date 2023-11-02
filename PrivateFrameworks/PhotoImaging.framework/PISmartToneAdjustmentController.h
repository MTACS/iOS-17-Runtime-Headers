
@interface PISmartToneAdjustmentController : PIAdjustmentController {
    struct { 
        double exposure; 
        double contrast; 
        double brightness; 
        double shadows; 
        double highlights; 
        double black; 
        double rawHighlights; 
        double localLight; 
    }  _smartSettings;
}

@property (nonatomic) double inputLight;
@property (nonatomic, readonly) double inputLightDefault;
@property (nonatomic) double offsetBlack;
@property (nonatomic) double offsetBrightness;
@property (nonatomic) double offsetContrast;
@property (nonatomic) double offsetExposure;
@property (nonatomic) double offsetHighlights;
@property (nonatomic) double offsetLocalLight;
@property (nonatomic) double offsetShadows;
@property (nonatomic, copy) NSDictionary *statistics;

// Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging

+ (id)attributeBlackPointKey;
+ (id)attributeBrightnessKey;
+ (id)attributeContrastKey;
+ (id)attributeExposureKey;
+ (id)attributeHighlightsKey;
+ (id)attributeLightMapHeightKey;
+ (id)attributeLightMapKey;
+ (id)attributeLightMapWidthKey;
+ (id)attributeLocalLightKey;
+ (id)attributeShadowsKey;
+ (id)inputBlackKey;
+ (id)inputBrightnessKey;
+ (id)inputContrastKey;
+ (id)inputExposureKey;
+ (id)inputHighlightsKey;
+ (id)inputLightKey;
+ (id)inputLocalLightKey;
+ (id)inputRawHighlightsKey;
+ (id)inputShadowsKey;
+ (id)offsetBlackKey;
+ (id)offsetBrightnessKey;
+ (id)offsetContrastKey;
+ (id)offsetExposureKey;
+ (id)offsetHighlightsKey;
+ (id)offsetLocalLightKey;
+ (id)offsetShadowsKey;
+ (id)statisticsKey;

- (void)_updateSettingsWithInputLight:(double)arg1;
- (id)autoKeysForPaste;
- (id)computedSettings;
- (id)initWithAdjustment:(id)arg1;
- (double)inputBlack;
- (double)inputBrightness;
- (double)inputContrast;
- (double)inputExposure;
- (double)inputHighlights;
- (double)inputLight;
- (double)inputLightDefault;
- (double)inputLocalLight;
- (double)inputRawHighlights;
- (double)inputShadows;
- (double)offsetBlack;
- (double)offsetBrightness;
- (double)offsetContrast;
- (double)offsetExposure;
- (double)offsetHighlights;
- (double)offsetLocalLight;
- (double)offsetShadows;
- (id)pasteKeysForMediaType:(long long)arg1;
- (void)setInputBlack:(double)arg1;
- (void)setInputBrightness:(double)arg1;
- (void)setInputContrast:(double)arg1;
- (void)setInputExposure:(double)arg1;
- (void)setInputHighlights:(double)arg1;
- (void)setInputLight:(double)arg1;
- (void)setInputLocalLight:(double)arg1;
- (void)setInputRawHighlights:(double)arg1;
- (void)setInputShadows:(double)arg1;
- (void)setOffsetBlack:(double)arg1;
- (void)setOffsetBrightness:(double)arg1;
- (void)setOffsetContrast:(double)arg1;
- (void)setOffsetExposure:(double)arg1;
- (void)setOffsetHighlights:(double)arg1;
- (void)setOffsetLocalLight:(double)arg1;
- (void)setOffsetShadows:(double)arg1;
- (void)setStatistics:(id)arg1;
- (id)statistics;

// Image: /System/Library/PrivateFrameworks/PhotosUIEdit.framework/PhotosUIEdit

- (id)analyticsKeysBlocklist;
- (id)analyticsPayload;

@end
