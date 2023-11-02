
@interface PIWhiteBalanceAdjustmentController : PIAdjustmentController

@property (nonatomic) long long colorType;
@property (nonatomic) double faceI;
@property (nonatomic) double faceQ;
@property (nonatomic) double faceStrength;
@property (nonatomic) double faceWarmth;
@property (nonatomic) double grayI;
@property (nonatomic) double grayQ;
@property (nonatomic) double grayStrength;
@property (nonatomic) double grayWarmth;
@property (nonatomic) double grayY;
@property (nonatomic) double temperature;
@property (nonatomic) double tint;
@property (nonatomic) bool warmFace;
@property (nonatomic) double warmTemp;
@property (nonatomic) double warmTint;

// Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging

+ (long long)colorTypeForString:(id)arg1;
+ (id)colorTypeKey;
+ (id)faceIKey;
+ (id)faceQKey;
+ (id)faceStrengthKey;
+ (id)faceWarmthKey;
+ (id)grayIKey;
+ (id)grayQKey;
+ (id)grayStrengthKey;
+ (id)grayWarmthKey;
+ (id)grayYKey;
+ (id)stringForColorType:(long long)arg1;
+ (id)temperatureKey;
+ (id)tintKey;
+ (id)warmFaceKey;
+ (id)warmTempKey;
+ (id)warmTintKey;

- (bool)canHaveAuto;
- (long long)colorType;
- (double)faceI;
- (double)faceQ;
- (double)faceStrength;
- (double)faceWarmth;
- (double)grayI;
- (double)grayQ;
- (double)grayStrength;
- (double)grayWarmth;
- (double)grayY;
- (void)setColorType:(long long)arg1;
- (void)setFaceI:(double)arg1;
- (void)setFaceQ:(double)arg1;
- (void)setFaceStrength:(double)arg1;
- (void)setFaceWarmth:(double)arg1;
- (void)setGrayI:(double)arg1;
- (void)setGrayQ:(double)arg1;
- (void)setGrayStrength:(double)arg1;
- (void)setGrayWarmth:(double)arg1;
- (void)setGrayY:(double)arg1;
- (void)setTemperature:(double)arg1;
- (void)setTint:(double)arg1;
- (void)setWarmFace:(bool)arg1;
- (void)setWarmTemp:(double)arg1;
- (void)setWarmTint:(double)arg1;
- (double)temperature;
- (double)tint;
- (bool)warmFace;
- (double)warmTemp;
- (double)warmTint;

// Image: /System/Library/PrivateFrameworks/PhotosUIEdit.framework/PhotosUIEdit

- (id)analyticsKeysBlocklist;
- (id)analyticsPayload;

@end
