
@interface CUIPSDGradientOpacityStop : CUIPSDGradientStop <NSCoding> {
    double  opacity;
}

+ (void)initialize;
+ (id)opacityStopWithLocation:(double)arg1 opacity:(double)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(double)arg1 opacity:(double)arg2;
- (bool)isOpacityStop;
- (double)opacity;
- (double)opacityLocation;

@end