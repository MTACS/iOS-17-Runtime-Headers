
@interface PICropAdjustmentController : PIAdjustmentController

@property (nonatomic) double angle;
@property (nonatomic) double angleRadians;
@property (nonatomic) long long constraintHeight;
@property (nonatomic) long long constraintWidth;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (getter=isOriginalCrop, nonatomic) bool originalCrop;
@property (nonatomic) double pitch;
@property (nonatomic) double pitchRadians;
@property (getter=isSmart, nonatomic) bool smart;
@property (nonatomic) double yaw;
@property (nonatomic) double yawRadians;

// Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging

+ (id)angleKey;
+ (id)constraintHeightKey;
+ (id)constraintWidthKey;
+ (id)heightKey;
+ (id)originalCropKey;
+ (id)pitchKey;
+ (id)smartKey;
+ (id)widthKey;
+ (id)xOriginKey;
+ (id)yOriginKey;
+ (id)yawKey;

- (double)angle;
- (double)angleRadians;
- (long long)constraintHeight;
- (long long)constraintWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (id)initWithAdjustment:(id)arg1;
- (bool)isCropConstrained;
- (bool)isCropIdentityForImageSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)isGeometryIdentityForImageSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)isOriginalCrop;
- (bool)isSettingEqual:(id)arg1 forKey:(id)arg2;
- (bool)isSmart;
- (id)pasteKeysForMediaType:(long long)arg1;
- (double)pitch;
- (double)pitchRadians;
- (void)setAngle:(double)arg1;
- (void)setAngleRadians:(double)arg1;
- (void)setAutoCropped:(bool)arg1;
- (void)setConstraintHeight:(long long)arg1;
- (void)setConstraintWidth:(long long)arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOriginalCrop:(bool)arg1;
- (void)setPitch:(double)arg1;
- (void)setPitchRadians:(double)arg1;
- (void)setSmart:(bool)arg1;
- (void)setYaw:(double)arg1;
- (void)setYawRadians:(double)arg1;
- (id)visualInputKeys;
- (double)yaw;
- (double)yawRadians;

// Image: /System/Library/PrivateFrameworks/PhotosUIEdit.framework/PhotosUIEdit

- (id)analyticsKeysBlocklist;
- (id)analyticsPayload;

@end
