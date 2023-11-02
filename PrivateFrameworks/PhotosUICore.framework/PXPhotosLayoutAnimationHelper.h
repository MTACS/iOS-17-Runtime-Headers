
@interface PXPhotosLayoutAnimationHelper : NSObject <PXGAnimationDelegate> {
    PXPhotosLayoutAnimationContext * _context;
    bool  _wantsFromSnapshot;
    bool  _wantsToSnapshot;
}

@property (nonatomic, readonly) long long animationCurve;
@property (nonatomic, readonly) double animationDuration;
@property (nonatomic, readonly) PXPhotosLayoutAnimationContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int highFrameRateReason;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsAnimationWithSpriteTransfer;
@property (nonatomic, readonly) bool wantsDoubleSidedAnimations;
@property (nonatomic, readonly) bool wantsFromSnapshot;
@property (nonatomic, readonly) bool wantsPresentationAdjustment;
@property (nonatomic, readonly) bool wantsToSnapshot;

- (void).cxx_destruct;
- (void)animation:(id)arg1 adjustGeometries:(inout struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*)arg2 styles:(inout struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; }*)arg3 infos:(inout struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg4 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg5;
- (void)animation:(id)arg1 adjustGeometries:(inout struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*)arg2 styles:(inout struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; }*)arg3 infos:(inout struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg4 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg5;
- (void)animation:(id)arg1 prepareWithRootLayout:(id)arg2 viewportShift:(struct CGPoint { double x1; double x2; })arg3;
- (long long)animationCurve;
- (double)animationDuration;
- (id)context;
- (unsigned int)highFrameRateReason;
- (id)init;
- (id)initWithContext:(id)arg1;
- (bool)wantsAnimationWithSpriteTransfer;
- (bool)wantsDoubleSidedAnimations;
- (bool)wantsFromSnapshot;
- (bool)wantsPresentationAdjustment;
- (bool)wantsToSnapshot;

@end
