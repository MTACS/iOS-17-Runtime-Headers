
@interface TSDBezierPathSource : TSDPathSource <TSDMixing> {
    bool  mIsRectangular;
    struct CGSize { 
        double width; 
        double height; 
    }  mNaturalSize;
    TSDBezierPath * mPath;
}

@property (nonatomic) struct CGSize { double x1; double x2; } naturalSize;

+ (id)pathSourceWithBezierPath:(id)arg1;

- (id)bezierPathWithoutFlips;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBezierPath:(id)arg1;
- (id)initWithNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)isCircular;
- (bool)isEqual:(id)arg1;
- (bool)isRectangular;
- (bool)isRectangularForever;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (struct CGSize { double x1; double x2; })naturalSize;
- (void)p_setBezierPath:(id)arg1;
- (void)setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformToNaturalSize;

@end
