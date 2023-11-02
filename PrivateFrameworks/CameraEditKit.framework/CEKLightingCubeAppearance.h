
@interface CEKLightingCubeAppearance : NSObject <NSCopying, NSMutableCopying> {
    struct CGGradient { } * _background;
    struct CGColor { } * _bottomFill;
    struct CGGradient { } * _bottomInnerGlow;
    struct CGGradient { } * _bottomMask;
    struct CGGradient { } * _bottomOuterGlow;
    struct CGColor { } * _stroke;
    struct CGColor { } * _topFill;
    struct CGGradient { } * _topGlow;
    struct CGGradient { } * _topMask;
    struct CGGradient { } * _topOver;
    double  _verticalFillBackIntensity;
    struct CGColor { } * _verticalFillColor;
    double  _verticalFillFrontIntensity;
}

@property (nonatomic, readonly) struct CGGradient { }*background;
@property (nonatomic, readonly) struct CGColor { }*bottomFill;
@property (nonatomic, readonly) struct CGGradient { }*bottomInnerGlow;
@property (nonatomic, readonly) struct CGGradient { }*bottomMask;
@property (nonatomic, readonly) struct CGGradient { }*bottomOuterGlow;
@property (nonatomic, readonly) struct CGColor { }*stroke;
@property (nonatomic, readonly) struct CGColor { }*topFill;
@property (nonatomic, readonly) struct CGGradient { }*topGlow;
@property (nonatomic, readonly) struct CGGradient { }*topMask;
@property (nonatomic, readonly) struct CGGradient { }*topOver;
@property (nonatomic, readonly) double verticalFillBackIntensity;
@property (nonatomic, readonly) struct CGColor { }*verticalFillColor;
@property (nonatomic, readonly) double verticalFillFrontIntensity;

+ (id)appearanceFrom:(id)arg1 to:(id)arg2 progress:(double)arg3;

- (struct CGGradient { }*)background;
- (struct CGColor { }*)bottomFill;
- (struct CGGradient { }*)bottomInnerGlow;
- (struct CGGradient { }*)bottomMask;
- (struct CGGradient { }*)bottomOuterGlow;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithStroke:(struct CGColor { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CGColor { }*)stroke;
- (struct CGColor { }*)topFill;
- (struct CGGradient { }*)topGlow;
- (struct CGGradient { }*)topMask;
- (struct CGGradient { }*)topOver;
- (double)verticalFillBackIntensity;
- (struct CGColor { }*)verticalFillColor;
- (double)verticalFillFrontIntensity;

@end
