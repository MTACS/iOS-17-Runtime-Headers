
@interface HKStrokeStyle : NSObject <NSCopying> {
    int  _blendMode;
    long long  _dashStyle;
    int  _lineCap;
    int  _lineJoin;
    double  _lineWidth;
    UIColor * _strokeColor;
}

@property (nonatomic) int blendMode;
@property (nonatomic) long long dashStyle;
@property (nonatomic) int lineCap;
@property (nonatomic) int lineJoin;
@property (nonatomic) double lineWidth;
@property (nonatomic, copy) UIColor *strokeColor;

+ (id)strokeStyleWithColor:(id)arg1 lineWidth:(double)arg2;

- (void).cxx_destruct;
- (void)applyToContext:(struct CGContext { }*)arg1;
- (void)applyToContext:(struct CGContext { }*)arg1 dashPhase:(double)arg2;
- (int)blendMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dashStyle;
- (id)init;
- (int)lineCap;
- (int)lineJoin;
- (double)lineWidth;
- (void)setBlendMode:(int)arg1;
- (void)setDashStyle:(long long)arg1;
- (void)setLineCap:(int)arg1;
- (void)setLineJoin:(int)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (id)strokeColor;

@end
