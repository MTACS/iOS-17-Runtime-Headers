
@interface NURegion : NSObject <NSCopying, NSMutableCopying> {
    void * _imp;
}

+ (id)region;
+ (id)regionWithRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
+ (id)regionWithRegion:(id)arg1;

- (double)area;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })bounds;
- (id)convertImageRegion:(id)arg1 fromRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 toRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (double)density;
- (id)description;
- (void)enumerateRects:(id /* block */)arg1;
- (unsigned long long)hash;
- (bool)includesRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (bool)includesRegion:(id)arg1;
- (id)init;
- (id)initWithRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (id)initWithRegion:(id)arg1;
- (bool)intersectsRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (bool)intersectsRegion:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRegion:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)regionByAddingRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (id)regionByAddingRegion:(id)arg1;
- (id)regionByApplyingAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundPolicy:(long long)arg2;
- (id)regionByApplyingOrientation:(long long)arg1 imageSize:(struct { long long x1; long long x2; })arg2;
- (id)regionByClippingToRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (id)regionByClippingToRegion:(id)arg1;
- (id)regionByExcludingRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (id)regionByExcludingRegion:(id)arg1;
- (id)regionByFlippingInRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (id)regionByGrowingBy:(struct { long long x1; long long x2; })arg1;
- (id)regionByGrowingBy:(struct { long long x1; long long x2; })arg1 inRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2;
- (id)regionByRemovingRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (id)regionByRemovingRegion:(id)arg1;
- (id)regionByScalingBy:(struct CGPoint { double x1; double x2; })arg1 withRounding:(long long)arg2;
- (id)regionByShrinkingBy:(struct { long long x1; long long x2; })arg1;
- (id)regionByShrinkingBy:(struct { long long x1; long long x2; })arg1 inRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2;
- (id)regionByTranslatingBy:(struct { long long x1; long long x2; })arg1;
- (id)regionWithSubregionsOfMinimumDensity:(double)arg1;

@end
