
@interface _SLSheetMaskLayer : CALayer {
    UIColor * _clipBackgroundColor;
    double  _clipCornerRadius;
}

@property (nonatomic, retain) UIColor *clipBackgroundColor;
@property (nonatomic) double clipCornerRadius;

- (void).cxx_destruct;
- (id)clipBackgroundColor;
- (double)clipCornerRadius;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)setClipBackgroundColor:(id)arg1;
- (void)setClipCornerRadius:(double)arg1;

@end
