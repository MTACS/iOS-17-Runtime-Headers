
@interface PISmartColorAdjustmentController : PIAdjustmentController {
    struct { 
        double sat; 
        double contrast; 
        double cast; 
    }  _smartSettings;
    struct { 
        double p75; 
        double p98; 
        double autoValue; 
        double g98; 
    }  _stats;
}

@property (nonatomic) double inputColor;
@property (nonatomic) double offsetCast;
@property (nonatomic) double offsetContrast;
@property (nonatomic) double offsetSaturation;
@property (nonatomic, copy) NSDictionary *statistics;

// Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging

+ (id)attributeCastKey;
+ (id)attributeContrastKey;
+ (id)attributeVibrancyKey;
+ (id)inputCastKey;
+ (id)inputColorKey;
+ (id)inputContrastKey;
+ (id)inputSaturationKey;
+ (id)offsetCastKey;
+ (id)offsetContrastKey;
+ (id)offsetSaturationKey;
+ (id)statisticsKey;

- (void)_updateSettingsWithInputColor:(double)arg1;
- (id)computedSettings;
- (id)initWithAdjustment:(id)arg1;
- (double)inputCast;
- (double)inputColor;
- (double)inputContrast;
- (double)inputSaturation;
- (double)offsetCast;
- (double)offsetContrast;
- (double)offsetSaturation;
- (id)pasteKeysForMediaType:(long long)arg1;
- (void)setInputCast:(double)arg1;
- (void)setInputColor:(double)arg1;
- (void)setInputContrast:(double)arg1;
- (void)setInputSaturation:(double)arg1;
- (void)setOffsetCast:(double)arg1;
- (void)setOffsetContrast:(double)arg1;
- (void)setOffsetSaturation:(double)arg1;
- (void)setStatistics:(id)arg1;
- (id)statistics;

// Image: /System/Library/PrivateFrameworks/PhotosUIEdit.framework/PhotosUIEdit

- (id)analyticsKeysBlocklist;
- (id)analyticsPayload;

@end
