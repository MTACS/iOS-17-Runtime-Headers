
@interface TSDGradientStop : NSObject <NSCopying, NSMutableCopying, TSDMixing> {
    TSUColor * mColor;
    double  mFraction;
    double  mInflection;
}

@property (nonatomic, readonly, copy) TSUColor *color;
@property (nonatomic, readonly) double fraction;
@property (nonatomic, readonly) double inflection;

+ (id)gradientStopWithColor:(id)arg1 fraction:(double)arg2;
+ (id)gradientStopWithColor:(id)arg1 fraction:(double)arg2 inflection:(double)arg3;

- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (double)fraction;
- (id)gradientStopWithColor:(id)arg1;
- (id)gradientStopWithInflection:(double)arg1;
- (unsigned long long)hash;
- (double)inflection;
- (id)initWithColor:(id)arg1 fraction:(double)arg2;
- (id)initWithColor:(id)arg1 fraction:(double)arg2 inflection:(double)arg3;
- (id)initWithGradientStop:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)p_setColor:(id)arg1;
- (void)p_setFraction:(double)arg1;
- (void)p_setInflection:(double)arg1;

@end
