
@interface TSDReflection : NSObject <NSCopying, NSMutableCopying, TSDMixing> {
    double  mFadeAcceleration;
    double  mOpacity;
}

@property (nonatomic, readonly) double fadeAcceleration;
@property (nonatomic, readonly) double opacity;

+ (bool)canMixWithNilObjects;
+ (id)reflection;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)fadeAcceleration;
- (unsigned long long)hash;
- (id)init;
- (id)initWithOpacity:(double)arg1;
- (id)initWithOpacity:(double)arg1 fadeAcceleration:(double)arg2;
- (bool)isEqual:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)opacity;

@end
