
@interface UIPatternCGColor : UICGColor {
    struct CGColor { } * _cachedUnflippedColor;
}

- (id)colorSpaceName;
- (void)dealloc;
- (id)description;
- (bool)getHue:(double*)arg1 saturation:(double*)arg2 brightness:(double*)arg3 alpha:(double*)arg4;
- (bool)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4;
- (bool)getWhite:(double*)arg1 alpha:(double*)arg2;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (bool)isPatternColor;

@end
