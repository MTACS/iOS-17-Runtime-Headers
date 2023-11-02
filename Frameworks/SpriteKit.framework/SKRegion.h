
@interface SKRegion : NSObject <NSCopying, NSSecureCoding> {
    PKRegion * _region;
}

@property (nonatomic, readonly) struct CGPath { }*path;

+ (id)infiniteRegion;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)containsPoints:(const float*)arg1 locationStride:(long long)arg2 results:(char *)arg3 resultsStride:(long long)arg4 count:(int)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(struct CGPath { }*)arg1;
- (id)initWithRadius:(float)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)inverseRegion;
- (bool)isEmpty;
- (bool)isEqualToRegion:(id)arg1;
- (bool)isInfinite;
- (struct CGPath { }*)path;
- (id)regionByDifferenceFromRegion:(id)arg1;
- (id)regionByIntersectionWithRegion:(id)arg1;
- (id)regionByUnionWithRegion:(id)arg1;

@end
