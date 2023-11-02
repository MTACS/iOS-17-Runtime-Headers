
@interface PIPortraitVideoAdjustmentController : PIAdjustmentController

@property (nonatomic, retain) NSNumber *aperture;
@property (nonatomic, retain) NSDictionary *cinematographyState;
@property (nonatomic) long long debugMode;
@property (nonatomic, copy) NSArray *disparityKeyframes;
@property (nonatomic) unsigned long long renderingVersionAtCapture;

- (id)_keyframesForKey:(id)arg1 class:(Class)arg2;
- (void)_setKeyframes:(id)arg1 forKey:(id)arg2;
- (id)aperture;
- (id)cinematographyState;
- (long long)debugMode;
- (id)disparityKeyframes;
- (id)pasteKeysForMediaType:(long long)arg1;
- (unsigned long long)renderingVersionAtCapture;
- (void)setAperture:(id)arg1;
- (void)setCinematographyState:(id)arg1;
- (void)setDebugMode:(long long)arg1;
- (void)setDisparityKeyframes:(id)arg1;
- (void)setRenderingVersionAtCapture:(unsigned long long)arg1;
- (void)trimToTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 usingScript:(id)arg2;
- (id)visualInputKeys;

@end
