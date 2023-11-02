
@interface PFMutableCameraAdjustments : PFCameraAdjustments

@property (nonatomic) unsigned long long cinematicVideoRenderingVersion;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (getter=isDepthEnabled, nonatomic) bool depthEnabled;
@property (nonatomic, copy) NSString *effectFilterName;
@property (nonatomic, copy) NSString *portraitEffectFilterName;
@property (nonatomic, retain) AVApplePortraitMetadata *portraitMetadata;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setCinematicVideoRenderingVersion:(unsigned long long)arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDepthEnabled:(bool)arg1;
- (void)setEffectFilterName:(id)arg1;
- (void)setPortraitEffectFilterName:(id)arg1;
- (void)setPortraitMetadata:(id)arg1;

@end
