
@interface IFGraphicsContext : NSObject {
    struct CGContext { } * _cgContext;
    unsigned long long  _preset;
}

@property (nonatomic) int blendMode;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) struct CGContext { }*cgContext;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, retain) IFColor *fillColor;
@property (nonatomic, readonly) IFImage *image;
@property (nonatomic) double lineWidth;
@property (nonatomic, readonly) unsigned long long preset;
@property (nonatomic, readonly) double scale;
@property (nonatomic, retain) IFColor *strokeColor;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;

+ (id)bitmapContextWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 preset:(unsigned long long)arg3;

- (int)blendMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGContext { }*)cgContext;
- (void)clear;
- (void)clipToMaskCGImage:(struct CGImage { }*)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)data;
- (void)dealloc;
- (void)drawCGImage:(struct CGImage { }*)arg1 centeredInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)drawCGImage:(struct CGImage { }*)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)drawSymbolImage:(id)arg1 centeredInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)drawText:(id)arg1 fontName:(id)arg2 fontSize:(double)arg3 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)fillColor;
- (void)fillPath:(struct CGPath { }*)arg1;
- (void)fillRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)image;
- (id)imageFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCGContext:(struct CGContext { }*)arg1 preset:(unsigned long long)arg2;
- (double)lineWidth;
- (void)popState;
- (unsigned long long)preset;
- (void)pushState;
- (double)scale;
- (void)setBlendMode:(int)arg1;
- (void)setFillColor:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)strokeColor;
- (void)strokePath:(struct CGPath { }*)arg1;
- (void)strokeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;

@end
