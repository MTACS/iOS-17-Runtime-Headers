
@interface PIDepthAdjustmentController : PIAdjustmentController

@property (nonatomic) double aperture;
@property (nonatomic, copy) NSDictionary *depthInfo;
@property (nonatomic, copy) NSDictionary *focusRect;
@property (nonatomic, copy) NSNumber *glassesMatteAllowed;

// Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging

+ (id)apertureKey;
+ (id)depthInfoKey;
+ (id)focusRectKey;
+ (id)glassesMatteAllowedKey;

- (double)aperture;
- (bool)canAdjustApertureValue;
- (bool)canRenderDepth;
- (id)capturedAperture;
- (id)capturedFocusRect;
- (id)depthInfo;
- (id)focusRect;
- (id)glassesMatteAllowed;
- (id)initWithAdjustment:(id)arg1;
- (double)maximumAperture;
- (double)minimumAperture;
- (id)pasteKeysForMediaType:(long long)arg1;
- (void)setAperture:(double)arg1;
- (void)setDepthInfo:(id)arg1;
- (void)setFocusRect:(id)arg1;
- (void)setGlassesMatteAllowed:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUIEdit.framework/PhotosUIEdit

- (id)analyticsKeysBlocklist;
- (id)analyticsPayload;

@end
