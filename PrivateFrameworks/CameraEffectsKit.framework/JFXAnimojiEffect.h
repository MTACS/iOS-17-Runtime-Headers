
@interface JFXAnimojiEffect : JFXEffect {
    long long  _captureInterfaceOrientation;
}

@property (nonatomic) long long captureInterfaceOrientation;
@property (nonatomic, readonly) UIImage *thumbnail;

+ (id)animojiIDs;
+ (id)createAnimojiEffectForID:(id)arg1;
+ (id)createMemojiEffectWithContentsOfFile:(id)arg1 identifier:(id)arg2;
+ (bool)isAvatarKitAvailable;
+ (bool)supportsSecureCoding;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_affineTransformFromEffectRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toSize:(struct CGSize { double x1; double x2; })arg2 basisOrigin:(int)arg3;
- (void)_convertRenderEffectPoints:(struct CGPoint { double x1; double x2; }*)arg1 numPoints:(unsigned long long)arg2 fromBasisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 basisOrigin:(int)arg4;
- (void)_convertRenderEffectPoints:(struct CGPoint { double x1; double x2; }*)arg1 numPoints:(unsigned long long)arg2 toBasisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 basisOrigin:(int)arg4;
- (struct PVCGPointQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })_convertRenderEffectPoints:(struct PVCGPointQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })arg1 toBasisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 basisOrigin:(int)arg3;
- (unsigned long long)avatarVersionNumber;
- (long long)captureInterfaceOrientation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)loadRenderEffect;
- (void)loadRenderEffectInBackgroundWithCompletionOnMainQueue:(id /* block */)arg1;
- (void)loadRenderEffectOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)renderEffect;
- (void)setCaptureInterfaceOrientation:(long long)arg1;
- (id)thumbnail;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 basisOrigin:(int)arg2;
- (int)type;

@end
