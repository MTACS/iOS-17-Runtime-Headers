
@interface _PXCuratedLibraryLayoutSkimmingSlideshowAnimationHelper : PXCuratedLibraryLayoutAnimationHelper {
    struct PXSimpleIndexPath { 
        long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _fromIndexPath;
    struct PXSimpleIndexPath { 
        long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _toIndexPath;
    unsigned long long  _userInterfaceDirection;
}

- (void)_adjustGeometries:(inout struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*)arg1 styles:(inout struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; }*)arg2 infos:(inout struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg3 spriteIndexRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg4 appearing:(bool)arg5;
- (bool)_shoulAnimateSpriteWithInfo:(const struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg1 matchingSectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2 spriteKind:(out unsigned char*)arg3;
- (void)animation:(id)arg1 adjustGeometries:(inout struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*)arg2 styles:(inout struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; }*)arg3 infos:(inout struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg4 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg5;
- (void)animation:(id)arg1 adjustGeometries:(inout struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*)arg2 styles:(inout struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; }*)arg3 infos:(inout struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg4 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg5;
- (id)animation:(id)arg1 doubleSidedAnimatedSpriteIndexesForModifiedSpriteIndexes:(id)arg2 rootLayout:(id)arg3 presentedGeometries:(const struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*)arg4 styles:(const struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; }*)arg5 infos:(const struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg6;
- (long long)animationCurve;
- (double)animationDuration;
- (id)initWithLayout:(id)arg1;
- (void)setUserData:(id)arg1;
- (bool)wantsDoubleSidedAnimations;

@end
