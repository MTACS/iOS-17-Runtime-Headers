
@interface TSDPathSource : NSObject <NSCopying, TSDMixing> {
    bool  mHorizontalFlip;
    bool  mVerticalFlip;
}

@property bool hasHorizontalFlip;
@property bool hasVerticalFlip;

+ (id)pathSourceForShapeType:(int)arg1 naturalSize:(struct CGSize { double x1; double x2; })arg2;

- (id)bezierPath;
- (id)bezierPathWithoutFlips;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasHorizontalFlip;
- (bool)hasVerticalFlip;
- (id)interiorWrapPath;
- (bool)isCircular;
- (bool)isEqual:(id)arg1;
- (bool)isRectangular;
- (bool)isRectangularForever;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (struct CGSize { double x1; double x2; })naturalSize;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })pathFlipTransform;
- (Class)preferredControllerClass;
- (void)scaleToNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHasHorizontalFlip:(bool)arg1;
- (void)setHasVerticalFlip:(bool)arg1;
- (void)setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (double)uniformScaleForScalingToNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (id)valueForSetSelector:(SEL)arg1;

@end
