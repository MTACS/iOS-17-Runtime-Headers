
@interface CUIPSDGradientDoubleOpacityStop : CUIPSDGradientOpacityStop <NSCoding> {
    double  leadOutOpacity;
}

+ (id)doubleOpacityStopWithLocation:(double)arg1 leadInOpacity:(double)arg2 leadOutOpacity:(double)arg3;
+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(double)arg1 leadInOpacity:(double)arg2 leadOutOpacity:(double)arg3;
- (bool)isDoubleStop;
- (double)leadInOpacity;
- (double)leadOutOpacity;

@end
